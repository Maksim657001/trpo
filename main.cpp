#include <iostream>
#include "point.h"


using namespace std;

int main(){
	
	setlocale (LC_All, "Russia");
	try{
		cout << "Введите кординаты точки" << endl;
		point p = get_point();
		print(p);
	}
	catch (domain_error e){
		cout << e.what() << endl;
	}
	system ("pause");
	return 0;
}