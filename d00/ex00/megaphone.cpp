/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:23:00 by kmashao           #+#    #+#             */
/*   Updated: 2019/06/04 16:23:02 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv){
  

  if (argc > 1){
    for (int i = 1; i < argc; ++i)
    { 
        for(int j = 0; argv[i][j]; j++)
        {
            argv[i][j] = toupper(argv[i][j]);
            std::cout<<argv[i][j];
        }
    } 
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
std::cout<<std::endl;
return 0; 
} 
