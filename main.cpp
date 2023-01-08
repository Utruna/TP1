#include <iostream>
#include <string>
#include "bibliotheque.h"

void affichLecteur(Lecteur lecteur);

int main() {
    Date date(01,01,01);

    Auteur auteur1("06521", "liaud", "colin", date);
    Auteur auteur2("5148", "monnom", "monprenom", date);
    Auteur auteur3("52115", "sonnom", "sonprenom", date);

    Livre livre1("livre1", auteur1, date, "editeur1", "langue1", "genre1", 251896);
    Livre livre2("livre2", auteur2, date, "editeur2", "langue2", "genre2", 55269);
    Livre livre3("livre3", auteur2, date, "editeur2", "langue2", "genre2", 11155269);


    Lecteur lecteur1("id1", "nom1","prenom1");
    Lecteur lecteur2("id2", "nom2","prenom2");

    Emprun emprun1(date, livre1.isbn(), lecteur1.id());
    Emprun emprun2(date, livre2.isbn(), lecteur2.id());
    Emprun emprun3(date, livre3.isbn(), lecteur2.id());

    Bibliotheque biblio;

    biblio.ajouteAuteur(auteur1);
    biblio.ajouteAuteur(auteur2);
    biblio.ajouteAuteur(auteur3);

    biblio.ajouteLivre(livre1);
    biblio.ajouteLivre(livre2);

    biblio.ajouteLecteur(lecteur1);
    biblio.ajouteLecteur(lecteur2);

    biblio.ajouteEmprun(emprun1);
    biblio.ajouteEmprun(emprun2);
    biblio.ajouteEmprun(emprun1);
    biblio.ajouteEmprun(emprun3);

    std::vector<Auteur> listeAuteurs = biblio.listeAuteurs();
    std::vector<Livre> listeLivres = biblio.listeLivres();
    std::vector<Lecteur> listeLecteurs = biblio.listeLecteurs();
    std::vector<Emprun> listeEmprunts = biblio.listeEmpruns();


    affichLecteur(listeLecteurs[0]);
    affichLecteur(listeLecteurs[1]);

    return 0;
}

void affichLecteur(Lecteur lecteur){
    std::cout << "\n";
    std::cout << lecteur << std::endl;
    std::vector<long int> isbn1 = lecteur.listeISBN();
    int j = 0;
    std::cout << "Liste des ISBN empruntes : " << std::endl;
    for(auto i = isbn1.begin(); i != isbn1.end(); i++){
        lecteur.displayListeISBN(j);
        j++;
    }
}

