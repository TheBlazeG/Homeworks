#include <iostream>
#include <cstdlib>
using namespace std;
void Homework1()
{
    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int tries = 0;
    int guess;

 cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {

        cout << "\nAdivina un numero! (1-100):" << endl;
        cin >> guess;
        tries++;
        int VC = secretNumber - guess;
        if (VC >= -5 && VC <= 5 && VC != 0)
        {
            cout << "Estas muy cerca!\n";
        }
        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";

        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";

        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}
void homework2()
{
    int opciontarea2;
    int numeroinicial;
    int numeroinicial2;
    
    cout << "Escoge que proceso quieres usar." << "\n1-Pos o Neg." << "\n2-Suma de numero de 2 digitos." << "\n3-Determinar si numero es par por partes." << "\n4-numero mas alto entre 3" <<"\n5-pares entre un numero minimo y un maximo.";
    cin >> opciontarea2;
    switch (opciontarea2)
    {
    case 1:
        int posneg;
        cout << "ingresa el numero\n";
        cin >> posneg;
        if (posneg > 0)
        {
            cout << "El numero es Positivo";
        }
        if (posneg < 0)
        {
            cout << "El numero es Negativo";
        }
        else
        {
            cout << "El numero es 0";
        }
        break;
    case 2:
    {
        cout << "Ingresa el numero de 2 digitos" << endl;
        cin >> numeroinicial;
        int decena = numeroinicial / 10;
        int unidad = numeroinicial - (decena * 10);

        cout << decena + unidad;
        break;
    }
    case 3:
    {
        cout << "Ingresa el numero de 2 digitos\n" << endl;
        cin >> numeroinicial2;
        int decena2 = numeroinicial2 / 10;
        int unidad2 = numeroinicial2 - (decena2 * 10);

        if ((decena2 % 2) == 0)
        {
            cout << "la decena " << decena2 << " es par" << endl;
        }
        if ((unidad2 % 2) == 0)
        {
            cout << "la unidad " << unidad2 << " es par";
        }
    }
        break;
    case 4:
        int numeros[3];
        cout << "Ingresa 3 numeros\n";
        for (unsigned int i = 0; i < 3; i++)
        {
            cin >> numeros[i];
        }
        for (unsigned int i = 0; i < 3; i++)
        {
            for (unsigned int i = 0; i < 2; i++)
            {
                if (numeros[i] < numeros[i + 1])
                {
                    int tempmen = numeros[i];
                    numeros[i] = numeros[i + 1];
                    numeros[i + 1] = tempmen;
                }
            }
        }
        cout << "El numero mayor es " << numeros[0];
        break;
    case 5:
        int min;
        int max;
        cout << "Da el minimo y el maximo del rango\n";
        cin >> min;
        cin >> max;
        for (int x = min; x < max; x++)
        {
            if ((x%2)==0)
            {
                cout << x << " es par.\n";
            }
        }
        break;
    default:
        break;
    }
}
void Homework3()
{
    int option;
    srand(static_cast<unsigned int>(time(0)));
    int Pcoption = 1 + rand() % (3);
    int jugar;
    do //todo el programa
    {
        int score = 0;
        int pcscore = 0;
        do//juego
        {
            do//Opcion juego para evitar numero random
            {
                system("cls");
                cout << Pcoption << endl << "Jugador:" << score << " Computadora:" << pcscore << endl << "Bienvenido a Piedra, Papel o Tijera!, Escoge: Piedra(1) Papel(2) Tijera(3)";
                cin >> option;
            } while (option > 3 || option < 1 || option == 0);
            switch (option)
            {
            case 1:
                if (Pcoption == 2)
                {
                    cout << "Perdiste, la computadora obtiene un punto!\n";
                    pcscore++;

                    system("pause");

                }
                if (option == Pcoption)
                {
                    cout << "Empate, Nadie Gana Puntos!\n";

                    system("pause");
                }
                if (Pcoption == 3)
                {
                    cout << "Ganaste obtienes un punto!\n";
                    score++;

                    system("pause");
                }
                break;
            case 2:
                if (Pcoption == 3)
                {
                    cout << "Perdiste, la computadora obtiene un punto!\n";
                    pcscore++;

                    system("pause");
                }
                if (option == Pcoption)
                {
                    cout << "Empate, Nadie Gana Puntos!\n";

                    system("pause");
                }
                if (Pcoption == 1)
                {
                    cout << "Ganaste obtienes un punto!\n";
                    score++;

                    system("pause");
                }
                break;
            case 3:
                if (Pcoption == 1)
                {
                    cout << "Perdiste, la computadora obtiene un punto!\n";
                    pcscore++;

                    system("pause");
                }
                if (option == Pcoption)
                {
                    cout << "Empate, Nadie Gana Puntos!\n";

                    system("pause");
                }
                if (Pcoption == 2)
                {
                    cout << "Ganaste obtienes un punto!\n";
                    score++;

                    system("pause");
                }
                break;
            }
        } while (score < 2 && pcscore < 2);
        if (score == 2)
        {
            cout << "Ganaste la partida!";

        }
        else
        {
            cout << "Perdiste la partida!";
        }
        cout << "Quieres seguir Jugando? Si(cualquier numero) No(4)\n";
        cin >> jugar;
    } while (jugar != 4);
}