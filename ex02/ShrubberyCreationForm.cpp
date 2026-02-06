#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("none")
{
	cout << "ShrubberyCreationForm default constructor" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	cout << "ShrubberyCreationForm constructor" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	cout << "ShrubberyCreationForm copy constructor" << endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this -> target = other.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::executeAction(const Bureaucrat& executor) const
{
	(void)executor;
	string filename = target + "_shrubbery";
	ofstream File(filename.c_str());
	File << "  ^ " << endl;
	File << " ^^^" << endl;
	File << "^^^^^" << endl;
	File << " | | " << endl;
	File.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << "ShrubberyCreationForm destrutor" << endl;
}
