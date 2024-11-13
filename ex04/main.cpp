/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:26:15 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/08 18:49:36 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool copyFile(const std::string& sourceFile, std::string& content);
int replace(std::string& content, const std::string& oldWord, const std::string& newWord);

int main(int argc, char **argv)
{
	if (argc != 4)
	{
	    std::cerr << "Wrong arguments\n";
	    return 1;
	}
	std::string source = argv[1];
	std::string destination = source + ".replace";
	std::string content;
	if (!copyFile(source, content))
	{
	    std::cerr << "Error copying file content\n";
	    return 1;
	}
	std::string oldWord = argv[2];
	std::string newWord = argv[3];
	replace(content, oldWord, newWord);
	std::ofstream out(destination);
	if (!out)
	{
	    std::cerr << "Error opening file for writing: " << destination << std::endl;
	    return 1;
	}
	out << content;
	out.close();
	return 0;
}


bool copyFile(const std::string& sourceFile, std::string& content)
{
    std::ifstream source(sourceFile);
    if (!source.is_open())
    {
        std::cerr << "Error opening source file\n";
        return false;
    }

    content.assign((std::istreambuf_iterator<char>(source)),
                   std::istreambuf_iterator<char>());
    return true;
}

int replace(std::string& content, const std::string& oldWord, const std::string& newWord)
{
    size_t pos = 0;
    size_t oldLen = oldWord.length();
    std::string result;

    while (pos < content.size())
    {
        size_t foundPos = content.find(oldWord, pos);
        if (foundPos != std::string::npos)
        {
            result.append(content, pos, foundPos - pos);
            result.append(newWord);
            pos = foundPos + oldLen;
        }
        else
        {
            result.append(content, pos, content.size() - pos);
            break;
        }
    }

    content = result;
    return 0;
}