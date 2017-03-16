/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: City
 *
 * Created on February 28, 2017, 5:22 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double totalSales, Prct, AmtMade;
    totalSales=8,600,000;
    Prct=0.58;
    AmtMade=totalSales*Prct;
    
    cout<<"The East Coast sales division made "<<AmtMade;
    cout<<" million profit from the 8.6 million in total sales.";

    return 0;
}

