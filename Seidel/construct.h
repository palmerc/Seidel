//
//  construct.h
//  Triangulate
//
//  Created by Cameron Palmer on 05.10.14.
//  Copyright (c) 2014 NTNU. All rights reserved.
//

#ifndef Triangulate_construct_h
#define Triangulate_construct_h

#include "tri.h"



int construct_trapezoids(int nseg);
int locate_endpoint(point_t *v, point_t *vo, int r);
int _greater_than_equal_to(point_t *v0, point_t *v1);
int _greater_than(point_t *v0, point_t *v1);
int _equal_to(point_t *v0, point_t *v1);
int _less_than(point_t *v0, point_t *v1);

#endif
