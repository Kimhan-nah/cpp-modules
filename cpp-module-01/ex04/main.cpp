/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:54:35 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/26 10:08:01 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	openFile(std::ifstream &infile, std::ofstream &outfile, std::string filename)
{
	infile.open(filename);						// open infile
	if (!infile.is_open())
	{
		std::cerr << "Error: File not opened\n";
		exit(EXIT_FAILURE);
	}

	std::string		outfileName = filename;		// open outfile
	outfileName.append(".replace");
	outfile.open(outfileName);
	if (!outfile.is_open())
	{
		std::cerr << "Error: File not opened\n";
		infile.close();
		exit(EXIT_FAILURE);
	}
}

void	writeFile(std::ifstream &infile, std::ofstream &outfile, std::string target, std::string replace)
{
	std::string	str;
	size_t		index;

	while (!infile.eof())
	{
		std::getline(infile, str);
		index = 0;
		while (index < str.length() && !target.empty())
		{
			index = str.find(target, index);
			if (index != std::string::npos)
			{
				str.erase(index, target.length());
				str.insert(index, replace);
				index = index + replace.length();
			}
			else
				break ;
		}
		outfile << str;
		if (!infile.eof())
			outfile << "\n";
	}
}

int main(int argc, char **argv)
{
	std::string		target;
	std::string		replace;
	std::string		filename;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		std::cerr << "Error: Arguments\n";
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	target = argv[2];
	replace = argv[3];

	openFile(infile, outfile, filename);
	writeFile(infile, outfile, target, replace);

	infile.close();
	outfile.close();

	return (0);
}