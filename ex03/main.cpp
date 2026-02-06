/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:54:10 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 18:09:42 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int	main()
{
	{
		try
		{
			Bureaucrat	hermes("Hermes Conrad", 150);
			std::cout << hermes << std::endl;
			ShrubberyCreationForm form("test_1");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		cout << endl << "-------TEST 2------" << endl;
		try
		{
			Bureaucrat	hermes("Alberto", 133);
			std::cout << hermes << std::endl;
			ShrubberyCreationForm form("test_2");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	cout << endl << "-------TEST 3------" << endl;
	{
		try
		{
			Bureaucrat	hermes("Carlos", 150);
			std::cout << hermes << std::endl;
			RobotomyCreationForm form("test_3");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		cout << endl << "-------TEST 4------" << endl;
		try
		{
			srand(time(NULL));
			Bureaucrat	hermes("Carlos", 30);
			std::cout << hermes << std::endl;
			RobotomyCreationForm form("test_4");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		cout << endl << "-------TEST 5------" << endl;
	{
		try
		{
			Bureaucrat	hermes("Juan", 150);
			std::cout << hermes << std::endl;
			PresidentialPardonForm form("test_5");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		cout << endl << "-------TEST 6------" << endl;
		try
		{
			srand(time(NULL));
			Bureaucrat	hermes("Juan", 10);
			std::cout << hermes << std::endl;
			PresidentialPardonForm form("test_6");
			std::cout << form << std::endl;
			hermes.signAForm(form);
			hermes.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		cout << endl << "-------INTERN TEST 1------" << endl;
		try
		{
			Intern intern;
			AForm *form;
			Bureaucrat	hermes("Paco", 10);
			std::cout << hermes << std::endl;
			form = intern.makeForm("hola", "test_1");
			std::cout << *form << std::endl;
			hermes.signAForm(*form);
			hermes.executeForm(*form);
			if (form)
				delete(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		cout << endl << "-------INTERN TEST 2------" << endl;
		try
		{
			Intern intern;
			AForm *form;
			Bureaucrat	hermes("Maya", 150);
			std::cout << hermes << std::endl;
			form = intern.makeForm("shrubbery creation", "test_2");
			std::cout << *form << std::endl;
			hermes.signAForm(*form);
			hermes.executeForm(*form);
			if (form)
				delete(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}