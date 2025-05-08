
#include <iostream>
using namespace std;
int main()
{
	//SITUACION DE ROBO
	
	int respuesta;
	
	cout << endl << "Estas en una estación de Tren y ves que esta pasando un Robo." << endl;
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
	
	}
	cout << endl << endl;
	cout << "----------------" << endl;
	
	
	//SITUACION COPIANDO EXAMEN
		
	cout << "Eres un Profesor y Ves como un alumno esta copiando en el examen Final." << endl;
	cout << "Que Haces?:" << endl << endl;
	
	cout << "1. Preguntarle si esta copiando y darle otra oportunidad" << endl;
	cout << "2. Ir y anularle el examen completo" << endl;
	cout << "3. Anularle la Parte del examen que esta copiando" << endl;
	cout << "4. Que pase a hacer el examen frente a ti para que no copie" << endl;
	cout << "5. Sacarlo de la clase y no dejar que termine el examen." << endl;
	
	cout << endl << endl;
	
	
	
}
