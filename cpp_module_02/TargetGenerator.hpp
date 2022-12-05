#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
class TargetGenerator{
        public:
                typedef std::pair<std::string, ATarget*> Spell;
                typedef std::map<std::string, ATarget*> TargetG;
                typedef TargetG::iterator Iterator;
        public:
                TargetGenerator();
                virtual ~TargetGenerator();
                void learnTargetType(ATarget* target);
                void forgetTargetType(std::string const &target);
                ATarget* createTarget(std::string const &target);
        private:
                TargetGenerator(TargetGenerator const &src);
                TargetGenerator& operator=(TargetGenerator const &rhs);
                TargetG _sbuff;
};

#endif

