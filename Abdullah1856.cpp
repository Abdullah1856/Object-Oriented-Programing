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
