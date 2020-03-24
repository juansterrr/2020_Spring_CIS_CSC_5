/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Room Problem from Savitch
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
    unsigned short rmOcp,//Room Occupancy
                  nmAtnd;//Number attended Conference
                  
    short diff;          //Difference
    string msg;          //Message to output
    
    //Variable Initialization
    cout<<"What is the Occupancy of the Room"<<endl;
    cin>>rmOcp;
    cout<<"How many are in attendance"<<endl;
    cin>>nmAtnd;
    
    //Mapping Process Inputs to Outputs
    diff=rmOcp-nmAtnd;
    
    //Display Outputs
    msg=diff>=0?"Increase number of people by ":"Reduce number of people by ";
    cout<<msg;
    cout<<(diff>=0?diff:-diff);
    msg=diff>=0?" will be allowed without violation.":" to avoid fire violation.";
    cout<<msg;
    
    //Clean Up
    
    //Exit stage right!
    return 0;
}