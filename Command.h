#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include<string>
using namespace std;

class Command {
private: 
	string endLine;
	bool isNumbered = false;
	void invalid(string);
	string commandLine;
    string startLine;
		 
public:
	void setCommandLine(string commandLine) {
		this->commandLine = commandLine;
	}
	string getCommandLine() {
		return this->commandLine;
	}
	void setStartLine(string startLine) {
		this->startLine = startLine;
	}
	string getStartLine() {
		return this->startLine;
	}
	void setEndLine(string endLine) {
		this->endLine = endLine;
	}
	string getEndLine() {
		return this->endLine;
	}
	void setIsNumbered(bool isNumbered) {
		this->isNumbered = isNumbered;
	}
	bool getIsNumbered() {
		return this->isNumbered;
	}
	Command parseCommand(string);
	string removeSpace(string);

};
#endif // !Command_H

