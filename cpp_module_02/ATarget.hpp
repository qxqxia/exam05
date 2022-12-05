#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
#include <string>
class ASpell;

class ATarget{
	protected:
		std::string _type;
	public:
		ATarget(void);
		ATarget(std::string type);
		ATarget(ATarget const &src);
		virtual ~ATarget(void);

		ATarget& operator=(ATarget const &rhs);

		std::string const &getType()const;

		virtual ATarget* clone()const = 0;
		void gitHitBySpell(ASpell const &spell)const;
};

#endif
