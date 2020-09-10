/**/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using std::vector;
using std::iterator;
using std::cout;
using std::endl;
using std::string;

class Dog
{
public:
	Dog(){};
	Dog(int n);
	Dog(string n, string c, int a);
	~Dog();
	void action(string act);
	virtual void action(string act, string act1);
	int Volume()
	{
		return num*num;
	}
	bool compare(Dog dog)
	{
		return this->num < dog.num;
	};
	int numeral;
	Dog* get(){ return this; };
	int num_1;
	Dog& get_1(){
		return *this;
	}
	int num_3;
	Dog get_3()
	{
		return *this;
	}
private:
	string name;
	string color;
	int age;
	string actions;
	string actions1;
	int num;

};
Dog::Dog(int n)
{
	num = n;
}
Dog::Dog(string n, string c, int a)
{
	name = n;
	color = c;
	age = a;

	cout << name << " color is " << color << " . age is " << age << endl;
}
void Dog::action(string act)
{
	actions = act;
	cout << name << " will " << actions << endl;
}
void Dog::action(string act, string act1)
{
	actions = act;
	actions1 = act1;
	cout << name << " will " << actions << " and " << actions1 << endl;
}
Dog::~Dog()
{
	//cout << "end" << endl;
}
class Cat : public Dog
{
public:
	void numaction(int num, int num1) const;
	void action(string n, string act);
	int staticf();
	int nums_1 = 6;
	void accumulate();
private:
	string actions;
	string name;
	static int nums;
};
int Cat::nums = 6;
void Cat::numaction(int num, int num1) const
{
	cout << num + num1 << " is good." << endl;
}
void Cat::action(string n, string act)
{
	name = n;
	actions = act;
	cout << name << " will " << actions << endl;
}

int Cat::staticf()
{
	return nums - 2;
}
void Cat::accumulate()
{
	static int nums_1 = 1;
	int nums_0 = 1;
	nums_0 = nums_0 + 1;
	nums_1 = nums_1 + 1;
	cout << nums_0 << " ~" << endl;
	cout << nums_1 <<" !"<< endl;
}
int main()
{
	Dog jww("boy", "yellow", 24);
	jww.action("run");
	jww.action("run", "swim");
	const Cat sp1;
	sp1.numaction(66, 33);
	Dog *sp = new Cat;
	sp->action("girl", "play basketball");
	Cat sp2;
	vector<int> ivec;
	for (int i = 0; i < sp2.staticf() + 1; i++)
		ivec.push_back(i);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter)
	{
		cout << *iter << " @" << endl;
		iter++;
	}
	cout << sp2.nums_1 - 1 << "#" << endl;
	cout << sp2.staticf() + 1 << "!" << endl;
	cout << "-----" << endl;
	const int a = 2;
	int b = 6;
	int const *sa = &a;
	sa = &b;
	cout << *sa << endl;
	int *const sb = &b;
	*sb = a;
	cout << *sb << endl;

	Dog dog1(1);
	Dog dog2(2);
	if (dog1.compare(dog2))
		cout << "dog1 is young dog2." << endl;
	else
		cout << "dog1 is not young dog2." << endl;
	cout << "-------" << endl;
	Dog dog_;
	dog_.numeral = 1;
	if (&dog_ == dog_.get())
	{
		cout << "yes" << endl;
		cout << dog_.get() << endl;
		cout << &dog_ << endl;
	}
		

	else
		cout << "not" << endl;
	cout << "-------" << endl;
	Dog dog_2;
	dog_2.num_1 = 6;
	if (dog_2.num_1 == dog_2.get_1().num_1)
		cout << dog_2.num_1 << endl;
	else
		cout << "no" << endl;
	if (&dog_2 == &dog_2.get_1())
	{
		cout << "yes_1" << endl;
		cout << dog_2.get_1().num_1 << endl;
		cout << &dog_2.get_1() << endl;
	}
		

	else
		cout << "no_1" << endl;
	cout << "-------" << endl;
	Dog dog_3;
	dog_3.num_3 = 3;
	if (dog_3.num_3 == dog_3.get_3().num_3)
		cout << dog_3.num_3 << endl;
	else
		cout << "no" << endl;
	if (&dog_3 == &dog_3.get_3())
	{
		cout << "yes_3" << endl;
		cout << dog_3.get_3().num_3 << endl;
		cout << &dog_3.get_3() << endl;
	}


	else
	{
		cout << "no_3" << endl;
		cout << &dog_3 << endl;
		cout << &dog_3.get_3() << endl;
	}
	cout << "-------" << endl;
	Cat cat_1;
	for (int i = 1; i != 3; ++i)
		cat_1.accumulate();
	cout << "-------" << endl;
	enum Dog
	{
		i = 1, j, k
	};
	cout << k << endl;

	system("pause");
	return 0;
}