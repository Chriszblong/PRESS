//
//  binary.h
//  press
//
//  Created by Renchu Song on 28/6/2016.
//  Copyright © 2016 Renchu Song. All rights reserved.
//

#ifndef binary_h
#define binary_h

//convertor between char and binary char
union Char2Binary {
  char value;
  unsigned char data[1];
};
union Char2Binary char2Binary;

//convertor between short and binary short
union Short2Binary {
  short value;
  unsigned char data[2];
};
union Short2Binary short2Binary;

//convertor between int and binary int
union Int2Binary {
  int value;
  unsigned char data[4];
};
union Int2Binary int2Binary;

//convertor between double and binary double
union Double2Binary {
  double value;
  unsigned char data[8];
};
union Double2Binary double2Binary;

#endif /* binary_h */
