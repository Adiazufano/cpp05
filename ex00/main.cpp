/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:54:10 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/02/18 11:17:20 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	b("Alberto", 34);
			std::cout << b << std::endl;
			b.incrementGrade();
			std::cout << b << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;
			b.incrementGrade();
			std::cout << b << std::endl;
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
			std::cout << b << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;
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