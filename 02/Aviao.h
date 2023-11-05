# ifndef AVIAO_H_INCLUDED
# define AVIAO_H_INCLUDED

class Aviao{
	public:
		int vel=0;
		int velMax;
		std::string tipo;
		Aviao(int tp);
		void Imprimir();
	
	private:
};

Aviao::Aviao(int tp) {
	//1 Jato
	//2 Monomotor
	//3 Planador
	
	if(tp==1){
		tipo = "Jato";
		velMax = 800;
	} else if (tp==2){
		tipo = "Monomotor";
		velMax=370;
	}else if(tp==3){
		tipo="Planador";
		velMax=180;
	}
}

void Aviao::Imprimir() {
	std::cout << "Tipo................:" << tipo << endl;
	std::cout << "Velocidade maxima...: " << velMax << endl;
	std::cout << "Velocidade actual...: " << vel << endl;
}

# endif // AVIAO_H_INCLUDED
