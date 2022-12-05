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
