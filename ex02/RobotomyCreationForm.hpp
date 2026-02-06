#ifndef ROBOTOMYCREATIONFORM_HPP
#define ROBOTOMYCREATIONFORM_HPP
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::rand;

class RobotomyCreationForm : public AForm
{
	private:
		string target;
	public:
		RobotomyCreationForm();
		RobotomyCreationForm(string target);
		RobotomyCreationForm(const RobotomyCreationForm& other);
		RobotomyCreationForm&	operator=(const RobotomyCreationForm& other);
		void	executeAction(const Bureaucrat& executor) const;
		~RobotomyCreationForm();
};
#endif
