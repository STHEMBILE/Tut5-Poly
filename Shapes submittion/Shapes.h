
#include<iostream>
#include<math.h>
using namespace std;
#ifndef SHAPES_H
#define SHAPES_H


class Shapes
{
public:
	virtual void name() = 0;
	virtual void Draw() = 0;
	virtual void Area(float, float) = 0;
	virtual void Perimeter(float, float) = 0;


private:

};


class circle : public Shapes
{
public:

	virtual void name()
	{
		cout << "iam a Circle" << endl;
	}

	virtual void Draw()
	{
		cout << "this is my drawing " << endl;
	}

	virtual void Area(float PI, float r)
	{
		cout << "The area of this circle is " << PI*r*r << endl;
	}


	virtual void Perimeter(float PI, float r)
	{
		cout << "the perimeter of this circle is" << 2 * PI*r << endl;
		cout << "---------------------------------------------------------------------------------" << endl;

	}
	

private:

};

class Rectangle :public Shapes
{
public:

	virtual void name()
	{
		cout << "iam a Rectangle" << endl;
	}

	virtual void Draw()
	{
		cout << "This is my Drawing" << endl;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << " * ";
			} cout << endl;
		}
	}


	virtual void Area(float b, float w)
	{
		cout << "the area of this rectangle is" << b*w << endl;
	}

	virtual void Perimeter(float b, float w)
	{
		cout << "the perimeter of this retangle is" << 2 * b + 2 * w << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
	}

};

class Triangle : public Shapes

{
public:

	virtual void name()
	{
		cout << "Iam a Triangle" << endl;
	}

	virtual void Draw()
	{
		cout << "ths is my drawing " << endl;


		int length = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < length; j++)
			{
				cout << "*";
			} cout << endl;
			length = length + 1;
		}
	}

	virtual void Area(float b, float h)
	{
		cout << "the area of this triangle is" << 0.5*b*h << endl;
	}

	virtual void Perimeter(float b, float h)
	{
		cout << "the perimeter of this Triangle is" << 2 * b + 2 * h << endl;
		cout << "---------------------------------------------------------------------------------" << endl;


	}
private:

};
#endif;