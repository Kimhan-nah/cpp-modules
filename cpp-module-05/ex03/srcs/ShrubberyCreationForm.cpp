/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:22:36 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 02:18:07 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery Creation Form", 145, 137), target_("default") {} 

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
	: Form("Shrubbery Creation Form", 145, 137), target_(target) {} 

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: Form(copy), target_(copy.target_) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this != &ref)
	{
		target_ = ref.target_;
		this->Form::operator=(ref);		// ?? const멤버변수들도 처리 해야되는지? set함수로?
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::string tree =  "            .        +          .      .          .\n"
						"                         ._..,\n"
						"              /\n"
						"      ;-._,-.____        ,-----.__\n"
						" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
						"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
						"                      ,    `./  \\:. `.   )==-'  .\n"
						"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
						".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
						"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
						"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
						"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
						"              \\:  `  X` _| _,\\/'   .-'\n"
						".               \":._:`\\____  /:'  /      .           .\n"
						"                    \\::.  :\\/:'  /              +\n"
						"   .                 `.:.  /:'  }      .\n"
						"           .           ):_(:;   \\           .\n"
						"                      /:. _/ ,  |\n"
						"                   . (|::.     ,`                  .\n"
						"     .                |::.    {\n"
						"                      |::.\\  \\ `.\n"
						"                      |:::(\\    |\n"
						"              O       |:::/{ }  |                  (o\n"
						"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
						"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
						"dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";

	executable(executor);
	std::ofstream outfile;

	// 음... 이게 뭘까...
	outfile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	try {
		outfile.open(target_ + "_shrubbery");
	} catch (const std::ofstream::failure &e) {
		std::cout << e.what() << std::endl;
	}
	outfile << tree;
	outfile.close();
}