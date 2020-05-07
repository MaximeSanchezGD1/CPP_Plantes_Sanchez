#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>

class Botaniste{
    
      protected:
    
        std::string _name;
        int_argent;
        int_argentTotal;
        int_sommeil;
        int_vente;
        int_decoupe;
        int_arrosage;
        
      public:
      
        void virtual affiche();
        Plante(int cout, std::string nom, std::string type);
    
};


#endif