#include <iostream>
#include "date.h"
#include "livre.h"
#include "emprun.h"


int main() {
    Date D1(1, 1, 2022);
    std::cout << D1.month() << "/" << D1.day() << "/" << D1.year() << std::endl;
    std::cout << "Hello, World!" << std::endl;  

    //problème constructeur cause : utilisation de la classe Date
    //Livre L1("Le Petit Prince", "Antoine de Saint-Exupéry", (1,1,2022), "Gallimard", "Français", "Roman", "9782070413095");
    //std::cout << L1.title() << L1.author() << L1.author() << D1.day() << "/" << D1.month() << "/" << D1.year() << std::endl;
    Emprun E1("1", (1,1,2022), "1", "1");
    std::cout << E1.id() << E1.date().day() << "/" << E1.date().month() << "/" << E1.date().year() << E1.idLivre() << E1.idAdherent() << std::endl;
    return 0;
}
//(std::string title, std::string author, Date date, std::string editeur, std::string langue, std::string genre, std::string ISBN)

