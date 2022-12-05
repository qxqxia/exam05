#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
class SpellBook{
	public:
		typedef std::pair<std::string, ASpell*> Spell;
		typedef std::map<std::string, ASpell*> Sbook;
		typedef Sbook::iterator Iterator;
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spellname);
		ASpell* createSpell(std::string const &spellname);
	private:
		SpellBook(SpellBook const &src);
		SpellBook& operator=(SpellBook const &rhs);
		Sbook _sbuff;
};

#endif

