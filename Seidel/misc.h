//
//  misc.h
//  Triangulate
//
//  Created by Cameron Palmer on 05.10.14.
//  Copyright (c) 2014 NTNU. All rights reserved.
//

#ifndef Triangulate_misc_h
#define Triangulate_misc_h

int read_segments(const char *filename, int *genus);
int generate_random_ordering(int n);
int choose_segment();
int math_logstar_n(int n);
int math_N(int n, int h);

#endif
