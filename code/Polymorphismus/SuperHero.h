/*
 * SuperHero.h
 *
 *  Created on: 25.04.2019
 *      Author: rbondere
 */

#ifndef SUPERHERO_H_
#define SUPERHERO_H_

#include <string>
#include "ComicCharacter.h"

class SuperHero: virtual public ComicCharacter
{
  public:
    SuperHero(const std::string& aName = "",
              const std::string& aPower = "noPower");
    virtual ~SuperHero();
    virtual void fight() const;
    void print() const override;
    const std::string& getSuperPower() const;
    void setSuperPower(const std::string& thePower);
  private:
    std::string superPower;
};

#endif /* SUPERHERO_H_ */
