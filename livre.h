
#include"date.h"
#include<vector>
#include<iostream>

class Livre {
    public:
        Livre(std::string title, std::string author, Date date, std::string editeur, std::string langue, std::string genre, long int ISBN);
        std::string title() const;
        std::string author() const;
        Date date() const;
        long int isbn() const;
        void updateTitle(std::string title);
        void updateAuthor(std::string author);
        void updateDate(Date date);
        
    private:
        std::string _titre;
        std::string _auteur;
        std::string _editeur;
        Date _dateDePublication;
        std::string _langue;
        std::string _genre;
        long int _ISBN;
        std::vector<std::string> _listeID;
};