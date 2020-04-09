/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9th, 2020, 10:30 AM
 * Purpose: PI Approximation using a sequence
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Mathc Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    
    //Variable Declarations
    unsigned int nTerms;//Number of terms in the Sequence
    float piApprx;      //Approximation to PI
    char sign;          //Sign for each term
    
    //Variable Initialization
    nTerms=100;
    piApprx=1;
    sign=1;
    
    //Mapping Process Inputs to Outputs
    for(int denom=3,term=2;term<=nTerms;denom+=2,term++){
        sign*=-1;
        piApprx+=(static_cast<float>(sign)/denom);
    }
    piApprx*=4;
    
    //Display Outputs
    cout<<"The approximation to PI        = "<<piApprx<<endl;
    cout<<"The exact value of PI          = "<<4*atan(1)<<endl;
    cout<<"The error in the Approximation = "<<piApprx-4*atan(1)<<endl;
 
    //Clean Up

    //Exit stage right!
    return 0;
}