#ifndef PRESINDETIALPARDONFORM_HPP
#define PRESINDETIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>
#include <string>

using std::string;

class PresidentialPardonForm : public AForm
{
	private:
		string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
		void	executeAction(const Bureaucrat& bureaucrat) const;
		~PresidentialPardonForm();
};
#endif