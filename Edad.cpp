#include<iostream>

using namespace std;

main(){
	
	int edad =25,*p_edad;
    p_edad =&edad;
	
	cout<<" Variable Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad: "<<p_edad<<endl;

	cout<<"-----Cambiar Valores------"<<endl;
    *p_edad = 40;

    cout<<"Variable Edad: "<<edad<<endl;
    cout<<"Puntero Edad: "<<*p_edad<<endl;

    cout<<"---Otra Variale en P_Edad---"<<endl;

    int edad2 = 100;
    p_edad = &edad2;
    edad=400;

    cout<<"Variable Edad: "<<edad<<endl;
    cout<<"Puntero Edad: "<<*p_edad<<endl;
    cout<<"Variable Edad 2: "<<edad2<<endl;
	
	
	system("Pause");

}