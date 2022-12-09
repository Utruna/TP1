#include <iostream>
#include <string>
#include "date.h"
#include "livre.h"
#include "emprun.h"
#include "lecteur.h"

int main() {
    Date D1(1, 1, 2022);
    Date D2(24, 12, 2022);
    std::cout << D1.month() << "/" << D1.day() << "/" << D1.year() << std::endl;
    //problème constructeur cause : utilisation de la classe Date
    Livre L1("Le Petit Prince", "Antoine de Saint-Exupery", D1, "Gallimard", "Francais", "Roman", "9782070413095");
    std::cout << "titre : " << L1.title() << ", auteur : " << L1.author() << ", editeur :"<< L1.editeur() << ", langue : " << L1.langue();
    L1.dateDePublication();
    std::cout << std::endl;

    Emprun E1(D2, "456781", "1E4567898");
    E1.dateEmprun();
    std::cout << ", ID livre : " << E1.idLivre() << ", ID adherent : "<< E1.idAdherent() << std::endl;
    E1.dateRetour();

    std::vector<long int> v = {15526, 52595, 55655}; 
    Lecteur lecteur("59", "colin", "liaud", v);
    lecteur.ajouteListeISBN(55555);
    lecteur.removeListeISBN(52595);
    lecteur.displayId();
    lecteur.displayNom();
    lecteur.displayPrenom();
    lecteur.displayListeISBN(0);
    lecteur.displayListeISBN(1);
    lecteur.displayListeISBN(2);
    return 0;
}



