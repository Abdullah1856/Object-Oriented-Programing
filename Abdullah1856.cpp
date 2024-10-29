/* Code1 */
#include <iostream>
using namespace std;
class test {
private: 
int a = 6;
public:
	void show() {
	cout << a << endl;
	}
};

main () {
	test T,T1;
	T.show();
	T1.show();
}

/* Code2 */
#include <iostream>
using namespace std;
int main(){ 
char name[50];
cout<<"Enter your name \n";
cin>>name;
cout<<"Your name is "<<name<<endl;
}

/* Code3 */
#include <iostream>
using namespace std;
int main() {
char name[50];
char sirname[50];
cout<<"Enter your name \n";
cin>>name;
cout<<"Enter your sirname \n";
cin>>sirname;
cout<<"Your name is "<<name<<" "<<sirname;
}

/* Code4 */
#include <iostream>
using namespace std;
class student {
	private: int rollno =  10;
	public:
		void display() {
			cout<<"The roll no is: " <<rollno;
		}
};

int main() {
	student s;
	s.display();
	return 0;
}

/* Code-Practice */
#include <iostream>
using namespace std;
class abdullah {
	private: char name[50] = "Abdullah Bin Arshad";
	public:
		void show_name() {
			cout<< "The name is: " <<name;
		}		
};

int main() {
	abdullah n;
	n.show_name();
	return 0;
}

/* Code5 */
#include <iostream>
#include <string>
using namespace std;

class student {
	private: 
		int n;
	public:
		void display(int rollno, const char* name) {
			cout<< "The roll is no: "<< rollno << endl;
			cout<< "the name is: " << name <<endl;
		}	
};

int main() {
	student s;
	s.display(1, "Ali");
	return 0;
}


/* Code6 */
#include <iostream>
using namespace std;
char c = 'a'; // global variable
int main() {
char c = 'b'; //local variable
cout << "Local c: " << ::c << "\n";
cout << "Global c: " << c << "\n"; //using scope resolution operator
return 0;
}

/* Code7 */
#include <iostream>
#include <iomanip>
using namespace std;
int main (void)
{
int a,b,c,d;
a = 200;
b = 300;
c = 400;
d = 500;
cout << setw (4) << a << setw (8) << b << setw (12) << c << setw (16) << d << endl;
cout << setw (5) << a << setw (9) << b << setw (13) << c << setw (17) << d <<  endl;
cout << setw (6) << a << setw (10) << b << setw (14) << c << setw (18) << d <<  endl;
cout << setw (7) << a << setw (11) << b << setw (15) << c << setw (19) << d <<  endl;
}

/* Code8 */
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int number1, number2;
cout <<"Enter the first number:" << endl;
cin >>number1;
cout <<"Enter the second number:" << endl;
cin >>number2;
cout <<"The number are these: "<< number1 << number2 << endl;
cout <<"Now we are swaping the number" << endl;
cout <<"After Swaping: " << number2 << number1;
}

//cout << setw (1) << number1 << setw (2) << number2 << endl;
