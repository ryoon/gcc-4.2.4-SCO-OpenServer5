// 2003-03-26 B enjamin Kosnik  <bkoz@redhat.com>

// Copyright (C) 2003 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// 27.8.1.1 - Template class basic_filebuf 

#include <iostream>
#include <sstream>

void test01()
{
  // Check for required base class.
  typedef std::iostream test_type;
  typedef std::istream base_type1;
  typedef std::ostream base_type2;

  std::stringbuf buf;
  const test_type& obj = *new test_type(&buf);
  const base_type1* base1 __attribute__((unused)) = &obj;
  const base_type2* base2 __attribute__((unused)) = &obj;
}

int main()
{
  test01();
  return 0;
}

// more surf!!!









