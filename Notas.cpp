#include<iostream>

using namespace std;

int main(){
int fila=0,columna=0,**pm_notas;

cout<<"Ingrese la Cantidad de Estudiantes: ";
cin>>fila;	
cout<<"Ingrese la Cantidad de Notas por Estudiante: ";
cin>>columna;	
pm_notas = new  int *[fila];
for (int i=0;i<fila;i++){
pm_notas[i] = new int[columna]; 	
}

cout<<"____________Ingrese Notas_____________"<<endl;
for (int i=0;i<fila;i++){
for (int ii=0;ii<columna;ii++){
	cout<<"Estudiante: "<<i<<" ,Nota: "<<ii<<":";
	cin>>*(*(pm_notas+i)+ii);
	}
cout<<"_________________________________________"<<endl;
}

cout<<"______________Mostrar Notas______________"<<endl;
for (int i=0;i<fila;i++){
for (int ii=0;ii<columna;ii++){
cout<<*(*(pm_notas+i)+ii)<<endl;
	}
cout<<"_________________________________________"<<endl;
}
for (int i=0;i<fila;i++){
	delete [] pm_notas[i];
}

delete [] pm_notas;

system("pause");
return 0;	
}
