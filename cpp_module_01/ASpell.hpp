#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
	public:
		ASpell(void);
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const &src);
		virtual ~ASpell(void);

		ASpell& operator=(ASpell const &rhs);

		std::string const &getName()const;
		std::string const &getEffects()const;

		virtual ASpell* clone()const = 0;
		void launch(ATarget const &target)const;
	
	protected:
		std::string _name;
		std::string _effects;
};

#endif
