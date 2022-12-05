#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
class Warlock{
	public:
		typedef std::pair<std::string, ASpell*> Spell;
		typedef std::map<std::string, ASpell*> Sbook;
		typedef Sbook::iterator Iterator;
	public:
		Warlock(std::string name, std::string title);
		virtual ~Warlock();

		std::string const &getName()const;
		std::string const &getTitle()const;
		void setTitle(std::string newtitle);
		void introduce()const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellname);
		void launchSpell(std::string spellname, ATarget const &target);
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &src);
		Warlock& operator=(Warlock const &rhs);
		Sbook _sbuff;
};

#endif
