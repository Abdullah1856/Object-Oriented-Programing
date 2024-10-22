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
