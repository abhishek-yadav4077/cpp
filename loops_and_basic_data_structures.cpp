#include <iostream>
using namespace std;

int main() {
    /* int a, n, i; // -2. 147, 483, 648 to 2, 147, 483, 647
    a = 0;
    char c;
    c = '*';
    long long int val; // -(2^63) to (2^63)
    while(a<100) {
        cout << a << endl;
        a++;
    }
    
    
    cout << "Please enter the value of n: " << endl;
    cin >> n;
    while(i < n) {
            cout << c << endl;
            i++;
    } 
    
    
    cout << "Please enter the value of n: " << endl;
    cin >> n;
    
    i = 0; val = 0;
    while (i<n) {
        cout << val << endl;
        val+=2;
        i++;
    }
    
    
    cout << "In this program we will find 2^n" << endl;
    cout << "Enter the value of exponent n" << endl;
    cin >> n;
    
    i=0; val=1; 
    while(i<n) {
        val *= 2;
        i++;
        
    }
    
    cout << "2 raised to the power of " << n << " is " << val << endl;
    
    
    
    
    int i;
    
    do {
        cout << i << endl;
        i++;
    } while (i<10);
    
    
    while (i++) { // i++ --> first check then increment 
        cout << i << endl;
    }
    i=-5;
    while (++i) { // ++i --> first increment then check
        cout << i << endl;
    }
    
    
    for ( initialise  i=0;  conditional  i<10;  increment type  i++) {
        cout << i << endl;
    }
    // if you declare int i = 0 inside for loop then it will not work outside
    
    
    int n, i, val, sum=0;
    float avg;
    
    cout << "Enter the value of n " << endl;
    cin >> n;
    
    for (i=0;i<n;i++){
        cin >> val;
        sum += val;
    }
    
    avg=(float)sum/n; // explicitly type-casting
    
    cout << "The average is: " << avg << endl; 
    
    
    
    int i;
    float a,b,c,d,e;
    float scores[5]; 
    scores[0] = 80.1;
    scores[1] = 56.7;
    scores[2] = 56.8;
    scores[3] = 43.9;
    scores[4] = 57.0;
    
    
    float scores[] = {80.1, 56.7, 56.8, 43.9, 57.0};
    cout << scores[2] << endl;
    
    
    float scores[5];
    cin >> scores[0];
    cin >> scores[1];
    cin >> scores[2];
    cin >> scores[3];
    cin >> scores[4];
    
    
    cout << "Please input your array" << endl;
    for (i=0; i<5; i++) {
        cin >> scores[i];
    }
    cout << "The array you input is as follow: " << endl;
    for (i=0; i<5; i++) {
        cout << scores[i] << "\n"; // \n  \t 
    }
    
    
    int i, n;
    
    cout << "Please enter the size of the array: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Please enter the array: " << endl;
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (i=0; i<n; i++) {
        arr[i] *= 2;
        // cout << arr[i] << "\t";
    }
    for (i=0; i<n; i++) {
        cout << arr[i];
    }
    */
    
    int i,j,n;
    // int arr[3][3];
    cout << "Please enter the order of the matrix (n): " << endl;
    cin >> n;
    
    /*
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    ....
    
    
    cout << "Please enter all the elements of the 3x3 matrix: " << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is as follow: " << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    int arr[n][n], sol[n][n];
    cout << "Please enter all the elements of the nxn matrix: " << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Calculating the transpose..." << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            sol[i][j] = arr[j][i];
        }
    }
    cout << "The transpose matrix is as follow: " << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    
    // A point is a variable whose value is the address of another variable i.e direct address of the memory location
    // a - 1 block of 4 bytes, address - 2002, value = 5
    // b - 1 block of 4 bytes, address - 5003, value = 2.10
    // c - 1 block of <> bytes, address - 1001, value = <address of another variable of same datatype> ie 2002 
    // d - 1 block of <> bytes, address - 9002, value = <address of another variable> ie 5003
    int a = 5;
    float b = 2.1;
    int *c; //pointer to integer variable
    float *d; // pointer to float variable
    
    c = &a; // returns address of a
    // c = &b; // error
    d = &b;
    int arr[10];
    // arr --> a name of an array gives us the bases address of the array / or a pointer
    */
    
    
    return 0;
}












