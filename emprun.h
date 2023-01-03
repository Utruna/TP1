#ifndef H_EMPRUN
#define H_EMPRUN
#include"date.h"
#include <iostream>

class Emprun {
public:
    Emprun(Date dateEmprun,long int idLivre, std::string idAdherent);
    long int idLivre() const;
    std::string idAdherent() const;
    Date dateEmprun() const;
    Date dateRetour() const;
private:
    long int _idLivre;
    std::string _idAdherent;
    Date _dateEmprun;
    Date _dateRetour;

};


#endif //!H_EMPRUN