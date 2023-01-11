#include <iostream>
#include <string>
#include "bibliotheque.h"

void affichLecteur(Lecteur lecteur);

int main() {
    //création d'une date qui servira pour toutes les dates demandées
    Date date(01,01,01);

    //création des auteurs
    Auteur auteur1("06521", "liaud", "colin", date);
    Auteur auteur2("5148", "monnom", "monprenom", date);
    Auteur auteur3("52115", "sonnom", "sonprenom", date);

    //création des livres
    Livre livre1("livre1", auteur1, date, "editeur1", "langue1", "genre1", 1111);
    Livre livre2("livre2", auteur2, date, "editeur2", "langue2", "genre2", 2222);
    Livre livre3("livre3", auteur1, date, "editeur3", "langue3", "genre3", 3333);
    Livre livre4("livre4", auteur2, date, "editeur4", "langue4", "genre4", 4444);
    Livre livre5("livre5", auteur2, date, "editeur5", "langue5", "genre5", 5555);
    Livre livre6("livre6", auteur2, date, "editeur6", "langue6", "genre6", 6666);
    Livre livre7("livre7", auteur2, date, "editeur7", "langue7", "genre7", 7777);
    Livre livre8("livre8", auteur2, date, "editeur8", "langue8", "genre8", 8888);
    Livre livre9("livre9", auteur2, date, "editeur9", "langue9", "genre9", 9999);
    Livre livre10("livre10", auteur2, date, "editeur10", "langue10", "genre10", 10101010);

    //création des lecteur
    Lecteur lecteur1("id1", "nom1","prenom1");
    Lecteur lecteur2("id2", "nom2","prenom2");

    //création des emprunts
    Emprun emprun1(date, livre1.isbn(), lecteur1.id());
    Emprun emprun2(date, livre2.isbn(), lecteur2.id());
    Emprun emprun3(date, livre3.isbn(), lecteur2.id());

    //création de la bibliothèque
    Bibliotheque biblio;

    //on ajoute les auteurs
    biblio.ajouteAuteur(auteur1);
    biblio.ajouteAuteur(auteur2);
    biblio.ajouteAuteur(auteur3);

    //on ajoute les livres
    biblio.ajouteLivre(livre1);
    biblio.ajouteLivre(livre2);
    biblio.ajouteLivre(livre3);
    biblio.ajouteLivre(livre4);
    biblio.ajouteLivre(livre5);
    biblio.ajouteLivre(livre6);
    biblio.ajouteLivre(livre7);
    biblio.ajouteLivre(livre8);
    biblio.ajouteLivre(livre9);
    biblio.ajouteLivre(livre10);

    //on ajoute les lecteurs
    biblio.ajouteLecteur(lecteur1);
    biblio.ajouteLecteur(lecteur2);

    //on ajoute les emprunts, avec 2 fois l'emprun 1 pour verifier qu'il n'est pas possible de l'emprunter 2 fois 
    biblio.ajouteEmprun(emprun1);  
    biblio.ajouteEmprun(emprun2);
    biblio.ajouteEmprun(emprun1);
    biblio.ajouteEmprun(emprun3);

    //on récupère les infos de la bibliothèque
    std::vector<Auteur> listeAuteurs = biblio.listeAuteurs();
    std::vector<Livre> listeLivres = biblio.listeLivres();
    std::vector<Lecteur> listeLecteurs = biblio.listeLecteurs();
    std::vector<Emprun> listeEmprunts = biblio.listeEmpruns();

    //on affiche les infos 
    std::cout << "\nlecteur 1 : \n" << std::endl;
    affichLecteur(listeLecteurs[0]); //afficher les infos du lecteur 1
     std::cout << "\nlecteur 2 : \n" << std::endl;
    affichLecteur(listeLecteurs[1]); //afficher les infos du lecteur 2
     std::cout << "\nlivre 1 : \n" << std::endl;
    std::cout << livre1 << std::endl; //afficher les infos du livre 1
     std::cout << "auteur 1 : \n" << std::endl;
    std::cout << auteur1 << std::endl; //afficher les infos de l'auteur 1  
     std::cout << "livres de l'auteur 1 : \n" << std::endl;
    biblio.affichLivresAuteurs(auteur1); //afficher les livres de l'auteur 1
     std::cout << "classement des lecteurs : \n" << std::endl;
    biblio.affichClassementLecteurs();//afficher classement des lecteurs ***********************
     std::cout << "emprunts : \n" << std::endl;
    biblio.affichEmpruns();//affciher les emprunts 
     std::cout << "\nlivres empruntes par le lecteur 1 : \n" << std::endl;
    biblio.affichLivresLecteur(listeLecteurs[0]);//affciher les livres empruntés par le lecteur 1
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

