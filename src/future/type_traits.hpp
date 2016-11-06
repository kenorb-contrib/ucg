/*
 * Copyright 2016 Gary R. Van Sickle (grvs@users.sourceforge.net).
 *
 * This file is part of UniversalCodeGrep.
 *
 * UniversalCodeGrep is free software: you can redistribute it and/or modify it under the
 * terms of version 3 of the GNU General Public License as published by the Free
 * Software Foundation.
 *
 * UniversalCodeGrep is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * UniversalCodeGrep.  If not, see <http://www.gnu.org/licenses/>.
 */

/** @file type_traits.hpp
 * Post-C++11 additions to the <type_traits> facilities.
 */

#ifndef SRC_FUTURE_TYPE_TRAITS_HPP_
#define SRC_FUTURE_TYPE_TRAITS_HPP_

#include <config.h>
#include <type_traits>

namespace std
{
	template< class T >
	constexpr bool is_class_v = is_class<T>::value;

	template< bool B, class T = void >
	using enable_if_t = typename enable_if<B,T>::type;
}

#endif /* SRC_FUTURE_TYPE_TRAITS_HPP_ */