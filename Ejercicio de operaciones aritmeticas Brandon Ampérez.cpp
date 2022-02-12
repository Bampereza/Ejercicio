
#include <iostream>
#include <stdio.h>

using namespace std;
int main ()
{
    int opciones, No1, No2, operaciones;

    cout<<"Seleccione la opcion deseada: "<<endl;
    cout<<"1-Suma "<<endl;
    cout<<"2-Resta "<<endl;
    cout<<"3-Multiplicacion "<<endl;
    cout<<"4-Division "<<endl;
    cin>>opciones;

    system ("cls");


    switch (opciones){
        case 1:
            cout<<"Suma"<<endl;
            cout<<"Coloque los numeros que desea sumar"<<endl;
            cout<<"Ingrese el primer numero: ";
            cin>>No1;
            cout<<"Ingrese el segundo numero: ";
            cin>>No2;

            operaciones = No1+No2;
            cout<<"La suma total es de: "<<operaciones<<endl;
            break;

        case 2:
            cout<<"Resta "<<endl;
            cout<<"Coloque los numeros que desea restar:"<<endl;
            cout<<"Ingrese el primer numero: ";
            cin>>No1;
            cout<<"Ingrese el segundo numero: ";
            cin>>No2;

            operaciones = No1-No2;
            cout<<"La resta total es de: "<<operaciones<<endl;
            break;

        case 3:
            cout<<"Multiplicacion "<<endl;
            cout<<"Ingrese los numeros a multiplicaar"<<endl;
            cout<<"Ingrese el primer numero: ";
            cin>>No1;
            cout<<"Ingrese el segundo numero: ";
            cin>>No2;

            operaciones = No1*No2;
            cout<<"La multiplicacion total es de: "<<operaciones<<endl;
            break;

        case 4:
            cout<<"Division "<<endl;
            cout<<"Ingrese los numeros a dividir:"<<endl;
            cout<<"Ingrese el primer numero: ";
            cin>>No1;
            cout<<"Ingrese el segundo numero: ";
            cin>>No2;

            operaciones = No1/No2;
            cout<<"La division final es de: "<<operaciones<<endl;
            break;



        default:
            cout<<" Esta opcion es invalida";
            break;

    }
    return 0;
}