#include <iostream>
using namespace std;

/*class Base { //abstract class
    public:
    int a, b;
    
    
    Base() {
        a = 0;
        b = 0;
    }
    
    virtual void outpt() {
        cout << "Base class fn" << endl;
    }
    
    virtual void outpt() = 0; // purely virtual fn
    
    
    
    
    virtual void outpt() {
        cout << "Base fn called..." << endl;
    }
    // A class with only and only virtual entities is called interface class, else abstract class
};


class NewClass {
    public:
    void outpt() {
        cout << "New class fn" << endl;
    }
};

class Derived: public Base {
    public:
    int c, d;
    Derived() {
        c = 0;
        d = 0;
    }
    void outpt() {
        cout << "Derived class fn" << endl;
    }
}; 




class B;
class A { // interface class
    private:
    int gamma;
    public:
    int x, y;
    friend B;
};
class B { // has-a relationship
    public:
    A e;
    void checkingVal() {
        cout << "Derived class fn" << endl;
        e.x = 0;
        e.y = 1;
        e.gamma = 11;
        cout << e.x << " " << e.y << " " << e.gamma << endl;
    }
};




//int count  = 0;
class Rectangle {
    private:
    int length;
    int breadth;
    int area;
    public:
    static int count;
    
    Rectangle () {
        length = 0;
        breadth = 0;
        area = 0;
        
        
        //count++;
        count++;
    }
    void putVal(int l, int b) {
        length = l;
        breadth = b;
        area = l*b;
    }
    void displayVal () {
        cout << length << " " << breadth << " " << area << endl;
    }
    
    
    static int howMuchMemory() {
        return (count*12 + 4);
    }
};
int Rectangle::count = 0;



class A { // has relationship. outer class
    public:
    class B { // inner class
        public:
        int e, f;
        void testTwo() {
            cout << e << f << z << endl; // you cannot access a,b but you can use static variable z
        }
    };
    int a, b;
    static int z
    B c;
    B x;
    // outer class can access all the public elements of the inner class but the inner class only access the static elements of the outer class
    
};*/




class A1 {
    public:
    A1() {
        cout << "A1 class constructor is called..." << endl;
    }
    
    ~A1() {
        cout << "A1 class destructor is called..." << endl;    
    }
    
};
void fun() {
    A1 obj;
}

int main() {
	
    /*Derived d;
    Base *b = &d;
    b->outpt();
    NewClass x;
    b = &x;
    b -> outpt();
    
    
    
    
    B obj;
    obj.checkingVal();
    
    
    
    
    Rectangle a,b,c,d,e;
    a.putVal(1,2);
    b.putVal(3,4);
    c.putVal(5,6);
    
    //cout << count;
    cout << a.count << endl;
    cout << b.count << endl;
    cout << c.count << endl;
    
    cout << Rectangle::count << endl;
    
    
    cout << Rectangle::howMuchMemory() << endl;*/
    
    
    
    A1 a;
    fun();
    cout << "back to int main()" << endl;
    return 0;
}
