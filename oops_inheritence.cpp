#include <iostream>
using namespace std;
/*
class Parent {
    //private:
    //int x;
    
    protected:
    //int wildcard:
    int x;
    
    public:
    //int y,z;
    Parent() {
        x = 0;
        cout << "Parent default constructor called..." << endl;
    }
    Parent(int i) {
        x = i;
        cout << "Parent parameterised constructor called..." << endl;
    }
};


class A {
    private:
    float g;
    public:
    int a;
};

class B: public A { // is-a relation
    public:
    int b;
};

class B { // has-a relation  (containership)
    public:
    int b;
    A obj;
    B() {
        obj.a = 10; 
        // obj.b = 11; error
    }
    
};

class Child: private Parent { // public, private, protected
    private:
    int m;
    
    public:
    
    int n;
    void setValue(int a, int b, int c, int d, int e) {
        y = a;
        z = b;
        m = c;
        n = d;
        wildcard = e;
    }
    void printValue() {
        cout << y << " " << z << " " << m << " " << n << " " << wildcard << endl;
    }
    
    Child() {
        m = 0;
        cout << "Child default constructor called..." << endl;
    }
    
    
    Child(int a) {
        m = a;
        cout << "Child parameterised constructor called..." << endl;
    }
    
    Child(int a, int b): Parent(b) {
        m = a;
        cout << "Child parameterised constructor called..." << endl;
    }
    void printValue(void) {
        cout << "m: " << m << " & x: " << Parent::x << endl;
    }
    
};



class A {
    public:
    A() {
        cout << "A class" << endl;
    }
    int a;
};
class B {
    public:
    B() {
        cout << "B class" << endl;
    }
    int b;
};
class D: public A, public B {
    public:
    D() {
        cout << "D class" << endl;
    }
    int d;
};


class A { // base class for B
    public:
    A() {
        cout << "A class" << endl;
    }
    int a;
};

class B: public A { // derived class 1, base class for C
    public:
    B() {
        cout << "B class" << endl;
    }
    int b;
};

class C: public B { // derived class 2
    public:
    C() {
        cout << "C class" << endl;
    }
    int c;
};
*/

class Base {
    public:
    int a, b;
    Base() {
        a = 0;
        b = 0;
    }
    void setValues(int x, int y) {
        a = x;
        b = y;
        cout << "Base class function" << endl;
    }
};

class Derived: public Base {
    public:
    int c, d;
    Derived() {
        c = 0;
        d = 0;
    }
    void setValues(int x, int y) {
        c = x;
        d = y;
        cout << "Derived class function" << endl;
    }
    void printValues(void) {
        cout << "a is: " << a << " b is: " << b << " c is: " << c << " d is: " << d << endl;
    }



int main() {
    /*
    Parent a;
    // a.y = 10;
    Child b;
    // b.n = 11;
    // b.y = 12;
    b.setValue(1, 2, 3, 4);
    b.printValue();
    // cout << b.n << " " << b.y << endl;
    
    
    //Child b;
    //Child b(2);
    Child b(1, 2);
    b.printValue();
    */
    
    
    Derived e;
	e.setValues(1,2);



    Derived *d;
    Derived e;
    d->setValues(1, 2);
    d->printValues();
    cout << d->c;


    Derived *d;
    Base e;              // error
    d->setValues(1, 2);
    d->printValues();
    cout << d->c;

    Base *d;
    Derived e;
    d->setValues(1, 2);
    d->printValues();
    cout << d->a;
    cout << d->c << endl; // error
	return 0;
}









