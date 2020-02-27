/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 25th, 2020, 12:15 PM
 * Purpose: Big C
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
    char x;//This character used to create Banner C
    
    //Variable Initialization
    cout<<"Input the Character desired for a Banner C"<<endl;
    cin>>x;
    
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    cout<<endl<<endl<<endl;
    cout<<" "<<x<<x<<x<<endl;
    cout<<x<<"   "<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<"   "<<x<<endl;
    cout<<" "<<x<<x<<x<<endl;

    //Exit stage right!
    return 0;
}