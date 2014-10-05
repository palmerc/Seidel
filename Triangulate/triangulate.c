//
//  triangulate.c
//  Triangulate
//
//  Created by Cameron Palmer on 05.10.14.
//  Copyright (c) 2014 NTNU. All rights reserved.
//

#include "seidel.h"

#include <stdio.h>
#include <stdlib.h>



int main(int argc, const char *argv[])
{
    int n, nmonpoly, genus;
    int op[SEGSIZE][3], i, ntriangles;

    if ((argc < 2) || ((n = read_segments(argv[1], &genus)) < 0)) {
        fprintf(stderr, "usage: triangulate <filename>\n");
        exit(1);
    }

    initialise(n);
    construct_trapezoids(n);
    nmonpoly = monotonate_trapezoids(n);
    ntriangles = triangulate_monotone_polygons(n, nmonpoly, op);

    for (i = 0; i < ntriangles; i++) {
        printf("triangle #%d: %d %d %d\n", i, op[i][0], op[i][1], op[i][2]);
    }

    return 0;
}