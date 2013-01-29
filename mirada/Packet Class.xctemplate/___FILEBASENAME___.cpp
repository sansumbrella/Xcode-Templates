//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"
using namespace energy;
using namespace ci;
using namespace std;

___FILEBASENAME___::___FILEBASENAME___( ConduitRef conduit ):
EnergyPacket( conduit )
{}

___FILEBASENAME___::~___FILEBASENAME___()
{}

___FILEBASENAME___Ref ___FILEBASENAME___::create( ConduitRef conduit )
{
  return ___FILEBASENAME___Ref( new ___FILEBASENAME___( conduit ) );
}

void ___FILEBASENAME___::update()
{

}

void ___FILEBASENAME___::draw()
{

}
