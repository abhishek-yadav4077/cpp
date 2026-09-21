#include <iostream>
using namespace std;
/*
int findGreatest(int, int, int);
//int findGreatest(int, int, int, int);
float findGreatest(float, float, float);
//int findGreatest();
*/

// Type of functions in class :- constructors, destructors, mutators(setter), accessors(getter), enquiry(boolean), facilitators 
class ComplexNumbers {
    private:
    int real;
    int imag;
    public:
    ComplexNumbers (void) { // void or default constructor, inline function -> inside the class
        real = 0;
        imag = 0;
    }
    ComplexNumbers(int x, int y) { // parametrized , inline
        real = x;
        imag = y;
    }
    ComplexNumbers(const ComplexNumbers& z) { // copy constructor, inline
        real = z.real;
        imag = z.imag;
    }
    void setValues(int x, int y) {
        real = x;
        imag = y;
    }
    
    void display() { // argument void bhi likh skte ho
        cout << real << " + i" << imag << endl;
    }
    
    bool isReal() {
        if (imag == 0) {
            return true;
        } else {
            return false;
        }
    }
    bool isImag() {
        if (real == 0) {
            return true;
        } else {
            return false;
        }
    }
    
    ComplexNumbers findProduct(ComplexNumbers); // non inline
    // inline ComplexNumbers findProduct(ComplexNumbers); // inline
    
    ComplexNumbers operator +(const ComplexNumbers&);
    ComplexNumbers operator *(const ComplexNumbers&);
    friend ComplexNumbers operator -(const ComplexNumbers&, const ComplexNumbers&);
};

ComplexNumbers ComplexNumbers::findProduct(ComplexNumbers x) {
    ComplexNumbers z;
    z.real = real*x.real - imag*x.imag;
    z.imag = real*x.imag + imag*x.real;
    return z;
}

ComplexNumbers ComplexNumbers::operator +(const ComplexNumbers& k) {
    ComplexNumbers c;
    c.real = real + k.real;
    c.imag = imag + k.imag;
    return c;
}

ComplexNumbers ComplexNumbers::operator *(const ComplexNumbers& x) {
    ComplexNumbers z;
    z.real = real*x.real - imag*x.imag;
    z.imag = real*x.imag + imag*x.real;
    return z;
}

int main() {
    /*
    int b = 0;
    int &a = b;
    
    
    int a = 1, b = 2, c = 3;
    float x = 1.1, y = 2.2, z = 3.3;
    cout << findGreatest(a,b,c) << endl;
    cout << findGreatest(x,y,z) << endl;
    
    
    ComplexNumbers a,b,c,d;
    a.setValues(1,2);
    a.display();
    //ComplexNumbers b (2,3);
    b.setValues(3,4);
    b.display();
    //ComplexNumbers c(b); // copy constructor
    //c.display();
    d = a.findProduct(b);
    d.display();
    cout << c.isReal() << endl;
    
    // concept of non inline functions (default) - back and forth, time consuming, no memory required
    // inline - copy paste, time saves, memory required
    // non inline -> outside the class, inline -> inside the class
    */
    
    /*
    int i; // normal pointers concept
    int *j;
    j = &i;
    *j; 
    */
    
    /*
    ComplexNumbers a;
    a.setValues(1,2);
    ComplexNumbers *b;
    b = &a;
    b->display();
    */
    
    // similarilities and difference between classes, structures, constructors 
    
    ComplexNumbers a,b,c,d;
    a.setValues(1,2);
    b.setValues(3,4);
    int x,y,z;
    x = 1;
    y = 2;
    z = x*y;
    c = a + b; // 
    c.display();
    c = a*b;
    c.display();
    c = a-b;
    c.display();
    d = a.findProduct(b);
    d.display();
    
    
    return 0;

}
/*
int findGreatest(int a, int b, int c) {
    if (a>=b) {
        if (a>=c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b>=c) {
            return b;
        } else {
            return c;
        }
    }
}


float findGreatest(float a, float b, float c) {
    if (a>=b) {
        if (a>=c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b>=c) {
            return b;
        } else {
            return c;
        }
    }
}
*/


ComplexNumbers operator -(const ComplexNumbers& x, const ComplexNumbers& y) {
    ComplexNumbers z;
    z.real = x.real - y.real;
    z.imag = x.imag - y.imag;
    
    return z;
}