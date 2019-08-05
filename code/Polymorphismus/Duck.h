/*
 * Duck.h
 *
 *  Created on: 25.04.2019
 *      Author: rbondere
 */

#ifndef DUCK_H_
#define DUCK_H_

#include <string>
#include "SingingComicCharacter.h"

class Duck: public SingingComicCharacter
{
  public:
    Duck(const std::string& aName = "");
    virtual ~Duck();
    void print() const override;
    void cackle() const;
};

#endif /* DUCK_H_ */
