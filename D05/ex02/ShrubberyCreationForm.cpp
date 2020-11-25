/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:16 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:16 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
        AForm("ShrubberyCreationForm", 145, 137), _target("target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
        AForm("ShrubberyCreationForm", 145, 137), _target(src._target)
{
    *this = src;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureacrat const & executor) const
{
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    else if (getSign() == false)
        throw FormNotSignedException();
    else {
        std::stringstream names;
        std::string filename;
        names << _target << "_shrubbery";
        filename = names.str();
        std::ofstream tree(filename);
        tree << "             _{\\ _{\\{\\/}/}/}__\n";
        tree << "            {/{/\\}{/{/\\}(\\}{/\\} _\n";
        tree << "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
        tree << "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
        tree << "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
        tree << "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
        tree << "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
        tree << "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
        tree << "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
        tree << "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
        tree << "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
        tree << "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
        tree << "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
        tree << "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
        tree << "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
        tree << "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
        tree << "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n";
        tree << "             {){/ {\\/}{\\/} \\}\\}\n";
        tree << "             (_)  \\.-'.-/\n";
        tree << "          __...--- |'-.-'| --...__\n";
        tree << "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n";
        tree << "-\"    ' .  . '    |.'-._| '  . .  '   \"_-\n";
        tree << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
        tree << "          ' ..     |'-_.-|\n";
        tree << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
        tree << "              .'   |'- .-|   '.\n";
        tree << "  ..-'   ' .  '.   `-._.-´   .'  '  - .\n";
        tree << "   .-' '        '-._______.-'     '  .\n";
        tree << "       .      ~,       .      ~,       .\n";
        tree << "          _________________________\n";
        tree << "        /                           \\\n";
        tree << "       |  Offial ShrubberyCreation,  |\n";
        tree << "       |      a damm ASCII tree      |\n";
        tree << "        \\ _________________________ /";
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
