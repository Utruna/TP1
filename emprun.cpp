#include"emprun.h"
#include"date.h"
#include<iostream>

Emprun::Emprun(Date dateEmprun, long int idLivre, std::string idAdherent) :
_dateEmprun(dateEmprun), _idLivre(idLivre), _idAdherent(idAdherent) {
    std::cout << "Emprun cree" << std::endl;
    
}

long int Emprun::idLivre() const {
    return _idLivre;
}

std::string Emprun::idAdherent() const {
    return _idAdherent;
}

Date Emprun::dateEmprun() const {
    std::cout << "Emprunter le " << _dateEmprun.month() << "/" << _dateEmprun.day() << "/" << _dateEmprun.year();
    return 0;
}

Date Emprun::dateRetour() const {
    std::cout << "A rendre avant le " << _dateEmprun.day();
    if (_dateEmprun.month() == 12) {
        std::cout << "/" << 1 << "/" << _dateEmprun.year()+1 ;
    }
    else {
        std::cout << "/" << _dateEmprun.month() + 1 << "/" << _dateEmprun.year();
    }
    return 0;
}

