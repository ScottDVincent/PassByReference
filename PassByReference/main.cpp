#include <iostream>

using namespace std;

void oopsy(int& input){
	input = 4;
}

class foo{
public:
	int& operator[](int index);

private:
	int data0;
	int data1;
};

int& foo::operator[](int index){
	switch(index){
	case 0:
		return data0;
	case 1:
	default:
		return data1;
	}
}

int main(){
	foo f;
	f[0] = 15;
	
	cout << f[0] << endl;
	cout << f[1] << endl;

	return 0;
}
