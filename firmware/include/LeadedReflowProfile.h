/*
 * Andy's Workshop Reflow Oven Controller.
 * Copyright (c) 2014 Andy Brown. All rights reserved.
 * Please see website (http://www.andybrown.me.uk) for full details.
 */

#pragma once


namespace awreflow {


  /*
   * Reflow profile for SnPb solder
   */

  class LeadedReflowProfile : public ReflowProfile {

    public:
      LeadedReflowProfile();
  };
}
