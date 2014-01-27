#include <iostream>

using namespace std;

void func1(){
	int * ptr = new int(4);

	cout << "The ptr is " << *ptr << endl;

	delete ptr;

}

int main(){

	cout << "Helllo " << endl;
	// This is the change i made

	int i = 0;

	return 0;
}
