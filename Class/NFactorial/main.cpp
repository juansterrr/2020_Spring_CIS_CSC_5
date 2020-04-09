/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9th, 2020, 10:45 AM
 * Purpose: Factorial Product
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
    unsigned int n;//Number of terms in the product
    unsigned int nFactrl;//The product of n Terms = n!
    
    //Variable Initialization
    n=5;
    nFactrl=1;//Oth Term
    
    //Mapping Process Inputs to Outputs
    for(int term=1;term<=n;term++){
        nFactrl*=term;
    }
    
    //Display Outputs
    cout<<n<<"! = "<<nFactrl<<endl;
 
    //Clean Up

    //Exit stage right!
    return 0;
}