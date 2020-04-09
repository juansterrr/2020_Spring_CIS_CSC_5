/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9th, 2020, 10:45 AM
 * Purpose: e^x
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
    unsigned int n;//Number of terms in the product factorial
    unsigned int eterms;//Number of terms in the exp approximation
    unsigned int nFactrl;//The product of n Terms = n!
    float exApprx;//The Approximation of e^x
    float x;      //The power of exp
    
    //Variable Initialization
    eterms=10;
    x=0.5;
    exApprx=1;
    
    //Calculate e^x
    for(int eterm=1;eterm<=eterms;eterm++){
    
        nFactrl=1;//Oth Term
        //Mapping Process Inputs to Outputs
        for(int term=1;term<=eterm;term++){
            nFactrl*=term;
        }
        
        exApprx+=(pow(x,eterm)/nFactrl);
    }
    
    //Display Outputs
    cout<<"e^"<<x<<" approximate = "<<exApprx<<endl;
    cout<<"e^"<<x<<" exact       = "<<exp(x)<<endl;
 
    //Clean Up

    //Exit stage right!
    return 0;
}