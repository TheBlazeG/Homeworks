#include <iostream>
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
