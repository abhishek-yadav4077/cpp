#include <iostream>
#include <vector>
#include <algorithms>
using namespace std;

// templates 
/*template <class T>
T greatestNum(T a, T b, T c) {
    if (a>b) {
        if (a>c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b>c) {
            return b;
        } else {
            return c;
        }
    }
}


template <class T, class S>
T add(T a, S b) {
    return a+b;    
}


template <class T> 
class Matrix {
    public:
    T mtr[50][50];
};*/




/*STL - Standard Template Library - contains all linked list like common data structures
    - Algorithms (functions) - sorting algo
    - Containers (data structures) - vector, list(linked list), forward-list, tree
    - Iterators 
*/


int main() {
    
    /*int a = 2, b = 3, c = 12;
    cout << greatestNum<int>(a, b, c) << endl;
    float x = 1.1, y = 2.2, z = 3.3;
    cout << greatestNum<float>(x, y, z) << endl;
    
    
    cout << add<int, int>(5, 6) << endl;
    cout << add<float, int>(1.01, 5) << endl;
    
    
    Matrix<int> x;
    Matrix<float> y;
    Matrix<double> z;
    
    
    
    
    int a[50];
    // attendance - List {P, A, P, A...}
    // 10
    .........
    
    //51 ? ---> LINKED LIST - initially empty size 0, now .append() element one by one, size goes +1, +1, +1...means .push()......and .pop() or .remove() -1, -1, -1 ... */
    
    
    
    
    //vectors
    //int arr[50];
    vector<int> arr_vec; // arr_vec ---> size - 0 {} 
    //vector<int> arr_vec(10); // arr_vec(10) ---> size 10
    //vector<int> arr_vec(10, 0); // arr_vec(10, 0) ---> size 10, default value of all element 0
    // push_back
    int temp;
    cin >> temp;
    arr_vec.push_back(temp); // size 1, {temp}
    arr_vec.push_back(1); // size 2, {temp, 1}
    arr_vec.push_back(2); // size 3, {temp, 1, 2}
    arr_vec.pop_back(); // size 2, {temp, 1}
    
    for (i = 0; i < arr_vec.size(); i++) {
        cout << arr_vec[i] << endl;
    }
    
    
    vector<int> arr_vec{3, 6, 1, 19, 11, 12, 4, 2};
    for (i = 0; i < arr_vec.size(); i++) {
        cout << arr_vec[i] << endl;
    }
    cout << "sorting..." << endl;
    sort(arr_vec.begin(), arr_vec.end()); 
    for (i = 0; i < arr_vec.size(); i++) {
        cout << arr_vec[i] << endl;
    }
    
    
    string s = "testing";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
	return 0;
}
