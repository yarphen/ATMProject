#ifndef USER_INTERFACE_H_
#define USER_INTERFACE_H_
class UserInterface{
private:
	static bool isValid(int);
public:
	int input();
	void output(char*);
	
};
#endif