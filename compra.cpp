#include <iostream>

using namespace std;

int main(){

    int opcion;

    cout<<"Realizar una compra"<<endl;
    cout<<"¿Que quieres comprar? (1,2,3,4,5)"<<endl;
    cout<<"1. ropa"<<endl;
    cout<<"2. maquillaje"<<endl;
    cout<<"3. accesorios"<<endl;
    cout<<"4. comida"<<endl;
    cout<<"5. zapatos"<<endl;
    cin>>opcion;

    switch(opcion){

        case 1: {
            cout<<"Vas a comprar ropa";
            break;
        }
        case 2: {
            cout<<"Vas a comprar maquillaje";
            break;
            break;
        }
        case 3:{
            cout<<"Vas a comprar accesorios";

            break;
        }
        case 4: {
            cout<<"Vas a comprar comida";
            break;

            break;
        }
        case 5: {
            cout<<"Vas a comprar zapatos";
            break;

            break;
        }

        default: {
            cout<<"Esa opcion no esta en el menu";
        }

    }
    return 0;
}