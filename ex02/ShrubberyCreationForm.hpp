#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ofstream;

class ShrubberyCreationForm : public AForm
{
	private:
		string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		void	executeAction(const Bureaucrat& executor) const;
		~ShrubberyCreationForm();
};
#endif