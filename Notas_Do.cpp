#include<iostream>

using namespace std;

main(){

int total=0,*p_notas;
char res;
p_notas = new int [total];

do{
cout<<"Ingrese Nota["<<total<<"]:";	
cin>>p_notas[total];
cout<<&p_notas<<endl;	
total++;

cout<<"Desea Ingresar Otra Nota (S/N):";	
cin>>res;
}while(res=='s');


for (int i=0;i<total;i++){

cout<<"Nota "<<i<<":"<<*p_notas<<endl;	
cout<<&p_notas<<endl;	
p_notas++;

}

delete[] p_notas;
system("Pause");	
}
