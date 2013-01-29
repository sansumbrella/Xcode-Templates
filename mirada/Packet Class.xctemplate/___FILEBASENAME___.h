//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#pragma once
#include "EnergyPacket.h"

namespace energy
{

  typedef std::shared_ptr<class ___FILEBASENAME___> ___FILEBASENAME___Ref;
  class ___FILEBASENAME___ : public EnergyPacket
  {
  public:
    ~___FILEBASENAME___();
    static ___FILEBASENAME___Ref create( ConduitRef conduit );
    void update();
    void draw();
  private:
    ___FILEBASENAME___( ConduitRef conduit );
  };

} // ns energy