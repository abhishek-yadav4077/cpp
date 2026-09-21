// In order to make our own datatype using primitive datatype which allows multiple datatype in single variable, we use structures; in function no semi colon before curly braces but elsewhere semi colon

#include <iostream>
using namespace std;
/*
struct complex_numbers {
    int real;
    int imag;
};


complex_numbers adding_complex(complex_numbers, complex_numbers);


struct employee {
    string name;
    int age;
    int salary;
    float performance;
};
*/

class Testing {
    private:
        int a;
        float b;
    public:
        int c;
        float d;
    Testing() { // by default void in c++ if we write nothing, function with the same name of class is constructor
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }
    /*
    void set_default(void) {
        a = 0;
        b = 0;
    }
    */
    void print_values(void) {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
    }
};
    
int main(){
    /*
    complex_numbers a,b,c;
    //a.real; // access
    //a.imag; 
    
    
    cout << "Enter the real and imaginary parts of the complex no.s respectively: " << endl;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;
    
    cout << a.real << "\t" << a.imag << endl;
    cout << a.real << "\t" << a.imag << endl;
    
    cout << "Adding..." << endl;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    
    cout << c.real << " + i" << c.imag << endl;
    
    
    cout << "Adding..." << endl;
    c = adding_complex(a, b);
    cout << c.real << " + i" << c.imag << endl;
    
    
    int n;
    cout << "Enter total number of employees: " << endl;
    cin >> n;
    employee record[n];
    for (int i = 0; i<n; i++) {
        cin >> record[i].name >> record[i].age >> record[i].salary >> record[i].performance; // arrays of structures
    }
    */
    
    
    Testing x,y;
    // x.a = 5; x.b = 6.8;
    //x.c = 8;
    //x.d = 0.1;
    //x.set_default();
    //y.set_default();
    x.print_values();
    y.print_values();
    // cout << "x.c is: " << x.c << endl;
    return 0;
    
}
    
/*    
complex_numbers adding_complex(complex_numbers a, complex_numbers b) {
  complex_numbers outpt;
  outpt.real = a.real + b.real;
  outpt.imag = a.imag + b.imag;
  return outpt;
};  
*/    
    
    
    
    