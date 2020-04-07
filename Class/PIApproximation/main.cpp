/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 7th, 2020, 10:50 AM
 * Purpose:  C++ Template
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Number Generator
#include <ctime>      //The time library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow
const unsigned int MAXRND=1<<31;//Maximum Random Number

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    unsigned int nDarts;//Number of Darts to throw
    unsigned int inCirc;//Number of Darts that fall within the circle
    
    //Initialize Variables
    nDarts=1000000;
    inCirc=0;
    
    //Map inputs to outputs -> i.e. process the inputs
    for(int darts=1;darts<=nDarts;darts++){
        float x=1.0f*rand()/MAXRND;//Scale to [0,1]
        float y=1.0f*rand()/MAXRND;//Scale to [0,1]
        if((x*x+y*y)<=1)inCirc++;//Pythagorean Theorem 
    }
    
    //Display the outputs
    cout<<"The actual value of PI = "<<4*atan(1)<<endl;
    cout<<"The approximate value of PI = "<<4.0f*inCirc/nDarts;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations