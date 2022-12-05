#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name),_title(title){
	std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!\n";
}

std::string const &Warlock::getName()const{
	return (this->_name);
}

std::string const &Warlock::getTitle()const{
	return (this->_title);
}
		
void Warlock::setTitle(std::string newtitle){
	this->_title = newtitle;
}

void Warlock::introduce()const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell* spell){
	this->_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellname){
	this->_book.forgetSpell(spellname);
}

void Warlock::launchSpell(std::string spellname, ATarget const &target){
	ASpell* tmp = this->_book.createSpell(spellname);
	if (tmp){
		tmp->launch(target);
	}
}
