#include "lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom, std::vector<long> listeISBN) : _id(id), _nom(nom), _prenom(prenom), _listeISBN(listeISBN){

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
std::vector<long> Lecteur::listeISBN(){
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