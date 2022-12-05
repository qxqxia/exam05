#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{
	public:
		Warlock(std::string name, std::string title);
		virtual ~Warlock();

		std::string const &getName()const;
		std::string const &getTitle()const;
		void setTitle(std::string newtitle);
		void introduce()const;
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &src);
		Warlock& operator=(Warlock const &rhs);
};

#endif
