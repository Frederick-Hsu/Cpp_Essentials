/*!
 *  \file       main.cpp
 *  \brief      This file implements the main() portal function for current project.
 *
 */


#include <gtest/gtest.h>


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


/*================================================================================================*/

struct S
{
    [[noreturn]] virtual inline auto f(const unsigned long int* const) noexcept -> void const;
};
