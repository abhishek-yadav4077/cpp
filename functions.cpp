#include <iostream>
#include <string>
using namespace std;

int w; // Global variable 
/*
void circle_details(papameer/argument not input int r) { // void means i just wanted to print some value not return any value
    float a, c;
    a = 3.14*r*r;
    c = 2*3.14*r;
    cout << "Area: " << a << "\t" << "Circumference: " << c << endl;
}


int greatest(int x, int y, int z) {
    if (x>=y) {
        if (x>=z) {
            return x;
        } else {
            return z;
        }
    } else {
        if (y>=z) {
            return y;
        } else {
            return z;
        }
    }
}


//int power_m(int, int); // PROTOTYPE
//int power_m(int, int=0);

// void testing_m(int, int, int=11, float=0); // we can have infinite default arguments but they must present to the extreme sides


// void testing_m(int, int=111, int, float=0); // not allowed


void swap_m(int x, int y) {
    int temp;
    temp = y;
    y = x;
    x = temp;
    cout << "Inside fn, a: " << x << " and b: " << y << endl;
    cout << "W IS: " << w << endl;
}


void swap_m(int *x, int *y) {
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
    cout << "Inside fn, a: " << *x << " and b: " << y << endl;
    cout << "W IS: " << w << endl;
}
*/


int main() {
    /*
    int radius;
    float pi = float(22)/7, area, circum;
    cout << "Please enter the radius of the circle" << endl;
    cin >> radius;
    area = pi * radius * radius;
    circum = 2*pi*radius;
    cout << area << "\t" << circum;
    
    
    int radius;
    cout << "Please enter the radius of the circle" << endl;
    cin >> radius;
    circle_details(radius); // this radius value will go into the function r value and the function will continue
    circle_details(4);
    circle_details(10);
    
    
    
    int a, b, c, g;
    cout << "Enter the value of a, b, c: " << endl;
    cin >> a >> b >> c;
    g = greatest(a, b, c);
    
    cout << "The greatest number is: " << g << endl;
    
    g = greatest(99, 11, 22);
    
    cout << "The greatest number is: " << g << endl;
    
    g = greatest(1, 2, 3);
    
    cout << "The greatest number is: " << g << endl;
    
    
    int x, y, ans; // x raised to the power of y
    cout << "Enter the value of x and y, such that x^y :" << endl;
    cin >> x >> y;
    ans = power_m(x, y);
    cout << "Value of " << x << " raised to " << y << " is: " << ans << endl;
    
    ans = power_m(x);
    cout << "Value of " << x << " raised to no value " << " is: " << ans << endl;
    
    
    int a,b,; // LOCAL VARIABLE
    cout << "Enter values of a and b: " << endl;
    cin >> a >> b;
    swap_m(a,b);
    cout << "A: " << a << endl << "B: " << b << endl;
    cout << "outside fn, a: " << a << " and b: " << b << endl; // scope 
    cout << "W IS: " << w << endl;
    
    swap_m(&a, &b); // address of a will go to the function and address of b will go to the fn (pointer)
    */
    
    
    return 0;
}
    
/*    
int power_m(int a, int b) {  // *********** IF YOU WRITE THIS FUNCTION DOWN THE MAIN FUNCTION THEN ERROR COMES BECAUSE CONTROL GO FROM UP TO DOWN ************* NOW IF ORDER TO DO SO WE HAVE 2 WAYS EITHER CUT AND PASTE ABOVE THE MAIN FUNCTION OR USE FUNCTION PROTOTYPE
    int outpt = 1;
    for (int i = 0; i < b; i++) {
        outpt *= a; 
    }
    
    return outpt;     // or return (outpt -2) you can do it
}    
*/    
    
    
    
    
    
