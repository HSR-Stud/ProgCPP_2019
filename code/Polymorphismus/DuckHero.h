/*
 * DuckHero.h
 *
 *  Created on: 25.04.2019
 *      Author: rbondere
 */

#ifndef DUCKHERO_H_
#define DUCKHERO_H_

#include "Duck.h"
#include "SuperHero.h"

class DuckHero: public Duck, public SuperHero
{
  public:
    DuckHero(const std::string& aName = "",
             const std::string& aPower = "noPower");
    virtual ~DuckHero();
    void print() const override;
};

#endif /* DUCKHERO_H_ */
