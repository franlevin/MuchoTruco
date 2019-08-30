#include <iostream>
#include <string>

using namespace std;


void mensaje_ganador(string ganador){
    cout<<"Felicidades equipo: "<<ganador<<', han ganado la partida.';
}

int ganador (string e1, string e2){
    int valor;
    cout<<'¿Qué equipo recibe los puntos?'<<endl;
    cout<<'1) '<<e1<<endl;
    cout<<'2) '<<e2<<endl;
    cin>>valor;
    return valor;
}

int puntosEnvido()
{
    int x;
    cout<<'Ingrese el tipo de envido'<<endl;
    cout<<'0) No hubo'<<endl;
    cout<<'1) Envido '<<endl;
    cout<<'2) Real Envido'<<endl;
    cout<<'3) Envido Envido'<<endl;
    cout<<'4) Envido Real Envido'<<endl;
    cout<<'5) Envido Envido Real Envido'<<endl;
    cout<<'6) Falta Envido'<<endl;
    cin>>x;
    switch(x){
        case 0: return 0; break;
        case 1: return 2; break;
        case 2: return 3; break;
        case 3: return 4; break;
        case 4: return 5; break;
        case 5: return 7; break;
        case 6: return 8; break;
        default: return 9; break;

    }
}

int main()
{
    string equipo1, equipo2;
    int cont1=0, cont2=0, x, y, ronda = 1, envido = 9, puntosGanador = 0, ganadorDePuntos = 0;

    cout<<"Ingrese el nombre del equipo 1: ";
    cin>>equipo1;

    cout<<"Ingrese el nombre del equipo 2: ";
    cin>>equipo2;

    /*while (cont1<30 && cont2<30)
    {
        cout<<"Ronda "<<ronda<<endl;
        cout<<"Ingrese puntos ganados del equipo 1 en esta ronda: ";
        cin>>x;
        cont1 += x;
        cout<<"Ingrese puntos ganados del equipo 2 en esta ronda: ";
        cin>>y;
        cont2 += y;
        ronda++;
    }
    */

    while (envido == 9){
        envido == puntosEnvido();
    }
    if (envido == 8){
        if (cont1 > cont2){
            puntosGanador = 30 - cont1;
        }
        else {
            puntosGanador = 30 - cont2;
        }

    }
    puntosGanado = ganador();
    if puntosGanados == 1{
            cont1 +=
    }
    else {

    }

    }

    }
    if (cont1>=30)
    {
        mensaje_ganador(equipo1);
    }
    else
    {
        mensaje_ganador(equipo2);
    }

    return 0;
}


