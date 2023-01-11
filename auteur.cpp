#include "auteur.h"

Auteur::Auteur(std::string idAuteur, std::string nom, std::string prenom, Date dateNaissance) : _idAuteur(idAuteur), _nom(nom), _prenom(prenom), _dateNaissance(dateNaissance)
{}

std::string Auteur::idAuteur(){
    return _idAuteur;
}
std::string Auteur::nom(){
    return _nom;
}
std::string Auteur::prenom(){
    return _prenom;
}
Date Auteur::dateNaissance(){
    return _dateNaissance;
}

std::ostream& operator<<(std::ostream& os,Auteur auteur){
    Date date = auteur.dateNaissance();
    os << "identifiant : " << auteur.idAuteur() << " nom : " << auteur.nom() << " prenom : " << auteur.prenom() << " date de naissance : " << date.day() << date.month() << date.year() << std::endl;
    return os;
}