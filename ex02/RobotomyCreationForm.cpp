#include "RobotomyCreationForm.hpp"

RobotomyCreationForm::RobotomyCreationForm() : AForm("RobotomyCreationForm", 145, 137), target("none")
{
	cout << "RobotomyCreationForm default constructor" << endl;
}

RobotomyCreationForm::RobotomyCreationForm(string target) : AForm("RobotomyCreationForm", 145, 137), target(target)
{
	cout << "RobotomyCreationForm constructor" << endl;
}

RobotomyCreationForm::RobotomyCreationForm(const RobotomyCreationForm& other) : AForm(other)
{
	cout << "RobotomyCreationForm copy constructor" << endl;
}

RobotomyCreationForm&	RobotomyCreationForm::operator=(const RobotomyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this -> target = other.target;
	}
	return (*this);
}

void	RobotomyCreationForm::executeAction(const Bureaucrat& executor) const
{
	(void)executor;
	cout << "BRRRRRRRRRRRRRRRRRRRRRRRRR" << endl;
	
	/*SE UTILIZA RAND PARA SACAR UN NUMERO ALEATORIO DEL 0 a 99 PERO SIN srand(time(NULL)) no funciona.
	para que no mire siempre en la misma pagian miro la hora que es y le digo que mire en la pagina de la hora actual */
	if (rand() % 100 < 50)
		cout << target << " has been robotomized successfully!" << endl;
	else
		cout << "the robotomy on " << target << " failed !" << endl;
} 

RobotomyCreationForm::~RobotomyCreationForm()
{
	cout << "RobotomyCreationForm destrutor" << endl;
}
