#include<stdio.h> 
#include<iostream>
#include<stdlib.h> 
#define max 10
using namespace std;

class ColaEstatica{
	private:
		int frente;
		int atras;
		int contador;
		string arreglo[max];
	public:
	    ColaEstatica(void);
		void vaciar(void);
		void encolar(string&);
		void descolar(void);
		void mostrar(void);	
		int empty(void);
		int full(void);
		void mover(void);
		void valorAlFrente(void);
};

ColaEstatica::ColaEstatica(void){
	this->frente = -1;
	this->atras = -1;
	this->contador = 0;
}

int ColaEstatica::empty(void){
	if(frente==-1){
		return true;
	}
	else{
		return false;
	}
}

int ColaEstatica::full(void){
	if(frente == max-1){
		return true;
	}
	else{
		return false;
	}
}

void ColaEstatica::encolar(string& n){
	if(!full()){
		if(empty()){
			atras = 0;
		}
		frente++;
		arreglo[frente] = n;
		contador++;
	}
	else{
		cout<<"\n  La cola ya esta llena"<<endl;
	}
	
}

void ColaEstatica::mover(void){
	int i;
	for(i = 1; i<=frente; i++){
		arreglo[i-1] = arreglo[i];
	}
	frente--;
}

void ColaEstatica::descolar(void){
	if(!empty()){
		if(frente == 0){
			contador=0;
			cout<<"\n\n Imprimiendo "<<arreglo[atras]<<"...\n\n\n";
			atras = -1;
			frente = -1;
		}
		else{
			contador--;
			cout<<"\n\n Imprimiendo "<<arreglo[atras]<<"...\n\n\n";
			mover();
		}
		
	}
	else{
		cout<<"\n  La cola esta vacia."<<endl;
	}
}

void ColaEstatica::valorAlFrente(void){
	if(!empty()){
		cout<<"\n\n El iguiente documento en la cola es "<<arreglo[atras]<<"\n\n Quedan "<<contador<<" documentos en la cola.\n\n\n";
	}
	else{
		cout<<"\n\n Cola vacia...\n\n\n";
	}
}

void ColaEstatica::vaciar(void){
	if(!empty()){
		cout<<"\n\n Cancelando impresionoes...\n\n\n";
		contador = 0;
		atras = -1;
		frente = -1;
	}
	else{
		cout<<"\n\n La cola ya esta vacia.\n\n\n";
	}
	
}

void ColaEstatica::mostrar(void){
	cout<<"\n\n ";
	if(!empty()){
		for(int i=0; i < contador; i++){
			cout<<" -> ["<<arreglo[i]<<"] ";
		}
		cout<<"\n\n\n";
	}
	else{
		cout<<"\n\n Cola vacia\n\n\n";
	}
	
	
}
