/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:03:10 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/25 09:34:10 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>

template <typename T>
class Array
{
public:
	Array(void) : _size(0), _arr(nullptr) {}
	Array(unsigned int size) : _size(size){
		_arr = new T[size]();
	}
	~Array(void) { delete [] _arr;}
	Array(Array const &src){ *this = src;}
	Array &operator=(Array const &rhs) {
		_size = rhs._size;
		if (_arr )
		{
			delete [] _arr;
		}
		_arr = new T[_size];
		for (unsigned int n = 0; n < _size ; n++)
		{
			_arr[n] = rhs._arr[n];
		}
		return *this;
	}
	T& operator[](unsigned int index)
	{
		if (index >= _size) {
			throw Array::IndexException();
		}
		return _arr[index];
	}
	struct IndexException : public std::exception {
		const char* what() const throw()
		{
			return "Index Out Of Bounds";
		}
	};
	unsigned int size( void ) const {return _size;}
	//Add your public methods below here
private:
	//Add your private methods
	unsigned int _size;
	T *_arr;
	//Add your private attributes below here
};

#endif

