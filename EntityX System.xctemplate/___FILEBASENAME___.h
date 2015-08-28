//
//  Copyright (c) ___YEAR___ ___FULLUSERNAME___, sansumbrella.com.
//  All rights reserved.
//

#pragma once

#include "entityx.h"

namespace sansumbrella
{

class ___FILEBASENAMEASIDENTIFIER___;
using ___FILEBASENAMEASIDENTIFIER___Ref = std::shared_ptr<___FILEBASENAMEASIDENTIFIER___>;

class ___FILEBASENAMEASIDENTIFIER___ : public entityx::System<___FILEBASENAMEASIDENTIFIER___>
{
public:
  ___FILEBASENAMEASIDENTIFIER___();
  ~___FILEBASENAMEASIDENTIFIER___();

  void update( entityx::EntityManager &entities, entityx::EventManager &events, entityx::TimeDelta dt) override;
private:
};

} // namespace sansumbrella
