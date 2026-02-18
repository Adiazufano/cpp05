/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:57:03 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/18 11:23:38 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;
using std::ostream;

class AForm;

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
		void		signAForm(AForm& AForm);
		void		executeForm(const AForm& AForm) const;

		class GradeTooHighException : public exception
		{
			public:
				const	char* what() const throw()
				{
					return ("Exception: Bureaucrat grade is to high");
				}
		};
		
		class GradeTooLowException : public exception
		{
			public:
				const	char* what() const throw()
				{
					return ("Exception: Bureaucrat grade is to low");
				}
		};
};


std::ostream	&operator<<(std::ostream &os, const Bureaucrat &object);
#endif