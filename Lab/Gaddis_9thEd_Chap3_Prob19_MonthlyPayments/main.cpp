/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 10th, 2020, 10:03 AM
 * Purpose: Loan Problem
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //cmath library for pow function
#include <iomanip>    //Format Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const unsigned char CNVMNTH=12; //Number of months/year
const unsigned char CNVPERC=100;//Percent to Decimal

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    float  intRate,//Interest Rate in %/year
          loanAmt; //Loan Amount in $'s
    unsigned char numCmpd;//Number of compounding periods Months
    float mnPymnt,//Monthly Payment in $'s 
          totPaid,//Total amount paid in $'s
          intPaid;//Interest Paid in $'s
    
    //Variable Initialization
    intRate=12;  //12 percent/year
    loanAmt=1e4f;//$10,000 
    numCmpd=36;  //Number of Compounding Periods
    
    //Mapping Process Inputs to Outputs
    intRate/=static_cast<float>(CNVMNTH);//Convert %/month
    intRate/=static_cast<float>(CNVPERC);//Convert to Decimal
    float temp=pow(1+intRate,numCmpd);//Calc once use twice
    mnPymnt=intRate>0?//Monthly Payment blows up at 0% interest rate
            intRate*temp*loanAmt/(temp-1)://temp used twice
            loanAmt/numCmpd;//What if interest rate was equal to 0
    totPaid=mnPymnt*numCmpd;//Total Paid for Loan
    intPaid=totPaid-loanAmt;//Total interest paid for Loan
    
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:       $"<<loanAmt<<endl;
    cout<<"Interest Rate:      "<<setw(5)
            <<static_cast<int>(intRate*CNVPERC)
            <<"%"<<endl;
    cout<<"Monthly Payment:   $"<<setw(8)<<mnPymnt<<endl;
    cout<<"Interest Paid:     $"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid:        $"<<setw(8)<<totPaid<<endl;
    
    //Exit stage right!
    return 0;
}