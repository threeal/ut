//
// Copyright (c) 2019-2020 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

// ensure no conflict between `Windows.h` and `ut.hpp`
#include <Windows.h>

#if not defined(min) || not defined(max)
#error 'min' and 'max' should be defined
#endif

#include "boost/ut.hpp"

#if not defined(min) || not defined(max)
#error 'min' and 'max' should still be defined
#endif

namespace ut = boost::ut;

int main() {
  using namespace ut;
  expect(true);
}
