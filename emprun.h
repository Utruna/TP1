#ifndef H_EMPRUN
#define H_EMPRUN
#include"date.h"

class Emprun {
public:
    Emprun(std::string id, Date dateEmprun,std::string idLivre, std::string idUsager);
    std::string id() const;
    std::string idLivre() const;
    std::string idUsager() const;
    Date dateEmprun() const;
    Date dateRetour() const;
private:
    std::string _id;
    std::string _idLivre;
    std::string _idUsager;
    Date _dateEmprun;
    Date _dateRetour;

};


#endif //!H_EMPRUN