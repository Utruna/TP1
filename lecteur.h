#include <iostream>
#include <vector>

class Lecteur {
    public:
        Lecteur (std::string id, std::string nom, std::string prenom);
        std::string id();
        std::string nom();
        std::string prenom();
        std::vector<long int> listeISBN();
        void updateId(std::string id);
        void updateNom(std::string nom);
        void updatePrenom(std::string prenom);
        void ajouteListeISBN(long isbn);
        void removeListeISBN(long isbn);
        void displayId();
        void displayNom();
        void displayPrenom();
        void displayListeISBN(int i);
    private:
        std::string _id;
        std::string _nom;
        std::string _prenom;
        std::vector<long> _listeISBN;
};
std::ostream& operator<<(std::ostream os, const Lecteur& lecteur);