#include <iostream>
#include <string>

using namespace std;

class Color
{
private:
	string name;
public:
	Color(string name) : name(name){}
	
	string getColor()
	{
		return name;
	}
	
	friend ostream& operator<< (ostream &out, Color color);
};

ostream& operator<< (ostream &out, Color color)
{
	out << color.getColor() << endl;
	
	return out;
}


class Red : public Color
{
public:
	Red() : Color("Red") {}
};

class Green : public Color
{
public:
	Green() : Color("Green") {}
};

class Blue : public Color
{
public:
	Blue() : Color("Blue") {}
};

class Black : public Color
{
public:
	Black() : Color("Black") {}
};


class Object
{
private:
	string data;
	Color color;
public:
	Object(string data, Color color) : data(data), color(color) {}
	string getData()
	{
		return data;
	}
	friend ostream& operator<< (ostream &out, Object object);
};

ostream& operator<< (ostream &out, Object object)
{
	out << object.getData() << " with color " << object.color;
}


class Cup : public Object
{
public:
	Cup(Color color) : Object("Cup", color) {}
};

class Circle : public Object
{
public:
	Circle(Color color) : Object("Circle", color) {}
};

class Cat : public Object
{
public:
	Cat(Color color) : Object("Cat", color) {}
};

class Dog : public Object
{
public:
	Dog(Color color) : Object("Dog", color) {}
};



int main()
{
	cout << Dog(Red());
	
	
	return 0;
}
