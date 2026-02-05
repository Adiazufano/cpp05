/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:18:43 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:24:40 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :  isSigned(false), name("deafult"), signGrade(150), execGrade(150)
{
	cout << "Form: default constructor" << endl;
}

Form::Form(string name, int execGrade, int signGrade) : isSigned(false), name(name), signGrade(execGrade), execGrade(signGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	cout << "Form: constructor" << endl;
}

Form::Form(Form& other) : isSigned(other.isSigned), name(other.name), signGrade(other.signGrade), execGrade(other.execGrade)
{
		cout << "Form: copy constructor" << endl;
}

Form&	Form::operator=(Form& other)
{
	if (this != &other)
		this -> isSigned = other.isSigned;
	return (*this);
}

Form::~Form()
{
	cout << "Form: destructor" << endl;
}

string	Form::getName() const
{
	return(name);
}

int	Form::getSignGrade() const
{
	return(signGrade);
}

int	Form::getExecGrade() const
{
	return(execGrade);
}

bool	Form::getIsSigned() const
{
	return(isSigned);
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() >= signGrade)
		throw Form::GradeTooLowException();
	isSigned = true;
}

ostream&	operator<<(ostream& os, const Form& form)
{
	os << "Form: " << form.getName() << " Form exec grade: " << form.getExecGrade() << " Form sign grade: " << form.getSignGrade() << " Form is signed: " << form.getIsSigned() << endl;
	return (os);
}