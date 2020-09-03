/*
First tutorial
author: Alfonso Gastélum Strozzi
*/
#include <iostream>
#include <string>
#include <sstream>

//constant values
const float curve_value = 1.3;
const char newline = '\n';

#define PI 3.14159265358979323846

//declaration of a function
int main()
{
	//declaring variables:
	int grade_fp, grade_sp, grade_tp;
	float grade_total;
	float circ_radius;
	//float curve_value{ 1.2 };
	int id_students[]{ 1,2,3,4,5,6 };

	//strings
	std::string name{ "Alfonso" };
	std::string lastname1{ "Gastélum" };
	std::string lastname2{ "Strozzi" };
	std::string fullname;
	std::string s3(name);
	std::string s4(lastname1,3, 3);
	std::string s5("Gastélum", 4);
	std::string s6(10, 'g');
	std::string s7(5, 43);

	//modern type deductions
	auto curve_value_low = curve_value;
	//decltype(curve_value) curve_value_high;
	curve_value_low = 1.90;

	std::cout << "Final grade " <<std::endl << "calculator" <<std::endl;

	// give grades
	grade_fp = 90;
	grade_sp = 80;
	grade_tp = 60;
	
	//get name
	std::cout << "Enter name:";
	std::cin >> name;

	//get total
	grade_total = ((grade_fp + grade_sp + grade_tp)/3.0f)*curve_value;

	//name
	fullname = name + " " + lastname1 + " " + lastname2;
	std::cout << fullname.at(4) << newline;
	std::cout << fullname.substr(2,4) << std::endl;

	//output
	std::cout <<fullname << " final grade: " << grade_total;

	//circle area
	std::cout << "Enter circle radius:";
	std::cin >> circ_radius;

	std::cout << "circle area" << 2 * PI * circ_radius;
	std::cout << "circle area" << 2 * PI * 0.12f;
	std::cout << "circle area" << 2 * PI * 0.122f;
	std::cout << "circle area" << 2 * PI * 120.12f;

	std::string mystr("4567.787");
	int myint;
	std::stringstream(mystr) >> myint;

	int limit_value_up = 10;
	int limit_value_low = 5;
	int var_value = 11;

	if ((limit_value_low < var_value) && (limit_value_up > var_value))
	{
		std::cout << var_value;
		std::cout << var_value;
	}
	else
	{
		std::cout << var_value + 1;
	}
//if dos
	if ((limit_value_low < var_value) && (limit_value_up > var_value))
	{
		std::cout << var_value;
		std::cout << var_value;
	}
	else if((limit_value_low > var_value) && (limit_value_up > var_value))
	{
		std::cout << var_value + 2;
	}
	else
	{
		std::cout << "nada funciono";
	}

	int count = 10;

	while (count > 0) 
	{
		std::cout << count << ", ";
		--count;
	}

	std::string str;
	do 
	{
		std::cout << "Enter text: ";
		std::getline(std::cin, str);
		std::cout << "You writed: " << str << std::endl;
	} while (str != "cielo");

	for (int count = 20; count > 0; count = count - 2) {
		std::cout << (count ^ 2) << std::endl;
	}
	for (int count_1 = 0, count_2 = 100; count_1 != count_2; ++count_1, --count_2) 
	{
		std::cout << count_1 << " " << count_2;
	}

	std::string str{ "U Panamericana" };
	for (char c : str) 
	{
		std::cout << "(" << c << ")";
	}
	std::cout << std::endl;

	for (auto c : str)
	{
		std::cout << "(" << c << ")";
	}
	std::cout << std::endl;

	for (int i=10; i>0; i--)
	{
		if(i==4)
		{
			continue;
		}
		std::cout << i << ",";
	}
	std::cout << std::endl;
	for (int i = 10; i > 0; i--)
	{
		if (i == 4)
		{
			std::cout << "aborted";
			break;
		}
		std::cout << i << ",";
	}
	std::cout << std::endl;

	int n = 10;
mylabel:
	std::cout << n << ",";
	n--;
	if (n > 0) goto mylabel;
	std::cout << "done " << std::endl;

	//terminate the program:
	return 0;
}
