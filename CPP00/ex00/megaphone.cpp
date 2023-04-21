/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:55:54 by egoncalv          #+#    #+#             */
/*   Updated: 2023/04/21 18:05:05 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int arg = 1; arg < argc; arg++)
		{
			for (size_t i = 0; i < std::strlen(argv[arg]); i++)
				std::cout << static_cast<char>(std::toupper(argv[arg][i]));
		}
	}
	std::cout << std::endl;
	return (1);
}
