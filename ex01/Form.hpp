/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:39:09 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:23:09 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

using std::string;
using std::exception;
using std::endl;
using std::ostream;
using std::cout;

class Bureaucrat;

class Form
{
	private:
		bool				isSigned;
		const string		name;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		Form(string name, int signGrade, int execGrade);
		Form(Form& other);
		Form&	operator=(Form& other);
		~Form();
		string		getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool		getIsSigned() const;
		void		beSigned(Bureaucrat& bureaucrat);

	class	GradeTooHighException : public exception
	{
		public:
			const	char* what() const throw()
			{
				return("Exception: Grade to high");
			}
	};

	class	GradeTooLowException : public exception
	{
		public:
			const	char* what() const throw()
			{
				return("Exception: Grade to low");
			}
	};
};
std::ostream	&operator<<(std::ostream &os, const Form &object);
#endif