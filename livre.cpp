#include"livre.h"
#include<iostream>
#include<vector>

Livre::Livre(std::string title, Auteur author, Date date, std::string editeur, std::string langue, std::string genre, long int ISBN) :
_titre(title), _auteur(author), _editeur(editeur), _langue(langue), _genre(genre), _ISBN(ISBN){
    std::cout << "Livre crée" << std::endl;
}

std::string Livre::title() const {
    return _titre;
}

Auteur Livre::author() const {
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

void Livre::updateAuthor(Auteur author) {
    _auteur = author;
}

void Livre::updateDate(Date date) {
    _dateDePublication = date;
}

long int Livre::isbn() const {
    return _ISBN;
}

std::string Livre::genre() const {
    return _genre;
}

std::ostream& operator<<(std::ostream& os,Livre livre){
    Date date = livre.dateDePublication();
    Auteur auteur = livre.author();
    os << "titre : " << livre.title() << " auteur: " << auteur.nom() << " prenom auteur:" << auteur.prenom() << " date de publication : " << date.day()<< " " << date.month()<< " " << date.year() << " editeur : " << livre.editeur() << " langue : " << livre.langue() << " genre : " << livre.genre() << " ISBN : " << livre.isbn() << std::endl;
    return os;
}