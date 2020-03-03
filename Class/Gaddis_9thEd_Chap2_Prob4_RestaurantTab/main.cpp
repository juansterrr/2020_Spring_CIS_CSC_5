/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 3rd, 2020, 10:45 AM
 * Purpose: Restaurant Bill
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
float const CNVPNYS=100.0f;//Conversion from Dollars to Pennies
float const HALFPNY=0.005f;//Half Penny for rounding purposes

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    float food,pSlsTx,pTip;//Known
    float slsTax,tip,totBill;//To Calculate
    
    //Variable Initialization
    food=88.67f;//Bill $88.67
    pSlsTx=0.0675f;//6.75 percent sales tax
    pTip=0.2f;//20 percent tip
    
    //Mapping Process Inputs to Outputs
    slsTax=food*pSlsTx;
    //Convert to Pennies and Back
    int iSlsTax=(slsTax+HALFPNY)*CNVPNYS;
    slsTax=iSlsTax/CNVPNYS;
    tip=(food+slsTax)*pTip;
    //Convert to Pennies and Back
    int iTip=(tip+HALFPNY)*CNVPNYS;
    tip=iTip/CNVPNYS;
    //Final Bill
    totBill=food+slsTax+tip;
    //Convert to Pennies and Back
    int iBill=(totBill+HALFPNY)*CNVPNYS;
    totBill=iBill/CNVPNYS;
    
    //Display Outputs
    cout<<"The Wrong Way to Calculate A Tip"<<endl;
    cout<<"Bill for Food: $ "<<food<<endl;
    cout<<"Sales Tax:     $  "<<slsTax<<endl;
    cout<<"Tip:           $ "<<tip<<endl;
    cout<<"                -------"<<endl;
    cout<<"Total:         $"<<totBill<<endl<<endl;
    
    cout<<"The Right Way to Calculate the Tip"<<endl;
    cout<<"Bill for Food: $ "<<food<<endl;
    cout<<"Sales Tax:     $  "<<slsTax<<endl;
    
    tip=food*pTip;
    //Convert to Pennies and Back
    iTip=(tip+HALFPNY)*CNVPNYS;
    tip=iTip/CNVPNYS;
    //Final Bill
    totBill=food+slsTax+tip;
    //Convert to Pennies and Back
    iBill=(totBill+HALFPNY)*CNVPNYS;
    totBill=iBill/CNVPNYS;
    
    cout<<"Tip:           $ "<<tip<<endl;
    cout<<"                -------"<<endl;
    cout<<"Total:         $"<<totBill<<endl<<endl;
    
    //Exit stage right!
    return 0;
}