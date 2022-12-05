#include "ASpell.hpp"

ASpell::ASpell(void){}
                
ASpell::ASpell(std::string name, std::string effects):_name(name),_effects(effects){}
               
ASpell::ASpell(ASpell const &src):_name(src._name),_effects(src._effects){}

ASpell::~ASpell(void){}

ASpell& ASpell::operator=(ASpell const &rhs){
	this->_name = rhs._name;
	this->_effects = rhs._effects;
	return (*this);
}

std::string const &ASpell::getName()const{
	return _name;
}

std::string const &ASpell::getEffects()const{
	return _effects;
}

void ASpell::launch(ATarget const &target)const{
	target.gitHitBySpell(*this);
}

