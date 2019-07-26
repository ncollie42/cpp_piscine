/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:03:10 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/25 09:34:10 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
#define easyfind_HPP
#include <algorithm>

template <typename T>
bool easyfind(T container, int i)
{
    if (*std::find(container.begin(), container.end(), i) == i)
        return true;
    return false;
}

#endif