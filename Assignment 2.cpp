#include <iostream>
#include <string>



class handleBill {
public:
	int getHours(int month){
		int hours = 0;
		switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				hours = 744;
				break;
			case 2:
				hours = 672;
			case 4:
			case 6:
			case 9:
			case 11:
				hours = 720;
				break;
			default:
				break;
		}
		return hours;
	}

	int getCost(int package, int hours){
		int cost = 0;
		switch(package){
			case 1:

			case 2:
			case 3:
		}
		return cost;
	}


	

};




int main() {

	int package = 0, month = 0;

	handleBill hb;

	std::cout << hb.getCost(package, hb.getHours(month));

}


// fucntions of "using namespace std;" -> cout, cin, endl, string