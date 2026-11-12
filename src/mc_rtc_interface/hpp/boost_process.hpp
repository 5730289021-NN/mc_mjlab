#pragma once

#include <boost/version.hpp>

// Boost < 1.86 ships this API as header-only v2. docs/build.md#boost_process
#if BOOST_VERSION >= 108600
    #include <boost/process.hpp>
#else
    #include <boost/process/v2.hpp>

namespace boost::process
{
    using v2::current_pid;
    using v2::process;
}
#endif
