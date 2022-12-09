#ifndef H_EMPRUN
#define H_EMPRUN
#include"date.h"
#include <iostream>

class Emprun {
public:
    Emprun(Date dateEmprun,std::string idLivre, std::string idAdherent);
    std::string idLivre() const;
    std::string idAdherent() const;
    Date dateEmprun() const;
    Date dateRetour() const;
private:
    std::string _idLivre;
    std::string _idAdherent;
    Date _dateEmprun;
    Date _dateRetour;

};


#endif //!H_EMPRUN