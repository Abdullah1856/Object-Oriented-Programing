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



// Display Name and Address
#include<iostream>
using namespace std;
int main() {
	char name[50],address[50];
	
	cout<<"What is your name"<<endl;
	cin>>name;
	
	cout<<"What is your address"<<endl;
	cin>>address;
	
	cout<<"Name is: "<<name<<" Address is: "<<address;
}


// Arithmetic Operation On 2 Digits
#include<iostream>
using namespace std;
int main() {
	int number1,number2,plus,minus,divide,multiply;
	
	cout<<"Please give first number"<<endl;
	cin>>number1;
	
	cout<<"Please give second number"<<endl;
	cin>>number2;
	
	plus = number1 + number2;
	minus = number1 - number2;
	divide = number1 / number2;
	multiply = number1 * number2;
	
	cout<<"The plus answer is: "<<plus<<endl;
	cout<<"The minus answer is: "<<minus<<endl;
	cout<<"The divide answer is: "<<divide<<endl;
	cout<<"The multiply answer is: "<<multiply<<endl;
	
}

// Get average of 3 numbers
#include<iostream>
using namespace std;
int main() {
	int number1,number2,number3,sum,calcaverage;
	
	cout<<"Please enter first number"<<endl;
	cin>>number1;
	
	cout<<"Please enter second number"<<endl;
	cin>>number2;
	
    cout<<"Please enter third number"<<endl;
	cin>>number3;
	
	sum = number1 + number2 + number3;
	calcaverage = sum / 3;
	
	cout<<"The average of the values is: "<<calcaverage;
	
}


// Calculates Days, Months, Years
#include<iostream>
using namespace std;
int main() {
	int number,days,years,months;
	
	cout<<"Please enter the number"<<endl;
	cin>>number;
	
	days = number / 30;
	months = number / 12;
	years = number % 365;
	
	
	cout<<"The days are : "<<days<<endl;
	cout<<"The months are : "<<months<<endl;
	cout<<"The years are : "<<years<<endl;
	
	return 0;
	
}


// Swaping on base of Ascending order
#include <iostream>
using namespace std;
// function declaration
void swap(int &x, int &y);
int main ()
{
// local variable declaration:
int number1,number2;
cout<<"Enter number 1"<<endl;
cin>>number1;

cout<<"Enter number 2"<<endl;
cin>>number2;

cout << "Before swap, value of number1 :" << number1 << endl;
cout << "Before swap, value of number2 :" << number2 << endl;

/* calling a function to swap the values using variable reference.*/
if(number1 > number2){
swap(number1,number2);
cout << "After swap, value of number1 :" << number1 << endl;
cout << "After swap, value of number2 :" << number2 << endl;
} else {
cout<< "The swap cant work;";	
}

return 0;
}

// function definition to swap the values.
void swap(int &x, int &y)
{
int temp;
temp = x; /* save the value at address x */
x = y; /* put y into x */
y = temp; /* put x into y */
return;
}



// Swap Version 2
#include <iostream>
using namespace std;
// function declaration
void swap(int &x, int &y);
int main ()
{
// local variable declaration:
int number1,number2;
cout<<"Enter number 1"<<endl;
cin>>number1;

cout<<"Enter number 2"<<endl;
cin>>number2;

cout << "Before swap, value of number1 :" << number1 << endl;
cout << "Before swap, value of number2 :" << number2 << endl;

/* calling a function to swap the values using variable reference.*/
if(number1 > number2){
swap(number1,number2);
cout << "After swap, value of number1 :" << number1 << endl;
cout << "After swap, value of number2 :" << number2 << endl;
} else if(number1 = number2) {
cout<< "The swap cant work, values are equal;";	
} else {
cout<< "The swap cant work;";	
}


return 0;
}

// function definition to swap the values.
void swap(int &x, int &y)
{
int temp;
temp = x; /* save the value at address x */
x = y; /* put y into x */
y = temp; /* put x into y */
return;
}

// Max and Min
#include <iostream>
using namespace std;
inline int Max(int x, int y)
{
return (x > y)? x : y;
}
// Main function for the program
int main( )
{
int a,b,c,max1,max2;
	
cout<< "Enter input1"<<endl;	
cin>>a;

cout<< "Enter input2"<<endl;	
cin>>b;

cout<< "Enter input3"<<endl;	
cin>>c;

max1 = Max(a,b);
max2 = Max(max1,c);

cout << "Max (a,b): " << max1 << endl;
cout << "Max(max1,c): " << max2 << endl;


//cout << "Max (0,200): " << Max(0,200) << endl;
//cout << "Max (100,1010): " << Max(100,1010) << endl;
return 0;
}
