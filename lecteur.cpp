#include "lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom) : _id(id), _nom(nom), _prenom(prenom){

}

 std::string Lecteur::id(){
    return _id;
 }
std::string Lecteur::nom(){
    return _nom;
}
std::string Lecteur::prenom(){
    return _prenom;
}
std::vector<long int> Lecteur::listeISBN(){
    return _listeISBN;
}

void Lecteur::updateId(std::string id){
    _id = id;
}
void Lecteur::updateNom(std::string nom){
    _nom = nom;
}
void Lecteur::updatePrenom(std::string prenom){
    _prenom = prenom;
}
void Lecteur::ajouteListeISBN(long isbn){
    _listeISBN.push_back(isbn);
}
void Lecteur::removeListeISBN(long isbn){
    for (auto i = _listeISBN.begin() ; i != _listeISBN.end(); i++)
    {
        if(*i == isbn){
            _listeISBN.erase(i);
        }
    }
    
}

void Lecteur::displayId(){
    std::cout << _id << std::endl;
}
void Lecteur::displayNom(){
    std::cout <<  _nom << std::endl;
}
void Lecteur::displayPrenom(){
    std::cout << _prenom << std::endl;
}
void Lecteur::displayListeISBN(int i){
    std::cout <<  _listeISBN[i] << std::endl;
}

std::ostream& operator<<(std::ostream os,Lecteur lecteur){
    os << "identifiant :" << lecteur.id() << "nom :" << lecteur.nom() << "prenom :" << lecteur.prenom() << std::endl;
    return os;
}