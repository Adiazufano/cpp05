/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:11:09 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 12:43:56 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(1)
{
	cout << "Bureaucrat default constructor" << endl;
}

Bureaucrat::Bureaucrat(string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	cout << "Bureaucrat constructor" << endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this -> grade = other.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat& other) : name(other.name), grade(other.grade)
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
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

ostream&	operator<<(ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() <<  ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}