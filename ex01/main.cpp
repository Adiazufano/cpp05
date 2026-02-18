/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:54:10 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/18 11:17:54 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	b("Alberto", 34);
			std::cout << b << std::endl;
			Form	form("WowForm", 35, 100);
			std::cout << form << std::endl;
			b.signForm(form);
			std::cout << form << std::endl;
			b.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	b("Carlos", 34);
			std::cout << b << std::endl;
			b.decrementGrade();
			b.decrementGrade();
			b.decrementGrade();
			Form	form("WowForm", 35, 100);
			std::cout << form << std::endl;
			b.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	b;
			std::cout << b << std::endl;
			Form	form;
			std::cout << form << std::endl;
			b.signForm(form);
			std::cout << form << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}