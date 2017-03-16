/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: City
 *
 * Created on February 28, 2017, 6:52 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double Itm1;
    double Itm2;
    double Itm3;
    double Itm4;
    double Itm5;
    double Tax;
    double Itm1Tax, Itm2Tax, Itm3Tax, Itm4Tax, Itm5Tax;
    double Itm1Ttl, Itm2Ttl, Itm3Ttl, Itm4Ttl, Itm5Ttl;
    
    
    Itm1=15.95;
    Itm2=24.95;
    Itm3=6.95;
    Itm4=12.95;
    Itm5=3.95;
    Tax=0.07;
    //calculates tax for items
    Itm1Tax=Itm1*Tax;
    Itm2Tax=Itm2*Tax;
    Itm3Tax=Itm3*Tax;
    Itm4Tax=Itm4*Tax;
    Itm5Tax=Itm5*Tax;
    //calculates item price and sales tax
    Itm1Ttl=Itm1+Itm1Tax;
    Itm2Ttl=Itm2+Itm2Tax;
    Itm3Ttl=Itm3+Itm3Tax;
    Itm4Ttl=Itm4+Itm4Tax;
    Itm5Ttl=Itm5+Itm5Tax;
    
    //prints the amounts for each item and the tax and the totals
    cout<<"Item 1: "<<Itm1<<endl;
    cout<<"Item 1 Tax: "<<Itm1Tax<<endl;
    cout<<"Item 1 Total: "<<Itm1Ttl<<endl;
    cout<<"Item 2: "<<Itm2<<endl;
    cout<<"Item 2 Tax: "<<Itm2Tax<<endl;
    cout<<"Item 2 Total: "<<Itm2Ttl<<endl;
    cout<<"Item 3: "<<Itm3<<endl;
    cout<<"Item 3 Tax: "<<Itm3Tax<<endl;
    cout<<"Item 3 Total: "<<Itm3Ttl<<endl;
    cout<<"Item 4: "<<Itm4<<endl;
    cout<<"Item 4 Tax: "<<Itm4Tax<<endl;
    cout<<"Item 4 Total: "<<Itm4Ttl<<endl;
    cout<<"Item 5: "<<Itm5<<endl;
    cout<<"Item 5 Tax: "<<Itm5Tax<<endl;
    cout<<"Item 5 Total "<<Itm5Ttl<<endl;
    return 0;
}

