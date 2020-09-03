#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"\t\t\tElija una opcion\n\n";

    cout<<"1  Suma\n";
    cout<<"2  resta\n";
    cout<<"3  multiplicacion\n";
    cout<<"4  divicion\n";
    cout<<"5  Salir\n\n";
    cin>>m;
 
switch(m)
{
case 1:
int a, b, suma;
cout << "\ n ingrese numero a:";
cin >> a;
cout << "\ n ingrese numero b:";
cin >> b;
suma = a + b;
cout << "\ n la suma de" << a << "+" << b << "es:" << suma;
break;
case 2:
int n1, n2, total;
    cout << "Ingrese un numero" << endl;
    cin>>n1;
    cout<< "ingrese otro numero"<<endl;
    cin>>n2;
    total = n1 - n2;
    cout<< "La resta es: "<<total<<endl;
break;
case 3:
int a, b,r;
cout<<"Ingrese dos numeros"<<endl;
cin>>a>>b;
r=a*b;
cout<<"El resultado de la multiplicion es:"<<r<<endl;
break;
case 4:
int a, b,r;
cout<<"Ingrese dos numeros"<<endl;
cin>>a>>b;
r=a/b;
cout<<"El resultado de la division es:"<<r<<endl;
break;

case 5:cout<<"suerte"<<endl;break;
default: cout<<"El valor ingresado no esta en el menu"<<endl;
}
    return 0;
}
