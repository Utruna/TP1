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


void Bibliotheque::affichLivresAuteurs(Auteur auteur){
    for(auto i = _listeLivres.begin(); i != _listeLivres.end(); i++){
        Livre livre = *i;
        Auteur auteur2 = livre.author();
        if(auteur.idAuteur() == auteur2.idAuteur()){
            std::cout << livre << std::endl;
        }
    }
}

void Bibliotheque::affichEmpruns(){
    float j = 0, l = 0;
     for(auto i = _listeEmpruns.begin() ; i != _listeEmpruns.end(); i++){
        Emprun emprun = *i;
        Date dateEmprun = emprun.dateEmprun();
        std::cout << "\n";
        Date dateRetour = emprun.dateRetour();
        std::cout << "\n";
        std::cout << "id Adherent : " << emprun.idAdherent() << std::endl;
        std::cout << "id Livre : " << emprun.idLivre() << std::endl;
        std::cout << "\n" << std::endl;
        j++;
    }

    for(auto i = _listeLivres.begin(); i != _listeLivres.end(); i++){
        l++;
    }
    std::cout << "livres empruntes : " << j << std::endl;
    std::cout << "nombre livres : " << l << std::endl;
    double percent = 0.00;
    percent = j/l*100;
    std::cout << "pourcentage de livre empruntes : " << percent << "%" << std::endl;

}

void Bibliotheque::affichLivresLecteur(Lecteur lecteur){
    std::vector<long int> listeISBN = lecteur.listeISBN();
    for(auto i = listeISBN.begin(); i != listeISBN.end(); i++){
        long int isbn = *i;
        for (auto j = _listeLivres.begin(); j != _listeLivres.end(); j++){
            Livre livre = *j;
            if(isbn == livre.isbn()){
                std::cout << livre << std::endl;
            }
        }
    }
}

void Bibliotheque::affichClassementLecteurs(){
    std::vector<Lecteur> listeTri = _listeLecteurs;
    bool tri = false;
    int j = 0, l = 0;
    do{
        tri = true;
        for(auto i = _listeLecteurs.begin(); i != _listeLecteurs.end(); i++){
            if(listeTri[j].ndLivresEmpruntes() < listeTri[j+1].ndLivresEmpruntes()){
                Lecteur lecteur = listeTri[j];
                listeTri[j] = listeTri[j+1];
                listeTri[j+1] = lecteur;
                tri = false;
            }
            j++;
        }
    }while(!tri);
    for(auto i = listeTri.begin(); i != listeTri.end(); i++){
        std::cout << l+1 << " : ";
        std::cout << listeTri[l] << std::endl;  
        l++;   
    }
}
