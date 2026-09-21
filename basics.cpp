#include <iostream>
#include <cmath>
using namespace std;

int main(){
    /*cout << "Hello, World!" << endl;



    cout<< "Hi, I am Abhishek Yadav" << endl;



    int x;
    x = 0;
    x = 10;
    float y = 0.0;
    y = 1.1;
    char z = 'a';
    z = 'c';
    
    int age;
    cin >> age;
    
    float height;
    cin >> height;
    
    char initial;
    cin >> initial;
    
    
    cout << x << endl;
    cout << "Hi, so your age is... " << age << endl;
    cout << "Hi, so you are " << height << "m tall" << endl;
    cout << "Hi, so the initial letter of your name is " << initial << endl;

    
    
    
    int age;
    char initial;
    float height;
    
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Please enter your initial: " << endl;
    cin >> initial;
    cout << "Please enter your height: " << endl;
    cin >> height;
    
    cout << "Hi! " << initial << " of " << age << " age and " << height << "m height" << endl;
    
    
    
    int a, c;
    float b = 0.1, d = 1.1;
    
    cin >> a >> b;
    
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    
    
    
    int a, b, c;
    a = 40;
    b = 5;
    
    
    c = a+b;
    c = a-b;
    c = a-b+10-9;
    
    c = a*b;
    c = a*b*3*-6;
    
    c = a/b;
    c = a/b/5;
    c = a/b/5*6/2;
    
    c = a%b;
    
    int q, r;
    q = a/b;
    r = a%b;
    
    a++;
    a++;
    b++;
    a--;
    
    c = a+b/2-5*2; 
    
    cout << "The value of c is: " << c <<  endl;
    cout << "Quotient is: " << q << endl;
    cout << "Remainder is: " << r << endl;
    
    int height, base;
    float area;
    
    cout << "Please enter the height of the triangle: " << endl;
    cin >> height;
    cout << "Please enter the base of the triangle: " << endl;
    cin >> base;
    area = (height*base)/2.0;
    cout << "Area of the triangle comes out to be as: " << area << endl;
    
    
    
    int a = 5, b = 10;
    float c;
    
    a+=5;
    a-=5;
    a*=5;
    a/=5;
    a%=5;
    
    c = (a*b)/2.0;
    c = (a+b)/2.0;
    
    cout << "The value of c is: " << c << endl;
    
    int radius;
    float s_area, volume, PI;
    // PI = 22.0/7.0; Implicit conversion
    PI = (float)22/(float)7; // Explicit conversion
    
    cout << "Please enter the radius of the sphere: " << endl;
    cin >> radius;
    
    s_area = 4*PI*radius*radius;
    volume = (4/3) * PI * radius * radius * radius;
    
    cout << "Surface area: " << s_area << endl;
    cout << "Volume: " << volume << endl;
    
    
    
    int year = 2000;
    
    // if its > 2000, then "Welcome to the 21st century!"
    // anything else, then "Hope to see you soon in the future!"
    if (year > 2000) {
        //true statement
        cout << "Welcome to the 21st century!";
    } else {
        // fasle statements
        cout << "Hope to see you soon in the future!";
    } 
    
    
    int year;
    
    cout << "Please enter your year!" << endl;
    cin >> year;
    
    
    if (year%4 == 0) {
        cout << "It's a leap year!" << endl;
        
    } else {
        cout << "It's not a leap year!" << endl;
    } 
    
    int score, pass;
    
    cout << "Please enter your score!" << endl;
    cin >> score;
    
    if(score > 90) {
        cout << "Congrats! You get faster wifi and a new smartphone!" << endl;
    } else if (score > 80) {
        cout << "You studied very hard. Better luck next time. Congrats on better wifi!" << endl;
    } else if(score < 60) {
        cout << "You are not getting either of wifi or new smartphones. Start studying" << endl;
    } else {
        cout << "You can do way better. Let me know if I can help you anyhow!" << endl;
    }
    
    cout << "Code is working till the end" << endl;
    
    
    if (score >= 40) {
        pass = 1;
    } else {
        pass = 0;
    }
    or
    pass = (score >=40) ? 1 : 0;
    
    cout << "Pass value: " << pass << endl; 
    
    
    if (score >= 50) {
        if (score >= 80) {
            cout << "Congrats" << endl;
        } else {
            cout << "You tried your best" << endl;
        }
    } else {
        if (score >= 40) {
            cout << "Well atleast you passed!" << endl;
        } else {
            cout << "Better luck next time!" << endl;
        }
    } 
    
    
    int gpa; // 0 to 4
    
    cout << "Please enter your gpa!" << endl;
    cin >> gpa;
    // 0 -> terrible, 1 -> satisfactory, 2 -> average, 3 -> good, 4 -> brilliant
    
    switch (gpa) {
        case 0:
            cout << "Terrible" << endl;
            break;
        case 1:
            cout << "Satisfactory" << endl;
            break;
        case 2:
            cout << "Average" << endl;
            break;
        case 3:
            cout << "Good" << endl;
            break;
        case 4:
            cout << "Brilliant" << endl;
            break;
        default:
            cout << "Invalid gpa entered!" << endl;
            break;
    } 
    
    
    int x1, x2, x3, y1, y2, y3;
    float a, b, c, s, area;
    // x1, y1 = 1
    // x2, y2 = 2
    // x3, y3 = 3
    // 1-2 = a
    // 2-3 = b
    // 3-1 = c
    cout << "Enter values of first point (x and y respectively): " << endl;
    cin >> x1 >> y1;
    cout << "Enter values of second point (x and y respectively): " << endl;
    cin >> x2 >> y2;
    cout << "Enter values of third point (x and y respectively): " << endl;
    cin >> x3 >> y3;
    
    // sqrt
    a = sqrt(  pow((x1-x2),2) + pow((y1-y2),2)  );
    b = sqrt(  pow((x2-x3),2) + pow((y2-y3),2)  );
    c = sqrt(  pow((x3-x1),2) + pow((y3-y1),2)  );
    s = (a+b+c) / 2.0;
    
    cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl << "S: " << s << endl;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout << "Area: " << area << endl;
    
    if(!area) { // default area --> 0 (false) but !area --> true
        cout << "Points are collinear" << endl;
    } else {
        cout << "Points are not collinear" << endl;
    }
    */ 
    
    return 0;
    
    
}











