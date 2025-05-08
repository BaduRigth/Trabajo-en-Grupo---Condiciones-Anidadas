#include <iostream>

using namespace std;

int main() 
{
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
    return 0;
}
