#include"emprun.h"
#include<iostream>

Emprun::Emprun(std::string id, Date date, std::string idLivre, std::string idAdherent) :
_id(id), _date(date), _idLivre(idLivre), _idAdherent(idAdherent) {
    std::cout << "Emprun crée" << std::endl;
}

std::string Emprun::id() const {
    return _id;
}

std::string Emprun::idLivre() const {
    return _idLivre;
}

std::string Emprun::idAdherent() const {
    return _idAdherent;
}

Date Emprun::date() const {
    std::cout << D.month() << "/" << D1.day() << "/" << D1.year()
    return ;
}

Date Emprun::dateRetour() const {
    return _dateRetour;
}

