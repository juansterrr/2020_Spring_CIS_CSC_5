/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
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
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Savitch Diet Coke Problem"<<endl;
    cout<<"Type 2 for Gaddis Trig Problem"<<endl;
    cout<<"Type 3 for Savitch Sums Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':
            cout<<"Place Diet Coke Problem Here"<<endl;
            break;
        case '2':
            cout<<"Place Trig Problem Here"<<endl;
            break;
        case '3':
            cout<<"Place Sums Problem Here"<<endl;
            break;
        default:
            cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}