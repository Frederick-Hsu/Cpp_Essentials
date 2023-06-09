/*!
 *  \file   Vector_container.cpp
 *  \brief  Implement the Vector_container class
 *  
 */


#include "Vector_container.hpp"

Vector_container::Vector_container(int s) : v(s)
{
}

Vector_container::Vector_container(std::initializer_list<double> lst) : v(lst)
{
}

Vector_container::~Vector_container()
{
}

double& Vector_container::operator[](int i)
{
    return v[i];
}

int Vector_container::size() const
{
    return v.size();
}