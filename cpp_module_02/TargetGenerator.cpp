#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
        Iterator it = _sbuff.begin();
        for(; it != _sbuff.end(); ++it){
                delete(it->second);
        }
        _sbuff.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
        Iterator it = _sbuff.find(target->getType());
        if (it == _sbuff.end()){
                _sbuff.insert(Spell(target->getType(), target->clone()));
        }
}

void TargetGenerator::forgetTargetType(std::string const &target){
        Iterator it = _sbuff.find(target);
        if (it != _sbuff.end()){
                delete (it->second);
                _sbuff.erase(it);
        }
}

ATarget* TargetGenerator::createTarget(std::string const &target){
        Iterator it = _sbuff.find(target);
        if (it != _sbuff.end()){
                return (it->second);
        }
        return NULL;
} 
