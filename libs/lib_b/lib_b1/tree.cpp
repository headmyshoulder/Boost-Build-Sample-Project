/*
 * tree.cpp
 *
 *  Created on: Jan 15, 2012
 *      Author: karsten
 */

#include "tree.h"

#include <iostream>

#include <libs/lib1/search.h>

#define tab "\t"

using namespace std;

void tree_func( int a )
{
    cout << a << tab << search_func( double( a ) ) << endl;
}

void tree::func( int a )
{
    search s;
    cout << a << tab << s.func( double( a ) ) << endl;
}
