/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: City
 *
 * Created on February 28, 2017, 6:40 PM
 */

#include <iostream>

using namespace std;

/*
 * this program calculates the sale tax on a $95 purchase
 */
int main(int argc, char** argv) {
    float DollarAmt, StateTax, CountyTax, AmtWtState, AmtWtCnt,TotalTax;
    DollarAmt=95;
    StateTax=0.04;
    CountyTax=0.02;
    AmtWtState=DollarAmt*StateTax;
    AmtWtCnt=DollarAmt*CountyTax;
    TotalTax=AmtWtState+AmtWtCnt;
    
    cout<<"$"<<TotalTax;

    return 0;
}

