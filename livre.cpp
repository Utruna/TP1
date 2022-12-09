#include"livre.h"
#include<iostream>
#include<vector>

Livre::Livre(std::string title, std::string author, Date dateDePublication, std::string editeur, std::string langue, std::string genre, std::string ISBN) :
_titre(title), _auteur(author), _dateDePublication(dateDePublication), _editeur(editeur), _langue(langue), _genre(genre), _ISBN(ISBN) {
    std::cout << "Livre cree" << std::endl;
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

