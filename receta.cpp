#include <iostream>

using namespace std;

int main(){

    int opcion;

    cout<<"Realizar una receta"<<endl;
    cout<<"¿Que quieres cocinar? (1,2,3,4,5)"<<endl;
    cout<<"1. Atun"<<endl;
    cout<<"2. Huevo"<<endl;
    cout<<"3. Pizza"<<endl;
    cout<<"4. Hamburguesa"<<endl;
    cout<<"5. Ceviche"<<endl;
    cin>>opcion;

    switch(opcion){

        case 1: {
            int atun;
            cout<<"Atun"<<endl;
            cout<<"Como lo quieres preparar? (1,2,3,4,5)"<<endl;
            cout<<"1. Ensalada"<<endl;
            cout<<"2. Ceviche"<<endl;
            cout<<"3. Tostadas";
            cout<<"4. Tortitas"<<endl;
            cout<<"5. Chile relleno de atun"<<endl;
            cin>>atun;
            
            if(atun==1){
                cout<<"Vamos a preparar el atun en ensalada";
            }else if(atun==2){
                cout<<"Vamos a preparar el atun en ceviche";
            }else if(atun==3){
                cout<<"Vamos a preparar el atun en tostadas";
            }else if(atun==4){
                cout<<"Vamos a preparar el atun en tortitas";
            }else if(atun==5){
                cout<<"Vamos a preparar el atun en chile relleno";
            }
            else{
                cout<<"Esa opcion no esta";
            }

            break;
        }
        case 2: {
            int huevo;
            cout<<"Huevo"<<endl;
            cout<<"Como vas a realizar el huevo? (1,2,3,4,5) "<<endl;
            cout<<"1. Estrellado"<<endl;
            cout<<"2. Rancheros"<<endl;
            cout<<"3. Revueltos";
            cout<<"4. Con jamon"<<endl;
            cout<<"5. con tomate y cebolla"<<endl;
            cin>>huevo;
            
            if(huevo==1){
                cout<<"Vamos a preparar el huevo estrellado";
            }else if(huevo==2){
                cout<<"Vamos a preparar el huevo ranchero";
            }else if(huevo==3){
                cout<<"Vamos a preparar el huevo revuelto";
            }else if(huevo==4){
                cout<<"Vamos a preparar el huevo con jamon";
            }else if(huevo==5){
                cout<<"Vamos a preparar el huevo con tomate y cebolla";
            }
            else{
                cout<<"Esa opcion no esta";
            }

            break;
        }
        case 3:{
            cout<<"Vamos a cocinar pizza";

            break;
        }
        case 4: {
            cout<<"vamos a cocinar hamburguesa";

            break;
        }
        case 5: {
            cout<<"vamos a cocinar ceviche";

            break;
        }

        default: {
            cout<<"Esa opcion no esta en el menu";
        }

    }
    return 0;
}