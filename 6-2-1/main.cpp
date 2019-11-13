#include<iostream>
#include "shapes.h"

using namespace std;

int main(void) {
	char menu;
	double a,b,c,d;
	double c_A,c_P,r_A,r_P;
	while (1) {
		cout << "Shape?" << endl;
		cin >> menu;
		if (menu == 'C') {
			cin >> a >> b >> c;
			Circle C;
			C.x = a; C.y = b; C.r = c;
			c_A = C.cal_C_Area(C.r); c_P = C.cal_C_Perimeter(C.r);
			cout << "Area: " << c_A << ", Perimeter: ";
			cout << c_P << endl;
		}
		else if (menu == 'R') {
			cin >> a >> b >> c >> d;
			Rectangle R;
			R.x1 = a; R.y1 = b; R.x2 = c; R.y2 = d;
			r_A = R.cal_R_Area(R.x1,R.y1,R.x2,R.y2);
			r_P = R.cal_R_Perimeter(R.x1,R.y1,R.x2,R.y2);
			cout << "Area: " << r_A  << ", Perimeter: ";
			cout << r_P << endl;
		}
		else if (menu == 'Q') {break;}
		
		else { cout << "Wrong Input! Re-execute!" << endl; break;}
		
		cin.ignore();
	
	}
	return 0;
}

