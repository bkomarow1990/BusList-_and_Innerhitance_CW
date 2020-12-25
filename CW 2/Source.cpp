#include "Lib.h"
#include "Programmer.h"
#include "Head.h"
#include "TeamLead.h"
int main() {
	Programmer vadim("Vadim", 29);
	vadim.addSkill("ss");
	Head alex("Alex", 24, 2);
	alex.print();
	TeamLead tl("Hid",22,5,"Python",10);
	tl.print();
	return 0;
}