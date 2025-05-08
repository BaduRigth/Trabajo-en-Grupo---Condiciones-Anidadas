
#include <iostream>
using namespace std;
int main()
{
	
	cout << "Bienvenido. A continuacion se Presentaran Situaciones Ficticias para ver que haces en cada situacion." << endl;
	cout << endl;
	
	for (int i = 1; i <= 6; i++)
	{
		switch (i)
		{
			case 1: //SITUACION DE ROBO
				int respuesta;
	
				cout << endl << "Estas en una estacion de Tren y ves que esta pasando un Robo." << endl;
				cout << " Que haces?:" << endl << endl;
				
				cout << "1. Ir a Enfrentar al ladron y ser el Heroe." << endl;
				cout << "2. Llamar a la Policia." << endl;
				cout << "3. Seguirlo para encontrar donde se esconde." << endl;
				cout << "4. Hacerte el Loco e Ignorar lo que pasa. " << endl;
				cout << "5. No hacer nada y comenzar a grabar video para luego subirlo a Tik Tok. " << endl;
				cin >> respuesta;
				
				switch (respuesta)
				{
					case 1:
						cout << endl << "Logras Detener el Robo pero te hirieron y ahora tienes que ir al Hospital." << endl;
					break;
					
					case 2:
						cout << endl << "Cuando la Policia llega el ladron ya se ha escapado." << endl;
					break;
					
					case 3:
						cout << endl << "Encuentras su ubicacion pero mas ladrones te siguen y te atrapan" << endl;
					break;
					
					case 4:
						cout << endl << "Mmm... Spiderman no haria eso" << endl;
					break;
					
					case 5:
						cout << endl << "Minimo que se Haga Viral" << endl;
					break;
					default:
						return(0);
					break;
				
				}
				cout << endl;
				cout << "----------------" << endl << endl;
			break;
			
			case 2: 	//SITUACION COPIANDO EXAMEN
				int respuesta2;
				cout << "Eres un Profesor y Ves como un alumno esta copiando en el examen Final." << endl;
				cout << "Que Haces?:" << endl << endl;
					
				cout << "1. Preguntarle si esta copiando y darle otra oportunidad" << endl;
				cout << "2. Ir y anularle el examen completo" << endl;
				cout << "3. Anularle la Parte del examen que esta copiando" << endl;
				cout << "4. Que pase a hacer el examen frente a ti para que no copie" << endl;
				cout << "5. Sacarlo de la clase y no dejar que termine el examen." << endl;
				cin >> respuesta2;	
				
				cout << endl;
				cout << "----------------" << endl << endl;
				
			break;
			
			case 3: // IRSE DE VIAJE
				
				int c;

				cout<<"Tienes la oportunidad de viajar, a donde irias?"<<endl;
				cout<<"1. Ir a Alaska"<<endl;
				cout<<"2. Ir a Brasil"<<endl;
				cout<<"3. Ir a Inglaterra"<<endl;
				cout<<"4. Ir a Puerto Rico"<<endl;
				cout<<"5. Ir a Dubai"<<endl;
				cin>>c;

				cout << endl;
				cout << "----------------" << endl << endl;
			break;
			
			case 4: // RECETA
			
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
				cout << endl;
				cout << "----------------" << endl << endl;
			break;
			
			case 5: //COMPRA
				int b;

			   	cout<<"Tienes una buena cantidad de dinero, que comprarias?"<<endl;
			   	cout<<"1. Comprar una Mansion"<<endl;
			   	cout<<"2. Comprar una finca"<<endl;
			   	cout<<"3. Comprar un Setup gamer"<<endl;
			   	cout<<"4. Comprar una television"<<endl;
			   	cout<<"5. Comprar un carro"<<endl;
			   	cin>>b;
			   	
			   	cout << endl;
				cout << "----------------" << endl << endl;

			break;
			
			case 6: //LAMPARA MAGICA 
				int a;

				cout<<"Encuentras una LAMPARA MAGICA y puedes desear solo un deseo: "<<endl;
				cout<<"1. Ser millonario"<<endl;
				cout<<"2. Ser la persona mas inteligente del mundo"<<endl;
				cout<<"3. Ser bueno en todo lo que hagas"<<endl;
				cout<<"4. Ser la persona mas atractiva del mundo"<<endl;
				cout<<"5. Ser famoso"<<endl;
				cout<<"Que deseas?"<<endl;
				cin>>a;
				
				switch (a)
				{
					case 1:
				
						cout<<"Tiembla Elon Musk, Tu deseo es concedido"<<endl;
					break;
				
				    case 2:
				
				    	cout<<"Futuro Albert Einstein, Tu deseo es concedido"<<endl;
				    break;
				
				    case 3:
				
				    	cout<<"Seras un crack, Tu deseo es concedido"<<endl;
				    break;    
				  
				    case 4:
				
				    	cout<<"Felicidades Henry Cavill, Tu deseo es concedido"<<endl;
				    break;    
				 
				    case 5:
				
				    	cout<<"Una estrella de cine, Tu deseo es concedido"<<endl;
				    break;    
				
				   default:
				    break;
				   }
				   	cout << endl;
					cout << "----------------" << endl << endl;
			break;
			
		}	
	}
	
	cout << endl << "Gracias Por Participar" << endl;
	return(0);	
}

