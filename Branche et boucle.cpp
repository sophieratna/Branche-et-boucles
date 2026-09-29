#include <iostream>
#include <print>
using namespace std;
  // Exercie 1.1
int main() {
    int pv = 42;

    {
        if (pv ==0)
            std::cout <<"Game Over !\n";
    }

    //Exercice 1.2

    int munitions = 8;

    if (munitions %2 ==0) {
        std::cout<< "pair\n";
    }
    else {
        std::cout<<"impair\n";
    }

    //Exercie 1.3

    int Pv =36;
    if (Pv>=75) {
        std::cout<<"intact\n";
    }
    else if (Pv >=41) {
        std::cout <<"égratine\n";
    }
    else if (Pv>0) {
        std::cout<<"critique\n";
    }
    else {
    std::cout<<"Game over\n";
}
// Exercice 1.4

    char touche = 's';

    switch (touche) {
        case 'z':
            std::cout<<"Avancez\n";
            break;
        case 's':
            std::cout<<"Reculez\n";
            break;
        case'q':
            std::cout<<"Gauche\n";
            break;
        case'd':
            std::cout<<"Droite\n";
            break;
        default:

    }

    //Excercie 1.5
 int countdown =10;
    while (countdown>0) {
        std::println("{}",countdown);
        countdown--;
    }
    std::println("Decollage");




























    return 0;
}
