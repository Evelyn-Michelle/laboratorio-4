#include <iostream>
using namespace std;
//calculadora con 4 operaciones basicas
int main(){
    int usuario = 0001;
    int opcion;
    int intentos = 0;
float numero1, numero2;

cout<<"------CALCULADORAS------"<<endl;
cout<<"ingrese su numero de usuario, solo tiene 3 intentos:"<<endl;
cin>>usuario;

while(usuario!=0001 && intentos<2){
    intentos++;
    cout<<"usuario incorrecto, le quedan "<<3-intentos<<" intentos"<<endl;
    cout<<"ingrese su numero de usuario:"<<endl;
    cin>>usuario;
if(intentos==2 && usuario!=0001){
    cout<<"numero de usuario bloqueado"<<endl;
    return 0;
} else if(usuario==0001){
    cout<<"usuario correcto, bienvenido"<<endl;
}
}
do{ 

cout<<"ingrese el numero de opcion que desea realizar:"<<endl;
cout<<"1.suma"<<endl;
cout<<"2.resta"<<endl;
cout<<"3.multiplicacion"<<endl;
cout<<"4.division"<<endl;
cout<< "salir"<<endl;
cin>>opcion;
switch(opcion){
    case 1: cout<<"ingrese el primer numero:"<<endl;
    cin>>numero1;   
    cout<<"ingrese el segundo numero:"<<endl;
    cin>>numero2;
    cout<<"el resultado de la suma es:"<<numero1+numero2<<endl;
    break; 
    case 2: cout<<"ingrese el primer numero:"<<endl; 
    cin>>numero1;    
    cout<<"ingrese el segundo numero:"<<endl;
    cin>>numero2;
    cout<<"el resultado de la resta es:"<<numero1-numero2<<endl;
    break; 
    case 3:
        cout<<"ingrese el primer numero:"<<endl; 
        cin>>numero1;
        cout<<"ingrese el segundo numero:"<<endl;
        cin>>numero2;  
        cout<<"el resultado de la multiplicacion es:"<<numero1*numero2<<endl;
        break; 
    case 4: 
        cout<<"ingrese el primer numero:"<<endl; 
        cin>>numero1;    
        cout<<"ingrese el segundo numero:"<<endl;
        cin>>numero2;
        if(numero2==0){
            cout<<"error, no se puede dividir entre 0"<<endl;
        }else{
            cout<<"el resultado de la division es:"<<numero1/numero2<<endl;
        }
        break;
        case 5 : cout<<"saliendo..."; 
        break;
    default: cout<<"opcion no valida, intente de nuevo"<<endl;
    


}
}while(opcion!=5);
    return 0;
}