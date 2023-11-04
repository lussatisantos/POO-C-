# include <iostream>

using namespace std;

class Aviao{
	
	public:
		int vel=0;
		int velMax;
		string tipo;
		void ini(int tp);
		
	private:	
};

int main() {
	
	Aviao *av1 = new Aviao();
	cout << av1->vel;
	
	return 0;
}
