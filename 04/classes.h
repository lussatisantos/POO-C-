#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
# include <iostream>

class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imp();
		
	private:
		/*
			Tipos:
				1 Moto
				2 Carro
				3 Camiao
				4 Tanque
		*/
		int tipo;
		int velMax;
		bool arma;
};

void Veiculo::imp(){
	std::cout << "Tipo veiculo......: " << tipo << std::endl;
	std::cout << "Velocidade Maxima.: " << velMax << std::endl;
	std::cout << "Qtd de rodas......: " << rodas<< std::endl;
	std::cout << "Blindagem.........: " << blind << std::endl;
	std::cout << "Armamento.........: " << arma << std::endl;
	
}

void Veiculo::setTipo(int tp){
	tipo = tp;	
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}

void Veiculo::setArma(bool ar) {
	arma = ar;
}

class Moto:public Veiculo{
	public:
		Moto();
};

Moto::Moto() {
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
}

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro() {
	vel = 0;
	blind = 0;
	rodas = 4;
	setTipo(2);
	setVelMax(220);
	setArma(false);
}

class Tanque:public Veiculo{
	public:
		Tanque();
};

Tanque::Tanque() {
	vel = 0;
	blind = 0;
	rodas = 8;
	setTipo(4);
	setVelMax(200);
	setArma(true);
}

#endif
