#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
# include <iostream>


class Veiculo{
	public:
		int vel;
		int tipo;
		Veiculo(int tp);
		int getVelMax();
		bool getLigado();
		void setLigado(int l);
		
	private:
		void setVelMax(int vm);
		std::string nome;
		int velMax;
		bool ligado;
};

bool Veiculo::getLigado() {
	return ligado;
}

void Veiculo::setLigado(int l){
	if (l == 1) {
		ligado = true;
	} else if(l==0) {
		ligado = false;
	}
}

int Veiculo::getVelMax(){
	
	return velMax;
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}

Veiculo::Veiculo(int tp){
	/*
		1 Carro
		2 Aviao
		3 Navio
	*/
	
	tipo = tp;
	
	if (tipo == 1) {
		nome = "Carro";
	//	velMax = 200;
		setVelMax(200);
	} else if (tipo == 2) {
		nome = "Aviao";
	//	velMax = 800;
		setVelMax(800);
	} else if (tipo == 3) {
		nome = "Navio";
	//	velMax = 120;
		setVelMax(120);
	}
	setLigado(0);
	
}

#endif
