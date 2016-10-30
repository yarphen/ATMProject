#include "UserInterface.h"
#include <iostream>
int UserInterface::input(){
	size_t input;
	do{
		std::cin >> input;
	}while(!isValid(input));
};
void UserInterface::output(char *){

};
bool UserInterface::isValid(int input){

};