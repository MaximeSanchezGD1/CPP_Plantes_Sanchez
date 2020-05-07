#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
    protected:
    
        std::string _name;
        std::string _type;
        int_maturite;
        int_hydratation;
        int_sante;
        int_engrais;
        int_coupe;
        int_arrose;
        
      public:
      
        void virtual affiche();
        Plante(int cout, std::string nom, std::string type);
    
};