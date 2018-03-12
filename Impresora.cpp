#include<stdio.h> 
#include<iostream>
#include<stdlib.h> 
#include<string.h>
#define max 10
#include "clase.h"
using namespace std;

int main(void){
	system("color F0");
	int aux,menu;
	string dato;
	ColaEstatica impresora;
	
	do{
		system("cls");
	cout<<"\n\t\t\tImpresora\n\n";
	cout<<"  1) Ingresar un documento.\n  2) Imprimir el siguiente documento.\n  3) Consultar el estado de impresion.\n  4) Cancelar impresiones.\n  5) Mostrar documentos pendientes.\n  0) Salir.\n\n  Ingrese opcion: ";
    cin>>menu;
    
    switch(menu){
    	case 1:
    		cout<<"\n\n Ingrese nombre del documento: ";
    		cin>>dato;
    		fflush(stdin);
    		impresora.encolar(dato);
    		cout<<"\n\n\n";
    		system("pause");
    		break;
    	case 2:
		    impresora.descolar();
			system("pause");	
		    break;
		case 3:
			impresora.valorAlFrente();
			system("pause");
			break;
		case 4:
		    impresora.vaciar();
			system("pause");
			break;
		case 5:
		    impresora.mostrar();
			system("pause");
			break;
		default:
		    cout<<"\n\n Opcion invalida!!!\n\n\n";
			system("pause");
			break;		        
	}
	
	}while(menu!=0);
	
	
	
	
	
system("pause");
return 0;	
}
