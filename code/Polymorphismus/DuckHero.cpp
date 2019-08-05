/*
 * DuckHero.cpp
 *
 *  Created on: 30.04.2010
 *      Author: rbondere
 */

#include <string>
#include "DuckHero.h"
using namespace std;

DuckHero::DuckHero(const string& aName,
                   const string& aPower) :
  ComicCharacter(aName), // must be here because of virtual inheritance
      Duck(aName), SuperHero(aName, aPower)
{
}

DuckHero::~DuckHero()
{
}

void DuckHero::print() const
{
  Duck::print();
  SuperHero::print();
}
