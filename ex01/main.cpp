/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:54:10 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/05 12:28:34 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	hermes("Hermes Conrad", 34);
			std::cout << hermes << std::endl;
			hermes.incrementGrade();
			std::cout << hermes << std::endl;
			hermes.decrementGrade();
			std::cout << hermes << std::endl;
			hermes.incrementGrade();
			std::cout << hermes << std::endl;
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
			std::cout << hermes << std::endl;
			hermes.decrementGrade();
			std::cout << hermes << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	god("God", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat	looser("Looser", 250);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat	unnamed;
			std::cout << unnamed << std::endl;
			unnamed.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}