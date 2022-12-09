#include"livre.h"
#include<iostream>
#include<vector>

<<<<<<< HEAD
Livre::Livre(std::string title, std::string author, Date date, std::string editeur, std::string langue, std::string genre, long int ISBN) :
_titre(title), _auteur(author), _editeur(editeur), _langue(langue), _genre(genre), _ISBN(ISBN) {
    std::cout << "Livre crée" << std::endl;
=======
Livre::Livre(std::string title, std::string author, Date dateDePublication, std::string editeur, std::string langue, std::string genre, std::string ISBN) :
_titre(title), _auteur(author), _dateDePublication(dateDePublication), _editeur(editeur), _langue(langue), _genre(genre), _ISBN(ISBN) {
    std::cout << "Livre cree" << std::endl;
>>>>>>> 72bd9e8350bb28f8d4c82a36a51d48e754412563
}

std::string Livre::title() const {
    return _titre;
}

std::string Livre::author() const {
    return _auteur;
}

std::string Livre::editeur() const {
    return _editeur;
}

std::string Livre::langue() const {
    return _langue;
}

Date Livre::dateDePublication() const {
    std::cout << ", publier le : " << _dateDePublication.month() << "/" << _dateDePublication.day() << "/" << _dateDePublication.year();
    return 0;
}

void Livre::updateTitle(std::string title) {
    _titre = title;
}

void Livre::updateAuthor(std::string author) {
    _auteur = author;
}

void Livre::updateDate(Date date) {
    _dateDePublication = date;
}

long int Livre::isbn() const {
    return _ISBN;
}

