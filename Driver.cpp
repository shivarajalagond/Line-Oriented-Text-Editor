#include<iostream>
#include<string>
#include<algorithm>
#include"Command.h"
#include "Led.h"

using namespace std;

int  main(int argc, char*argv[]) {

	string fileName;
	switch (argc)
	{
	case 1:
		break;
	case 2: fileName = argv[1];
		break;
	default:
		cout << "To many arguments -all discarded";
		break;
	}
	Led Ledobject(fileName);
	Ledobject.run();
	return 0;
}