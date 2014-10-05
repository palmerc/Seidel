//
//  seidel.h
//  Triangulate
//
//  Created by Cameron Palmer on 05.10.14.
//  Copyright (c) 2014 NTNU. All rights reserved.
//

#ifndef Triangulate_seidel_h
#define Triangulate_seidel_h

#define SEGSIZE 200		/* max# of segments. Determines how */
/* many points can be specified as */
/* input. If your datasets have large */
/* number of points, increase this */
/* value accordingly. */

/* Functions */

extern int triangulate_polygon(int ncontours, int cntr[], double (*vertices)[2], int (*triangles)[3]);
extern int is_point_inside_polygon(double *);

extern int read_segments(const char *, int *);
extern int initialise(int n);
extern int construct_trapezoids(int);
extern int monotonate_trapezoids(int);
extern int triangulate_monotone_polygons(int, int, int (*)[3]);

#endif
