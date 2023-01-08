#include "bibliotheque.h"
#include <iostream>

Bibliotheque::Bibliotheque(){
    
}

std::vector<Auteur> Bibliotheque::listeAuteurs(){
    return _listeAuteurs;
}
std::vector<Livre> Bibliotheque::listeLivres(){
    return _listeLivres;
}
std::vector<Lecteur> Bibliotheque::listeLecteurs(){
    return _listeLecteurs;
}
 std::vector<Emprun> Bibliotheque::listeEmpruns(){
    return _listeEmpruns;
 }
void Bibliotheque::ajouteAuteur(Auteur auteur){
    _listeAuteurs.push_back(auteur);
}
void Bibliotheque::ajouteLivre(Livre livre){
    _listeLivres.push_back(livre);
    ajouteAuteur(livre.author());
}
void Bibliotheque::ajouteLecteur(Lecteur lecteur){
    _listeLecteurs.push_back(lecteur);
}
void Bibliotheque::ajouteEmprun(Emprun emprun){
    if(isDispo(emprun.idLivre())){
        _listeEmpruns.push_back(emprun);
        for(auto i = _listeLecteurs.begin() ; i != _listeLecteurs.end(); i++){
            Lecteur lecteur = *i;
            if(lecteur.id() == emprun.idAdherent()){
                lecteur.ajouteListeISBN(emprun.idLivre());
                *i = lecteur;
            }
        }
    }
}
void Bibliotheque::deleteEmprun(Emprun emprun){
        for(auto i = _listeLecteurs.begin() ; i != _listeLecteurs.end(); i++){
            Lecteur lecteur = *i;
            if(lecteur.id() == emprun.idAdherent()){
                lecteur.removeListeISBN(emprun.idLivre());
                *i = lecteur;
            }
        }

        for(auto i = _listeEmpruns.begin() ; i != _listeEmpruns.end(); i++){
            Emprun idEmprun = *i;
            if(idEmprun.idAdherent() == emprun.idAdherent()){
                _listeEmpruns.erase(i);
            }
        }
}
bool Bibliotheque::isDispo(long int isbn){
    bool dispo = true;
    for(auto i = _listeEmpruns.begin() ; i != _listeEmpruns.end(); i++){
        Emprun emprun = *i;
        if(emprun.idLivre() == isbn){
            dispo = false;
        }
    }
    return dispo;
}

/*
void affichLivresAuteurs(Auteur auteur){
    for(auto i = _listeLivres.begin(); i != _listeLivres.end(); i++){
        Livre livre = *i;
        Auteur auteur2 = livre.author();
        if(auteur.idAuteur() == auteur2.idAuteur()){
            std::cout << livre << std::endl;
        }
    }
}

void affichEmpruns(){
    int j, l = 0;
     for(auto i = _listeEmpruns.begin() ; i != _listeEmpruns.end(); i++){
        Emprun emprun = *i;
        Date dateEmprun = emprun.dateEmprun();
        Date dateRetour = emprun.dateRetour();
        std::cout << "Date d'emprun : " << dateEmprun.day() << dateEmprun.month()<< dateEmprun.year() << std::endl;
        std::cout << "Date de retour : " << dateRetour.day() << dateRetour.month()<< dateRetour.year() << std::endl;
        std::cout << "id Adhérent : " << emprun.idAdherent() << std::endl;
        std::cout << "id Livre : " << emprun.idLivre() << std::endl;
        j++;
    }

    for(auto i = _listeLivres.begin(); i != _listeLivres.end(); i++){
        l++;
    }

    std::cout << "pourcentage de livre empruntés : " << j/l*100 << "%" << std::endl;

}

void affichLivresLecteur(Lecteur lecteur){
    std::vector<long int> listeISBN = lecteur.listeISBN();
    for(auto i = listeISBN.begin(); i != listeISBN.begin(); i++){
        for (auto j = _listeLivres.begin(); j != _listeLivres.end(); j++){
            if(*i == *j.isbn()){
                std::cout << *j << std::endl;
            }
        }
    }
}

void affichClassementLecteurs(){
    for(auto i = _listeLecteurs.begin(); i != _listeLecteurs.end(); i++){
    
    }
}
*/