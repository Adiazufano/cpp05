/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:18:43 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:24:40 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :  isSigned(false), name("deafult"), signGrade(150), execGrade(150)
{
	cout << "AForm: default constructor" << endl;
}

AForm::AForm(string name, int execGrade, int signGrade) : isSigned(false), name(name), signGrade(execGrade), execGrade(signGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	cout << "AForm: constructor" << endl;
}

AForm::AForm(const AForm& other) : isSigned(other.isSigned), name(other.name), signGrade(other.signGrade), execGrade(other.execGrade)
{
		cout << "AForm: copy constructor" << endl;
}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
		this -> isSigned = other.isSigned;
	return (*this);
}

AForm::~AForm()
{
	cout << "AForm: destructor" << endl;
}

string	AForm::getName() const
{
	return(name);
}

int	AForm::getSignGrade() const
{
	return(signGrade);
}

int	AForm::getExecGrade() const
{
	return(execGrade);
}

bool	AForm::getIsSigned() const
{
	return(isSigned);
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() >= signGrade)
		throw AForm::GradeTooLowException();
	isSigned = true;
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	executeAction(executor);
}

ostream&	operator<<(ostream& os, const AForm& AForm)
{
	os << "AForm: " << AForm.getName() << " AForm exec grade: " << AForm.getExecGrade() << " AForm sign grade: " << AForm.getSignGrade() << " AForm is signed: " << AForm.getIsSigned() << endl;
	return (os);
}