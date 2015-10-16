//Name: Samba Diallo
//Date: 10/15/15
//Summary: Functions D
#include <cmath>
#include <cassert>
#include <iostream>
#include <string>
using namespace std;


void sort(int& numA, int& numB, int& numC);
void numDigits(int  valA, int& n);
void computeSphere(double& a, double& v, double r);
void swap(int& A, int& B);

int main(){

int a = 1, b = 2, c= 3, d = 4, e = 5, f = 6;
sort(a,b,c);
cout << a <<endl << b << endl << c;
numDigits(999,d);
numDigits(-1,e);
numDigits(0,f);

assert(d == 3);
assert(e == 1);
assert(f == 1);



return 0;}

// ********************************************************
void sort(int& numA, int& numB, int& numC){
// Summary: sorts from lowest to highest
// Precondition: take in three numbers and organize them into the variables as low to high
// Postcondition: The numbers are organized from high to low
//


    int n1 = numA, n2 = numB, n3 = numC;
    if(n1 > n2 and n1 > n3){
        numC = n1;
        if (n2 > n3){
            numB = n2;
            numA = n3;}
        if (n3 > n2){
            numB = n3;
            numA = n2;}}
    else if(n2 > n1 and n1 > n3){
        numC = n2;
        if (n1 > n3){
            numB = n1;
            numA = n3;}
        if (n3 > n1){
            numB = n3;
            numA = n1;}}
    else{
        numC = n3;
        if (n1 > n2){
            numB = n1;
            numA = n3;}
        if (n1 > n2){
            numB = n3;
            numA = n1;}}
    
    return;}
    
// ********************************************************
//
// ********************************************************
void numDigits(int  valA, int& n){
// Summary: function to determine number of digigts
// Precondition: a number between -10000 and 10000 is entered
// Postcondition: the output is the number of digits
//
    if( valA >=-9 and valA <= 9)
        n = 1;
    else if( valA >=-99 and valA <= 99)
        n = 2;
    else if( valA >=-999 and valA <= 999)
        n = 3;
    else if( valA >=-9999 and valA <= 9999)
        n = 4;
    else if( valA >=-10000 and valA <= 10000)
        n = 5;
    else
        n = -999;
    return;}
// ********************************************************
//
// ********************************************************

void computeSphere(double& a, double& v, double r){
// Summary: function to determine area of a sphere
// Precondition: a radius is entered
// Postcondition: the area is put into variables made for them
//
a = 4.0 / 3.0* (3.14159 * pow(r, 3));
v = 4.0 / 3.0* (3.14159 * pow(r, 3));
return;}
// ********************************************************
//
// ********************************************************

void swap(int& A, int& B){
// Summary: swaps the val of variables
// Precondition: two variables are put in
// Postcondition: they are switched
//
int woot = A;
A = B;
B = woot;
return;}
// ********************************************************
//
