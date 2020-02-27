/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 127, 2020, 12:33 PM
 * Purpose: Calculate MPG
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
    unsigned char gallons;
    unsigned short miles;
    float mpg;
    
    //Variable Initialization
    gallons=15;
    miles=389;
    
    //Mapping Process Inputs to Outputs
    mpg=static_cast<float>(miles)/gallons;
    
    //Display Outputs
    cout<<miles<<" miles/"<<static_cast<int>(gallons)<<" gallons"
            <<" = "<<mpg<<" miles/gallon"<<endl;
    
    //Exit stage right!
    return 0;
}