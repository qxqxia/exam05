#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	Iterator it = _sbuff.begin();
        for(; it != _sbuff.end(); ++it){
                delete(it->second);
        }
	_sbuff.clear();
}

void SpellBook::learnSpell(ASpell* spell){
	Iterator it = _sbuff.find(spell->getName());
	if (it == _sbuff.end()){
		_sbuff.insert(Spell(spell->getName(), spell->clone()));
	}
}

void SpellBook::forgetSpell(std::string const &spellname){
	Iterator it = _sbuff.find(spellname);
	if (it != _sbuff.end()){
		delete (it->second);
		_sbuff.erase(it);
	}
}

ASpell*  SpellBook::createSpell(std::string const &spellname){
	Iterator it = _sbuff.find(spellname);
	if (it != _sbuff.end()){
		return (it->second);
	}
	return NULL;
}
