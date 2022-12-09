#include"livre.h"
#include<iostream>
#include<vector>

Livre::Livre(std::string title, std::string author, Date date, std::string editeur, std::string langue, std::string genre, long int ISBN) :
_titre(title), _auteur(author), _editeur(editeur), _langue(langue), _genre(genre), _ISBN(ISBN) {
    std::cout << "Livre crée" << std::endl;
}

std::string Livre::title() const {
    return _titre;
}

std::string Livre::author() const {
    return _auteur;
}

Date Livre::date() const {
    return _dateDePublication;
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

