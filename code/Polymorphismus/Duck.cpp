/*
 * Duck.cpp
 *
 *  Created on: 30.04.2010
 *      Author: rbondere
 */

#include <iostream>
#include "Duck.h"
using namespace std;

Duck::Duck(const string& aName) :
  SingingComicCharacter(aName)
{
}

Duck::~Duck()
{
}

void Duck::print() const
{
  cout << "Duck " << getName() << endl;
}

void Duck::cackle() const
{
  cout << getName() << " cackles" << endl;
}
