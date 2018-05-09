//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: SAXSubscriberPool.cpp,v 1.2 2005/05/13 00:55:57 jmccormi Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Saxana/SAXSubscriberPool.h"
#include "Saxana/SAXComponentFactoryTable.h"
#include "Saxana/SAXComponentFactory.h"

#include <iostream>

SAXSubscriberPool::SAXSubscriberPool()
{
#ifdef GDML_VERBOSE
  std::cout << "Subcriber pool created" << std::endl;
#endif
}

SAXSubscriberPool::~SAXSubscriberPool()
{
}

void SAXSubscriberPool::AddSubscriber( const SAXSubscriber::Subscription& type
                                     , SAXSubscriberPool::Subscriber client )
{
  SAXSubscriberPool::Pool::iterator it = fPool.find( type );
  if( it == fPool.end() ) {
    // No subscribers for this have been found, let's create a new pool entry
    SAXSubscriberPool::Subscribers pool;
    fPool[type] = pool;
  }  
  fPool[type].push_back( client );
}

void SAXSubscriberPool::RemoveSubscriber( const SAXSubscriber::Subscription& type
                                        , SAXSubscriberPool::Subscriber client )
{
  SAXSubscriberPool::Pool::iterator it = fPool.find( type );
  if( it != fPool.end() ) {
    // There is still a subscriber for this type
    SAXSubscriberPool::Subscribers::iterator sit;
    for( sit = fPool[type].begin(); sit != fPool[type].end(); ++sit ) {
      if( (*sit) == client ) {
        fPool[type].erase(sit);
      }
    }
    
    if( fPool[type].empty() ) {
      // There is no other subscriber for this type, let's free the map slot
      fPool.erase( type );
    }
  }
}

const SAXSubscriberPool::Subscribers*
SAXSubscriberPool::GetSubscribers( const SAXSubscriber::Subscription& subscription )
{
  SAXSubscriberPool::Subscribers* returnset = new SAXSubscriberPool::Subscribers();
  
  SAXSubscriberPool::Pool::iterator it = fPool.find( subscription );
  if( it != fPool.end() )
  {
    // There is a subscriber for this type
    SAXSubscriberPool::Subscribers::iterator sit;
    for( sit = fPool[subscription].begin(); sit != fPool[subscription].end(); ++sit )
    {
      returnset->push_back( *sit );
    }
  }
  
  return returnset;
}


void SAXSubscriberPool::Initialize()
{
  const SAXComponentFactoryTable::Components*
  factories = SAXComponentFactoryTable::GetInstance()->
                                        GetComponents( SAXComponentObject::eSubscriber );
  
  SAXComponentFactoryTable::Components::const_iterator pit;  
  SAXSubscriberPool::Subscriber subscriber;
  
  for( pit = factories->begin(); pit != factories->end(); pit++ )
  {
    subscriber = dynamic_cast<SAXSubscriber*>( (*pit)->Build() );
    const SAXSubscriber::SubscriptionSet* subs = subscriber->GetSubscriptions();
    
    SAXSubscriber::SubscriptionSet::const_iterator sit;
    for( sit = subs->begin(); sit != subs->end(); sit++ )
    {
#ifdef GDML_VERBOSE
      std::cout << "Adding subscriber for tag: " << (*sit) << std::endl;
#endif
      AddSubscriber( *sit, subscriber );    
    }
  }
#ifdef GDML_VERBOSE
  std::cout << "========================================================" << std::endl;
#endif
}

void SAXSubscriberPool::Reset() {
  // Global pool reset, removing all subscribers for all types
  for( SAXSubscriberPool::Pool::iterator it = fPool.begin(); it != fPool.end(); ++it ) {
    it->second.clear();
  }
  fPool.clear();
}

