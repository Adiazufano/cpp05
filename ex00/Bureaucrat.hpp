/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:57:03 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/18 11:24:51 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::exception;
using std::ostream;

class Bureaucrat
{
	private:
		const string	name;
		int				grade;

	public:
		Bureaucrat();
		Bureaucrat(string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);
		~Bureaucrat();
		string		getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
};

class GradeTooHighException : public exception
{
	public:
		const	char* what() const throw()
		{
			return ("Exception: Bureaucrat grade is too high");
		}
};

class GradeTooLowException : public exception
{
	public:
		const	char* what() const throw()
		{
			return ("Exception: Bureaucrat garde is too low");
		}
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &object);
#endif