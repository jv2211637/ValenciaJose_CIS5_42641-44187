/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: City
 *
 * Created on February 28, 2017, 4:32 PM
 */

#include <iostream>

using namespace std;

/*
 * This program will calculate the number of persons
 * that purchase energy drinks and of those
 * ones that prefer citrus flavored
 */
int main(int argc, char** argv) {
    double People,PctPrcs,PctCtrs,AmountPrcs,AmountCtrs;//
    People=16500;//number of people surveyed
    PctPrcs=0.15;//percent
    PctCtrs=0.58;
    
    AmountPrcs=People*PctPrcs;
    AmountCtrs=AmountPrcs*PctCtrs;
    cout<<"out of the 16,500 people surveyed "<<AmountPrcs;
    cout<<" purchase energy drinks once a week."<<endl;
    cout<<"out of those that purchase energy drinks "<<AmountCtrs;
    cout<<" prefer citrus flavored drinks.";
        
    return 0;
}

