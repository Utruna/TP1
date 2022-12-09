#include <iostream>
#include <vector>

class Lecteur {
    public:
        Lecteur (std::string id, std::string nom, std::string prenom, std::vector<long> listeISBN);
        std::string id();
        std::string nom();
        std::string prenom();
        std::vector<long> listeISBN();
        void updateId(std::string id);
        void updateNom(std::string nom);
        void updatePrenom(std::string prenom);
        void ajouteListeISBN(long isbn);
        void removeListeISBN(long isbn);
    private:
        std::string _id;
        std::string _nom;
        std::string _prenom;
        std::vector<long> _listeISBN;
};