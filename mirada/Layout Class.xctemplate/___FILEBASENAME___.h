//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#pragma once
#include "ILayout.h"

namespace energy
{
  typedef std::shared_ptr<class ___FILEBASENAME___> ___FILEBASENAME___Ref;
  /**
  ___FILEBASENAME___
  */
  class ___FILEBASENAME___ : public ILayout
  {
  public:
    ___FILEBASENAME___();
    ~___FILEBASENAME___();
    void apply( std::vector<EnergyStream> &streams );
    void addToGui( ci::params::InterfaceGl *params );
    static ___FILEBASENAME___Ref create();
  private:
  };

} // ns energy