#include <iostream>
using namespace std;

int division(int, int);




// try, catch, throw
int main() {
	
	int a, b, c;
	cout << "Best divide program" << endl;
	cin >> a >> b;
	// c = a/b;    // b == 0 error
	try {
	    if(b == 0) {
	        throw 1;
	    }
	    c = a/b;
	    cout << c; // throw
	}
	catch (int e) {
	    cout << "trying to divide by zero. ERROR CODE: " << e << endl;
	}
	
	
	
	
	int a, b, c;
	cout << "Best divide program" << endl;
	cin >> a >> b;
	try {
	    c = division(a, b);
	    cout << c;
	}
	catch (int e) {
	    cout << "trying to divide by zero. ERROR CODE: " << e << endl;
	}
	catch (float e) {
	    cout << "trying to divide by zero. ERROR CODE: " << e << endl;
	}
	
	
	try {
	    c = division(a, b);
	    try {
	        //
	        //
	    }
	    catch (int f) {
	        //
	    }
	    cout << c;
	}
	catch (int e) {
	    cout << "trying to divide by zero. ERROR CODE: " << e << endl;
	}
	catch (float e) {
	    cout << "trying to divide by zero. ERROR CODE: " << e << endl;
	}
	catch (...) {
	    cout << "handling all the rest errors" << endl;
	}
	
	return 0;
}




int division(int a, int b) {
    /*if(b == 0 ) {
        throw 1;    
    } else {
        return (a/b);
    }*/
    
    if(b == 0 ) {
        throw (float)1.1;    
    } else {
        return (a/b);
    }
    
}