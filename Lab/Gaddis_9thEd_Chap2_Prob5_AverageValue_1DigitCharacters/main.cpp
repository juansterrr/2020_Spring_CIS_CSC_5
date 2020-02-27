/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 25, 2020, 11:33 AM
 * Purpose: Average 5 Values
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    unsigned char num1,num2,num3,num4,num5;
    unsigned short total;
    float average;
    
    //Variable Initialization
    cout<<"This program averages positive 1 Digit Integers"<<endl;
    cout<<"Input 5 positive 1 Digit Integers"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    
    //Mapping Process Inputs to Outputs
    total = (num1-'0')+
            (num2-48)+
            (num3-'0')+
            (num4-48)+
            (num5-'0');
    average = total/5.0f;
    
    //Display Outputs
    cout<<"The inputs to the program are"<<endl;
    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
    cout<<"The total = "<<total<<endl;
    cout<<"The average = "<<average<<endl;
    
    //Exit stage right!
    return 0;
}