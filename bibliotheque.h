#include <iostream>
#include <vector>
#include "livre.h"
#include "lecteur.h"
#include "emprun.h"

class Bibliotheque {
    public:
        Bibliotheque();
        
        std::vector<Auteur> listeAuteurs();
        std::vector<Livre> listeLivres();
        std::vector<Lecteur> listeLecteurs();
        std::vector<Emprun> listeEmpruns();
        void ajouteAuteur(Auteur auteur);
        void ajouteLivre(Livre livre);
        void ajouteLecteur(Lecteur lecteur);
        void ajouteEmprun(Emprun emprun);
        void deleteEmprun(Emprun emprun);
        bool isDispo(long int isbn);
        void affichLivresAuteurs(Auteur auteur);
        void affichEmpruns(void);
        void affichLivresLecteur(Lecteur lecteur);
        void affichClassementLecteurs(void);        
    private:
        std::vector<Auteur> _listeAuteurs;
        std::vector<Livre> _listeLivres;
        std::vector<Lecteur> _listeLecteurs;
        std::vector<Emprun> _listeEmpruns;
};