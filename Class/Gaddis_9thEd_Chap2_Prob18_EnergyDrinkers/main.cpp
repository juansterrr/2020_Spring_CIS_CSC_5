/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 25th, 2020, 12:33 PM
 * Purpose: Number of Energy Drinkers
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const int PERCENT=100;//PERCENTAGE conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    int eDrnkrs,ctDrnks,mrethn1;
    float perc1P,percCit;
    
    //Variable Initialization
    eDrnkrs=1.65e4;//16,500 surveyed
    perc1P=1.5e-1f;//15% drink 1 or more per week
    percCit=5.8e-1f;//58% are citrus flavor drinkers
    
    //Mapping Process Inputs to Outputs
    mrethn1=eDrnkrs*perc1P;
    ctDrnks=percCit*mrethn1;
    
    //Display Outputs
    cout<<"Number of Energy Drinkers = "<<eDrnkrs<<endl;
    cout<<"Percentage that Drink 1 or more/week "
            <<perc1P*PERCENT<<"%"<<endl;
    cout<<"Number of Energy Drinkers "<<
            "to have 1 or more/week = "<<mrethn1<<endl;
    cout<<"Percentage that prefer Citrus flavor "
            <<percCit*PERCENT<<"%"<<endl;
    cout<<"Number of Citrus Drinkers = "
            <<ctDrnks<<endl;
    

    //Clean Up
    
    //Exit stage right!
    return 0;
}