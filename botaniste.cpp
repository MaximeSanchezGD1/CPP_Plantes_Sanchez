#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include <vector>
#include <iostream>
#include "Botaniste.h"


    void Botaniste::affichePartie(){
        std::cout << _name << " possède " << _argent << " euros, " << _mana <<
        "/" << _argentTotal << " argent au total.";
        _hand[0]->affiche();
    }
    
    Botaniste::Botaniste(int dodo, std::string nom, std::vector<Plante*> ):
    _sommeil(dodo), _name(nom, _argentTotal(0), _argent(0), _portefeuille(sous)) {}
    
    void Botaniste::buyPlante(int portefeuille){
        _board.push_back(_hand[portefeuille]);
    }
    
    void Botaniste::regainArgent(){
        _argent=_argentTotal;
    }
    
#endif