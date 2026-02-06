/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:39:09 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:23:09 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

using std::string;
using std::exception;
using std::endl;
using std::ostream;
using std::cout;

class Bureaucrat;

class AForm
{
	private:
		bool				isSigned;
		const string		name;
		const int			signGrade;
		const int			execGrade;
	public:
		AForm();
		AForm(string name, int signGrade, int execGrade);
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);
		virtual	~AForm();
		string				getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getIsSigned() const;
		void				beSigned(Bureaucrat& bureaucrat);
		void				execute(const Bureaucrat& executor) const;//FUNCION QUE COMPRUEBA SI EL BUROCRATA PUEDE EJECUTAR FORM
		virtual void		executeAction(const Bureaucrat& executor) const = 0;//FUNCION QUE EJECUTA FORM SI EL BUROCRATA PUEDE

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

	class	FormNotSignedException : public exception
	{
		public:
			const	char* what() const throw()
			{
				return("Exception: Form is not signed");
			}
	};
};
std::ostream	&operator<<(std::ostream &os, const AForm &object);
#endif