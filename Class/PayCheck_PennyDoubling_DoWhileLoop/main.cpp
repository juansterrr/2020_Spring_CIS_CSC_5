/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 7th, 2020, 10:07 AM
 * Purpose:  How to solve the penny problem
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow
const int CNVDOLS=100;//Conversion to dollars

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    unsigned int payDay; //Pay per day in pennies
    unsigned int payChk; //Pay check in pennies
    unsigned short nDays;//Number of Days to work
    
    //Initialize Variables
    cout<<"How many Days would you like work"<<endl;
    cin>>nDays;
    payDay=1;
    payChk=payDay;
    
    //Map inputs to outputs -> i.e. process the inputs
    if(!(nDays<=1)){
        int day=2;
        do{
            payDay*=2;
            payChk+=payDay;
            day++;
        }while(day<=nDays);
    }
    
    //Display the outputs
    unsigned int dollars=payChk/CNVDOLS;
    unsigned int pennies=payChk%CNVDOLS;
    cout<<"Paycheck = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies<<endl;
    
   //Exit Stage Right!
    return 0;
}