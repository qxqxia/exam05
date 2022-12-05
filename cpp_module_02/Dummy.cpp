#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Pratice Dummy"){}

Dummy::~Dummy(){}

ATarget* Dummy::clone()const{
	return (new Dummy());
}
