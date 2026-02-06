/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:11:09 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:05:03 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150)
{
	cout << "Bureaucrat: default constructor" << endl;
}

Bureaucrat::Bureaucrat(string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	cout << "Bureaucrat: constructor" << endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this -> grade = other.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	cout << "Bureaucrat copy constructor" << endl;
}

Bureaucrat::~Bureaucrat()
{
	cout << "Bureaucrat destructcor" << endl;
}

string	Bureaucrat::getName() const
{
	return(name);
}

int	Bureaucrat::getGrade() const
{
	return(grade);
}

void	Bureaucrat::incrementGrade()
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	grade++;
}

void	Bureaucrat::signAForm(AForm& AForm)
{
	try
	{
		if (AForm.getIsSigned())
		{
			cout << getName() << " alredy signed " << AForm.getName() << endl;
			return ;
		}
		AForm.beSigned(*this);
		cout << getName() << " signed " << AForm.getName() << endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " can't signed " << AForm.getName() << " because "  << e.what() << endl;
	}
	
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const exception& e)
	{
		std::cerr << e.what() << endl;
	}
	
}
ostream&	operator<<(ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() <<  ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}