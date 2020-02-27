/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 27, 2020, 10:00 AM
 * Purpose: Query Data Type Size
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>   //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const int NIBBLES=2;//2 Nibbles in a Bytes
const int BITS=8;   //8 Bits in a Bytes

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    
    //Variable Declarations
    
    //Variable Initialization
    
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    cout<<"The # of Bytess for Each Integer Data Type"<<endl;
    
    cout<<endl;
    cout<<"The size of a character = "
            <<sizeof(char)<<" Byte"<<endl;
    cout<<"The size of a character = "
            <<NIBBLES*sizeof(char)<<" Nibbles"<<endl;
    cout<<"The size of a character = "
            <<BITS*sizeof(char)<<" Bits"<<endl;
    cout<<"Range = (-2^7,2^7-1) - ("
            <<-pow(2,7)<<","<<pow(2,7)-1<<")"<<endl;
    
    cout<<"The size of a unsigned character = "
            <<sizeof(unsigned char)<<" Byte"<<endl;
    cout<<"The size of a unsigned character = "
            <<NIBBLES*sizeof(unsigned char)<<" Nibbles"<<endl;
    cout<<"The size of a unsigned character = "
            <<BITS*sizeof(unsigned char)<<" Bits"<<endl;
    cout<<"Range = (0,2^8-1) - (0,"
            <<pow(2,8)-1<<")"<<endl;   
    
    cout<<endl;
    cout<<"The size of a short = "
            <<sizeof(short)<<" Bytes"<<endl;
    cout<<"The size of a short = "
            <<NIBBLES*sizeof(short)<<" Nibbles"<<endl;
    cout<<"The size of a short = "
            <<BITS*sizeof(short)<<" Bits"<<endl;
    cout<<"Range = (-2^15,2^15-1) - ("
            <<-pow(2,15)<<","<<pow(2,15)-1<<")"<<endl;
    
    cout<<"The size of a unsigned short = "
            <<sizeof(unsigned short)<<" Bytes"<<endl;
    cout<<"The size of a unsigned short = "
            <<NIBBLES*sizeof(unsigned short)<<" Nibbles"<<endl;
    cout<<"The size of a unsigned short = "
            <<BITS*sizeof(unsigned short)<<" Bits"<<endl;
    cout<<"Range = (0,2^16-1) - (0,"
            <<pow(2,16)-1<<")"<<endl;   
    
    cout<<endl;
    cout<<"The size of a bool = "
            <<sizeof(bool)<<" Bytes"<<endl;
    cout<<"The size of a bool = "
            <<NIBBLES*sizeof(bool)<<" Nibbles"<<endl;
    cout<<"The size of a bool = "
            <<BITS*sizeof(bool)<<" Bits"<<endl;
    cout<<"Range = (-2^7,2^7-1) - ("
            <<-pow(2,7)<<","<<pow(2,7)-1<<")"<<endl;
    
    cout<<endl;
    cout<<"The size of a int = "
            <<sizeof(int)<<" Bytes"<<endl;
    cout<<"The size of a int = "
            <<NIBBLES*sizeof(int)<<" Nibbles"<<endl;
    cout<<"The size of a int = "
            <<BITS*sizeof(int)<<" Bits"<<endl;
    cout<<"Range = (-2^31,2^31-1) - ("
            <<-pow(2,31)<<","<<pow(2,31)-1<<")"<<endl;
        
    cout<<"The size of a unsigned int = "
            <<sizeof(unsigned int)<<" Bytes"<<endl;
    cout<<"The size of a unsigned int = "
            <<NIBBLES*sizeof(unsigned int)<<" Nibbles"<<endl;
    cout<<"The size of a unsigned int = "
            <<BITS*sizeof(unsigned int)<<" Bits"<<endl;
    cout<<"Range = (0,2^32-1) - (0,"
            <<pow(2,32)-1<<")"<<endl;   
 
    cout<<endl;
    cout<<"The size of a long = "
            <<sizeof(long)<<" Bytes"<<endl;
    cout<<"The size of a long = "
            <<NIBBLES*sizeof(long)<<" Nibbles"<<endl;
    cout<<"The size of a long = "
            <<BITS*sizeof(long)<<" Bits"<<endl;
    cout<<"Range = (-2^63,2^63-1) - ("
            <<-pow(2,63)<<","<<pow(2,63)-1<<")"<<endl;
    
    cout<<"The size of a unsigned long = "
            <<sizeof(unsigned long)<<" Bytes"<<endl;
    cout<<"The size of a unsigned long = "
            <<NIBBLES*sizeof(unsigned long)<<" Nibbles"<<endl;
    cout<<"The size of a unsigned long = "
            <<BITS*sizeof(unsigned long)<<" Bits"<<endl;
    cout<<"Range = (0,2^64-1) - (0,"
            <<pow(2,64)-1<<")"<<endl;   

    cout<<endl;
    cout<<"The size of a long long int = "
            <<sizeof(long long int)<<" Bytes"<<endl;
    cout<<"The size of a long long int = "
            <<NIBBLES*sizeof(long long int)<<" Nibbles"<<endl;
    cout<<"The size of a long long int = "
            <<BITS*sizeof(long long int)<<" Bits"<<endl;
    cout<<"Range = (-2^63,2^63-1) - ("
            <<-pow(2,63)<<","<<pow(2,63)-1<<")"<<endl;
    
    cout<<"The size of a unsigned long long int = "
            <<sizeof(unsigned long long int)<<" Bytes"<<endl;
    cout<<"The size of a unsigned long long int = "
            <<NIBBLES*sizeof(unsigned long long int)<<" Nibbles"<<endl;
    cout<<"The size of a unsigned long long int = "
            <<BITS*sizeof(unsigned long long int)<<" Bits"<<endl;
    cout<<"Range = (0,2^64-1) - (0,"
            <<pow(2,64)-1<<")"<<endl;   

    cout<<endl;
    cout<<"Floating Data Types"<<endl;
    
    cout<<endl;
    cout<<"The size of a float = "
            <<sizeof(float)<<" Bytes"<<endl;
    cout<<"The size of a float = "
            <<NIBBLES*sizeof(float)<<" Nibbles"<<endl;
    cout<<"The size of a float = "
            <<BITS*sizeof(float)<<" Bits"<<endl;
    cout<<"Range ~ (+-10^+-38) - (+-10^+-"
            <<pow(2,7)*log10(2)<<")"<<endl;   
    cout<<"Significant Digits = "<<log10(pow(2,23))<<" digits"<<endl;

    cout<<endl;
    cout<<"The size of a double = "
            <<sizeof(double)<<" Bytes"<<endl;
    cout<<"The size of a double = "
            <<NIBBLES*sizeof(double)<<" Nibbles"<<endl;
    cout<<"The size of a double = "
            <<BITS*sizeof(double)<<" Bits"<<endl;
    cout<<"Range ~ (+-10^+-308) - (+-10^+-"
            <<pow(2,10)*log10(2)<<")"<<endl;
    cout<<"Significant Digits = "<<log10(pow(2,53))<<" digits"<<endl;
    
    //Clean Up
    
    //Exit stage right!
    return 0;
}