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

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	hermes("Hermes Conrad", 34);
			std::cout << hermes << std::endl;
			Form	form("WowForm", 35, 100);
			std::cout << form << std::endl;
			hermes.signForm(form);
			std::cout << form << std::endl;
			hermes.signForm(form);
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
			Bureaucrat	hermes("Hermes Conrad", 34);
			std::cout << hermes << std::endl;
			hermes.decrementGrade();
			hermes.decrementGrade();
			hermes.decrementGrade();
			Form	form("WowForm", 35, 100);
			std::cout << form << std::endl;
			hermes.signForm(form);
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
			Bureaucrat	hermes;
			std::cout << hermes << std::endl;
			Form	form;
			std::cout << form << std::endl;
			hermes.signForm(form);
			std::cout << form << std::endl;
			hermes.decrementGrade();
			std::cout << hermes << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}