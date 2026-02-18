/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:57:03 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/18 11:20:55 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;
using std::ostream;

class Form;

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
		void		signForm(Form& form);

		class GradeTooHighException : public exception
		{
			public:
				const	char* what() const throw()
				{
					return ("Exception: Bureaucrat of too high a level");
				}
		};
		
		class GradeTooLowException : public exception
		{
			public:
				const	char* what() const throw()
				{
					return ("Exception: Bureaucrat of too low a level");
				}
		};
};


std::ostream	&operator<<(std::ostream &os, const Bureaucrat &object);
#endif