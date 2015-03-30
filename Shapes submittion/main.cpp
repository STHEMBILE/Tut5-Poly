#include<iostream>
#include"Shapes.h"
const float PI = 3.14159;
using namespace std;


int main()
{
	circle c;
	Rectangle r;
	Triangle t;


	c.name();
	c.Draw();
	c.Area(PI, 4.3);
	c.Perimeter(PI, 4.3);




	r.name();
	r.Draw();
	r.Area(4.3,3.4);
	r.Perimeter(4.3, 3.4);

	t.name();
	t.Draw();
	t.Area(4.2,2.4);
	t.Perimeter(4.2, 2.4);

//	Shapes*circlept = &c;
	//Shapes*Trianglept = &t;
	//Shapes*Rectanglept = &r;

//	circlept->name();
	//circlept->Draw();
	//circlept->Area(PI, 4.1);
	//circlept->Perimeter(PI, 4.1);


	//Trianglept->name();
	//Trianglept->Draw();
	//Trianglept->Area(2.3, 3.2);
	//Trianglept->Perimeter(2.3, 3.2);


	//Rectanglept->name();
	//Rectanglept->Draw();
	//Rectanglept->Area(5.3, 3.2);
	//Rectanglept->Perimeter(5.3, 3.2);


		//Shapes*shape[3] = { circlept, Rectanglept, Trianglept };

		//shape[0]->name();
		//shape[0]->Draw();
		//shape[0]->Area(PI, 4.3);
		//shape[0]->Perimeter(PI, 4.3);

	//	shape[0]->name();
		//shape[0]->Draw();
		//shape[0]->Area(3.4, 4.3);
		//shape[0]->Perimeter(3.4, 4.3);


		//shape[0]->name();
		//shape[0]->Draw();
		//shape[0]->Area(3.4, 4.3);
	 //shape[0]->Perimeter(3.4, 4.3);

//*for (int i = 0; i < 3;  i++)
//		{
	//		cout << "This was printed using an Array"<<"NAMES"<< shape[i]->Area() << endl;

		//}
	





	
}
