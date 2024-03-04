#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{

    public:
    int vida;
    int ataque;
    string nombre;
    string last;
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
    
    Jugador(); 
    Jugador(/* agrega parámetros para asignar hp, ataque y nombre */  int hp,int ataque, string nombre){


    ataque=ataque;
    vida=hp;
    nombre=nombre;
    };

    void atacar(/* agregar parámetros para atacar a otro jugador*/){


    }
    ; 

};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios
Jugador player1;
Jugador player2;
player1=( 70, 7,pepe);
player2=(55,6, mascou);

if(player1<0){
    cout<<"el jugador"<<player1.nombre<<"ha perdido por lo que "<<player2.nombre<<"es el ganador"<<endl;
}
if(player2<0){
    cout<<"el jugador"<<player2.nombre<<"ha perdido por lo que "<<player1.nombre<<"es el ganador"<<endl;
}
    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque. 
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina. 
        No importa quien ataca primero.
    */


    return 0;
}

Jugador::Jugador(){
    vida=100;
    ataque=5;
    nombre='No definido';
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
}

Jugador::Jugador(/* Agrega parámetros para asignar hp, ataque y nombre*/int hp,int ataque, string nombre){

    vida=hp;
    ataque=ataque;
    nombre=nombre;
    if(hp<0){
      cout<<"valor no permitido"<<endl;  
    }if(ataque<0){
        cout<<"valor no permitido"<<endl;
    }
     if(hp>200){
      cout<<"valor no permitido"<<endl;  
    }if(ataque>20){
        cout<<"valor no permitido"<<endl;
    }
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
}

void Jugador::atacar(/* Agregar parámetros para atacar a otro Jugador */){
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
   srand(time(0));
   int x = rand() % 20;
   Jugador player1, player2;
   int damage;
   while(player1.vida>0)
    player1.vida-x;
    player1.last;
    player2.vida-x;
    player2.last;
   
  
      cout<<"el jugador "<<player2.nombre<<"es el ganador"<<endl;

   while(player2.vida>0)
    player1.vida-x;
    player1.last;
    player2.vida-x;
    player2.last;


   cout<<"el jugador "<<player2.nombre<<"es el ganador";



   }
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
