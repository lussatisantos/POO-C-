# include <iostream>
# include <classes.h>

using namespace std;

int main() {
	
	Moto *v1 = new Moto();
	Carro *v2 = new Carro();
	Tanque *v3 = new Tanque();
	
	v1->imp() << endl;
	v2->imp() << endl;
	v3->imp() << endl;
	
	return 0;
}
