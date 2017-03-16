/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: City
 *
 * Created on February 28, 2017, 3:20 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * this program will calculate 
 * the amount of profit made off of
 * circuit boards priced at 14.95 with
 * a 35 percent profit
 */
int main(int argc, char** argv) {
    double CrtBrd;//sets price for circuit board
    double Percent;//sets percent
    double Profit;//sets profit from each board sold
    double SellPrice;//gives actual sell price
    
    CrtBrd=14.95;//initializes price for circuit board
    Percent=0.35;//initializes percent of profit
    Profit=CrtBrd*Percent;//calculates the profit
    SellPrice=Profit+CrtBrd;//adds board to profit
    
    cout<<"The Company sells their boards for $"<<fixed<<setprecision(2)
            <<SellPrice;//used manipulator to only include 2 decimal points
                        //which provides a dollar amount
                        //otherwise it would display 20.1825
    

    return 0;
}

