/*
 * ComicTest.cpp
 *
 *  Created on: 30.04.2013
 *      Author: rbondere
 */
#include <iostream>
#include <typeinfo>
#include "DuckHero.h"

using namespace std;

int main()
{
  DuckHero dh("CrazyDuck", "Flashspeed");
  dh.fight();
  dh.sing();
  dh.print();

  DuckHero* pdh = &dh;
  SuperHero* psh = &dh;
  Duck* pd = &dh;
  ComicCharacter* pcc1 = (Duck*)&dh; // ugly (C-Cast)
  ComicCharacter* pcc2 = dynamic_cast<Duck*> (&dh);
  ComicCharacter* pcc3 = (SuperHero*)&dh; // ugly (C-Cast)
  ComicCharacter* pcc4 = dynamic_cast<SuperHero*> (&dh);
  ComicCharacter* pcc5 = dynamic_cast<SingingComicCharacter*> (&dh);

  cout << hex << showbase;
  cout << "pdh  = " << pdh << endl;
  cout << "psh  = " << psh << endl;
  cout << "pd   = " << pd << endl;
  cout << "pcc1 = " << pcc1 << " (ugly)" << endl;
  cout << "pcc2 = " << pcc2 << endl;
  cout << "pcc3 = " << pcc3 << " (ugly) " << endl;
  cout << "pcc4 = " << pcc4 << endl;
  cout << "pcc5 = " << pcc5 << endl;
  cout << "Type of pdh: " << typeid(*pcc1).name() << endl;
  cout << "Size of dh : " << sizeof(dh);

  return 0;
}
