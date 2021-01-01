#include "Lib.h"
#include "AutoPark.h"
int main() {
	//Bus bus1;
	cout << "HELLO WORLD" << endl;
	AutoPark autopark1;
	autopark1.buyBus(Bus(31,"Kopcheniy Ivan Olegovich",1));
	autopark1.buyBus(Bus(32,"Kopcheniy Boris Borisovich",2));
	autopark1.buyBus(Bus(33,"Kopcheniy Boris Borisovich",3));
	autopark1.buyBus(Bus(34,"Kopcheniy Boris Borisovich",4));
	autopark1.print();
	autopark1.sellBus(1);
	autopark1.toRace(Bus(32, "Kopcheniy Boris Borisovich", 2));
	autopark1.print();
	cout << "Bus" << endl;
	/*Bus bus(34, "Kopcheniy Boris Borisovich", 4);
	Bus bus2(34, "Kopcheniy Boris Borisovich", 4);
	cout<<boolalpha<<(bus != bus2)<<endl;*/
	return 0;
}