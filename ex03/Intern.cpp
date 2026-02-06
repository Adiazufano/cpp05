#include "Intern.hpp"

Intern::Intern()
{
	cout << "Inetrn default constructor" << endl;
}

Intern::Intern(const Intern& other)
{
	(void)other;
	cout << "Intern copy constructor" << endl;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	cout << "Intern destructor" << endl;
}

AForm* Intern::makeShrubberyCreationForm(string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyCreationForm(string target)
{
	return new RobotomyCreationForm(target);
}

AForm* Intern::makePresidentialPardonForm(string target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(string name, string target)
{
	string names[3] = {"shrubbery creation", "robotomy request", "presidential creation"};
	AForm* (Intern::*methods[3])(string);

	methods[0] = &Intern::makeShrubberyCreationForm;
	methods[1] = &Intern::makeRobotomyCreationForm;
	methods[2] = &Intern::makePresidentialPardonForm;

	for (int index; index < 3; index++)
		if (name == names[index])
			return (this ->*methods[index])(target);
	throw Intern::FormNotFoundException();
}
