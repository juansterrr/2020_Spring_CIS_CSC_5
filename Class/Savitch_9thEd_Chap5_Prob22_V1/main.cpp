/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 23rd, 2020, 09:46 AM
 * Purpose:  Fill a Square/Rectangle with a Letter
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    char letter; //Letter to Fill Square
    char size;   //Size is a character meaning range is 1 digit [0,9]
    
    //Initialize Variables
    cout<<"This program draws a square/rectangle"<<endl;
    cout<<"Input the 1 digit size and the character used to draw it"<<endl;
    cout<<"i.e. 5 X"<<endl;
    cin>>size>>letter;
    
    //Map inputs to outputs -> i.e. process the inputs
    
    //Display the outputs
    for(int rows=1;rows<=(size-'0');rows++){
        for(int cols=1;cols<=(size-'0');cols++){
            cout<<letter;
        }
        if(rows<size-48)cout<<endl;
    }
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations