/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 25th, 2018, 10:30 AM
 * Purpose:  Factorial
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int fctrl(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n,fact;
    
    //Input or initialize values Here
    n=5;
 
    //Output the results
    cout<<n<<"!="<<fctrl(n)<<endl;
 
    //Exit
    return 0;
}

int fctrl(int n){
    //Base Condition
    if(n<=1)return 1;
    //Recursive Call
    return fctrl(n-1)*n;
}