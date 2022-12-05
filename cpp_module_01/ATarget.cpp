#include "ATarget.hpp"

ATarget::ATarget(void){}

ATarget::ATarget(std::string type) : _type(type){}

ATarget::ATarget(ATarget const &src) : _type(src._type){}

ATarget::~ATarget(void){}

ATarget& ATarget::operator=(ATarget const &rhs){
	this->_type = rhs._type;
	return (*this);
}

std::string const &ATarget::getType()const{
	return _type;
}

void ATarget::gitHitBySpell(ASpell const &spell)const{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
