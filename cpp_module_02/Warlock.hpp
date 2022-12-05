#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class Warlock{
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
		SpellBook _book;
};

#endif
