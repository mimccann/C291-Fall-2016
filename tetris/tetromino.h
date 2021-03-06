/* tetromino.h --- 
 * 
 * Filename: tetromino.h
 * Description: 
 * Author: Bryce Himebaugh
 * Maintainer: 
 * Created: Fri Sep  2 09:46:17 2016
 * Last-Updated: 
 *           By: 
 *     Update #: 0
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * 
 * 
 */

/* Change log:
 * 
 * 
 */

/* Copyright (c) 2016 The Trustees of Indiana University and 
 * Indiana University Research and Technology Corporation.  
 * 
 * All rights reserved. 
 * 
 * Additional copyrights may follow 
 */

/* Code: */

typedef struct tetromino {
  char type_str[20];
  char piece[4][4];             // 4x4 grid of characters, piece[x][y]
  int upper_left_x;
  int upper_left_y;
  char draw_char;
  char color[3];
} tetromino_t;

extern const tetromino_t tetromino_types[7];

int rotate_cw(tetromino_t *);
int rotate_ccw(tetromino_t *);
tetromino_t *create_tetromino (int, int);
int destroy_tetromino(tetromino_t *);
void display_tetromino(tetromino_t *);
void undisplay_tetromino(tetromino_t *);

/* tetromino.h ends here */
