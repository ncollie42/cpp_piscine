/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:54:26 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/25 17:11:21 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <iostream>

span::span(void) : _limit(0), _curent(0), _ptr(nullptr)
{
	return;
}
span::span(int n) : _limit(n), _curent(0)
{
	_ptr = new int[n]();
	return;
}
span::~span(void)
{
	delete[] _ptr;
	return;
}

span::span(span const &src)
{
	*this = src;
}

span &span::operator=(span const &rhs)
{
	_limit = rhs._limit;
	_curent = rhs._curent;
	if (_ptr)
	{
		delete[] _ptr;
	}
	_ptr = new int[_limit];
	for (unsigned int n = 0; n < _limit; n++)
	{
		_ptr[n] = rhs._ptr[n];
	}
	return (*this);
}

void span::addNumber(int num)
{
	if (_curent == _limit)
	{
		throw span::FullException();
	}
	_ptr[_curent++] = num;
}

int span::shortestSpan(void) const
{
	if (_curent <= 1) {
		throw span::NotEnoughException();
	}
	std::vector<int> tmp;
	for (unsigned int idx = 0; idx < _curent; ++idx) {
		tmp.push_back(_ptr[idx]);
	}
	std::sort(tmp.begin(), tmp.end());
	int diff = std::numeric_limits<int>::max();
	for (unsigned int idx = 1; idx < tmp.size() - 1; ++idx) {
		diff = std::min(diff, tmp[idx] - tmp[idx - 1]);
	}
	return diff;
}
int span::longestSpan(void) const
{
	if (_curent <= 1) {
		throw span::NotEnoughException();
	}
	
	std::vector<int> tmp;
	for (unsigned int idx = 0; idx < _curent; ++idx) {
		tmp.push_back(_ptr[idx]);
	}
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[0];
	int max = tmp[_curent - 1];

	return (max - min);
}

const char* span::FullException::what() const throw()
{
	return "It's already full";
}
const char* span::NotEnoughException::what() const throw()
{
	return "Too few items to get span";
}