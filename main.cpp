#include <iostream>
#include <string>
#include "bibliotheque.h"


int main() {

    Date date(01,01,01);

    Auteur auteur1("06521", "liaud", "colin", date);
    Auteur auteur2("5148", "monnom", "monprenom", date);
    Auteur auteur3("52115", "sonnom", "sonprenom", date);

    Livre livre1("livre1", auteur1, date, "editeur1", "langue1", "genre1", 251896);
    Livre livre2("livre2", auteur2, date, "editeur2", "langue2", "genre2", 55269);

    Lecteur lecteur1("id1", "nom1","prenom1");
    Lecteur lecteur2("id2", "nom2","prenom2");

    Emprun emprun1(date, livre1.isbn(), lecteur1.id());
    Emprun emprun2(date, livre2.isbn(), lecteur2.id());

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

    std::vector<Auteur> listeAuteurs = biblio.listeAuteurs();
    std::vector<Livre> listeLivres = biblio.listeLivres();
    std::vector<Lecteur> listeLecteurs = biblio.listeLecteurs();
    std::vector<Emprun> listeEmprunts = biblio.listeEmpruns();




    return 0;
}



