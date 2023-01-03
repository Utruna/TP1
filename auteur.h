#include <iostream>
#include "date.h"

class Auteur {
    public:
        Auteur(std::string idAuteur, std::string nom, std::string  prenom, Date dateNaissance);
        
        std::string idAuteur();
        std::string nom();
        std::string prenom();
        Date dateNaissance();
    private:
       std::string _idAuteur;
       std::string _nom;
       std::string _prenom;
       Date _dateNaissance;
};
std::ostream& operator<<(std::ostream os,Auteur auteur);