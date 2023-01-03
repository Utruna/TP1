
#include"date.h"
#include "auteur.h"
#include<vector>
#include<iostream>

class Livre {
    public:
        Livre(std::string title, Auteur author, Date date, std::string editeur, std::string langue, std::string genre, long int ISBN);
        
        std::string title() const;
        Auteur author() const;
        std::string editeur() const;
        std::string langue() const;
        Date dateDePublication() const;
        std::string genre() const;
        long int isbn() const;
        void updateTitle(std::string title);
        void updateAuthor(Auteur author);
        void updateDate(Date date);
        
    private:    
        std::string _titre;
        Auteur _auteur;
        std::string _editeur;
        Date _dateDePublication;
        std::string _langue;
        std::string _genre;
        long int _ISBN;
        std::vector<std::string> _listeID;
};
std::ostream& operator<<(std::ostream os,Livre livre);