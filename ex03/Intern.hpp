#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::endl;
using std::cout;

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);
		~Intern();
		AForm*	makeForm(string name, string target);
		AForm*	makeShrubberyCreationForm(string target);
		AForm*	makeRobotomyCreationForm(string target);
		AForm*	makePresidentialPardonForm(string target);

	class FormNotFoundException : public exception
	{
		const char* what() const throw()
		{
			return ("Exception: Form not found");
		}
	};
};
#endif