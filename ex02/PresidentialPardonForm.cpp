#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), target("none")
{
	cout << "PresidentialPardonForm default constructor" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("PresidentialPardonForm", 145, 137), target(target)
{
	cout << "PresidentialPardonForm constructor" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
	cout << "PresidentialPardonForm copy constructor" << endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this -> target = other.target;
	}
	return (*this);
}

void	PresidentialPardonForm::executeAction(const Bureaucrat& executor) const
{
	(void)executor;
	cout << target << " has been insulted by Zaphod Beeblebrox" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "PresidentialPardonForm destrutor" << endl;
}
