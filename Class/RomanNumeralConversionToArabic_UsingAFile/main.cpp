/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2020, 11:10 AM
 * Purpose:  Arabic Number to Roman Numerals using file I/O
 */

//System Libraries
#include <iostream>   //I/O Library
#include <fstream>    //File Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned short n2Cnvrt;
    fstream in,out;
    
    //Initialize Variables
    in.open("arabic_number.dat",ios::in);
    out.open("roman_numeral.dat",ios::out);
    in>>n2Cnvrt;
    cout<<"The number to convert read from file = "<<n2Cnvrt<<endl;
    //Check for a valid input
    if(n2Cnvrt>=1 && n2Cnvrt<=3000){
    //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=n2Cnvrt/1000;   //Shift 3 places to the left
        n100s=n2Cnvrt%1000/100;//Remainder of division of 1000 then shift 2 left
        n10s=n2Cnvrt%100/10;   //Remainder of division of 100 then shift 1 left
        n1s=n2Cnvrt%10;        //Remainder of division by 10
        
        //Output the number of 1000's in Roman Numerals
        //Using the Switch Statement
        switch(n1000s){
            case 3:out<<'M';
            case 2:out<<'M';
            case 1:out<<'M';
        }
        
        //Output the number of 100's
        //Using the Ternary Operator
        out<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
        
        //Output the number of 10's
        //Using Independent If Statements
        if(n10s==9)out<<"XC";
        if(n10s==8)out<<"LXXX";
        if(n10s==7)out<<"LXX";
        if(n10s==6)out<<"LX";
        if(n10s==5)out<<"L";
        if(n10s==4)out<<"XL";
        if(n10s==3)out<<"XXX";
        if(n10s==2)out<<"XX";
        if(n10s==1)out<<"X";
        
        //Output the number of 1's
        //Using Dependent If Statements
        if(n1s==9)out<<"IX";
        else if(n1s==8)out<<"VIII";
        else if(n1s==7)out<<"VII";
        else if(n1s==6)out<<"VI";
        else if(n1s==5)out<<"V";
        else if(n1s==4)out<<"IV";
        else if(n1s==3)out<<"III";
        else if(n1s==2)out<<"II";
        else if(n1s==1)out<<"I";
        
        //Reiterate the input value
        out<<" = "<<n2Cnvrt<<endl;
                
    //The Path to Exit
    }else{
        out<<"You have problems following Directions"<<endl;
        out<<"Come back when you decide to comply"<<endl;
        cout<<"You have problems following Directions"<<endl;
        cout<<"Come back when you decide to comply"<<endl;
    }
    
    //Clean up
    in.close();
    out.close();

    //Exit stage right!
    return 0;
}