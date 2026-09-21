#include <iostream>
using namespace std;

/*STREAM -> stream of characters
	input
	    keyboard, mouse, camera;
	output
	    monitor, screen
	
	iostream -> input/output stream
	    - input (istream)
	    - output (ostream)
	
	files
	    - input (ifstream)
	    - output (ofstream)
	
	>> extraction operators
*/

class Student {
    public:
    string name;
    int rollno;
    float grade;
    static int totalstudent;
    Student(string n, float g) {
        name = n;
        rollno = Student::totalstudent;
        grade = g;
        Student::totalstudent++;
        
    }
};
int Student::totalstudent = 1;

int main() {
    
	ofstream my_file;
    // my_file.open("my.txt");
    my_file.open("my_file", ios::app);
    cout << "hello" << endl;
	my_file >> "HELLO";
	my_file >> "Testing02"
	my_file >> "Testing03";
	
	
	for (int i = 0; i< 9; i++) {
	    my_file >> i*i;
	    
	}
	my_file >> 9*9;
	my_file.close();
	
	
	ifstream my_file;
	my_file.open("my.txt");
	int a, b, c;
	//my_file >> a >> b >> c;
	while(my_file.eof()) {     // eof means reached end of file ? boolean value true or false
	    my_file >> a;
	    cout << a << endl;
	}
	my_file.close();
	
	
	Student a("Mohit", 80.5);
	ofstream my_file;
	my_file.open("my_file", ios::app);
	my_file << a.name << "\t" << a.rollno << "\t" << a.grade;
	
	return 0;
}
