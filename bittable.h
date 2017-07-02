#ifndef _BITTABLE_H_
#define _BITTABLE_H_

const uint8_t bitExpand[256][3] = {
  0b10010010, 0b01001001, 0b00100100,
  0b10010010, 0b01001001, 0b00100110,
  0b10010010, 0b01001001, 0b00110100,
  0b10010010, 0b01001001, 0b00110110,
  0b10010010, 0b01001001, 0b10100100,
  0b10010010, 0b01001001, 0b10100110,
  0b10010010, 0b01001001, 0b10110100,
  0b10010010, 0b01001001, 0b10110110,
  0b10010010, 0b01001101, 0b00100100,
  0b10010010, 0b01001101, 0b00100110,
  0b10010010, 0b01001101, 0b00110100,
  0b10010010, 0b01001101, 0b00110110,
  0b10010010, 0b01001101, 0b10100100,
  0b10010010, 0b01001101, 0b10100110,
  0b10010010, 0b01001101, 0b10110100,
  0b10010010, 0b01001101, 0b10110110,
  0b10010010, 0b01101001, 0b00100100,
  0b10010010, 0b01101001, 0b00100110,
  0b10010010, 0b01101001, 0b00110100,
  0b10010010, 0b01101001, 0b00110110,
  0b10010010, 0b01101001, 0b10100100,
  0b10010010, 0b01101001, 0b10100110,
  0b10010010, 0b01101001, 0b10110100,
  0b10010010, 0b01101001, 0b10110110,
  0b10010010, 0b01101101, 0b00100100,
  0b10010010, 0b01101101, 0b00100110,
  0b10010010, 0b01101101, 0b00110100,
  0b10010010, 0b01101101, 0b00110110,
  0b10010010, 0b01101101, 0b10100100,
  0b10010010, 0b01101101, 0b10100110,
  0b10010010, 0b01101101, 0b10110100,
  0b10010010, 0b01101101, 0b10110110,
  0b10010011, 0b01001001, 0b00100100,
  0b10010011, 0b01001001, 0b00100110,
  0b10010011, 0b01001001, 0b00110100,
  0b10010011, 0b01001001, 0b00110110,
  0b10010011, 0b01001001, 0b10100100,
  0b10010011, 0b01001001, 0b10100110,
  0b10010011, 0b01001001, 0b10110100,
  0b10010011, 0b01001001, 0b10110110,
  0b10010011, 0b01001101, 0b00100100,
  0b10010011, 0b01001101, 0b00100110,
  0b10010011, 0b01001101, 0b00110100,
  0b10010011, 0b01001101, 0b00110110,
  0b10010011, 0b01001101, 0b10100100,
  0b10010011, 0b01001101, 0b10100110,
  0b10010011, 0b01001101, 0b10110100,
  0b10010011, 0b01001101, 0b10110110,
  0b10010011, 0b01101001, 0b00100100,
  0b10010011, 0b01101001, 0b00100110,
  0b10010011, 0b01101001, 0b00110100,
  0b10010011, 0b01101001, 0b00110110,
  0b10010011, 0b01101001, 0b10100100,
  0b10010011, 0b01101001, 0b10100110,
  0b10010011, 0b01101001, 0b10110100,
  0b10010011, 0b01101001, 0b10110110,
  0b10010011, 0b01101101, 0b00100100,
  0b10010011, 0b01101101, 0b00100110,
  0b10010011, 0b01101101, 0b00110100,
  0b10010011, 0b01101101, 0b00110110,
  0b10010011, 0b01101101, 0b10100100,
  0b10010011, 0b01101101, 0b10100110,
  0b10010011, 0b01101101, 0b10110100,
  0b10010011, 0b01101101, 0b10110110,
  0b10011010, 0b01001001, 0b00100100,
  0b10011010, 0b01001001, 0b00100110,
  0b10011010, 0b01001001, 0b00110100,
  0b10011010, 0b01001001, 0b00110110,
  0b10011010, 0b01001001, 0b10100100,
  0b10011010, 0b01001001, 0b10100110,
  0b10011010, 0b01001001, 0b10110100,
  0b10011010, 0b01001001, 0b10110110,
  0b10011010, 0b01001101, 0b00100100,
  0b10011010, 0b01001101, 0b00100110,
  0b10011010, 0b01001101, 0b00110100,
  0b10011010, 0b01001101, 0b00110110,
  0b10011010, 0b01001101, 0b10100100,
  0b10011010, 0b01001101, 0b10100110,
  0b10011010, 0b01001101, 0b10110100,
  0b10011010, 0b01001101, 0b10110110,
  0b10011010, 0b01101001, 0b00100100,
  0b10011010, 0b01101001, 0b00100110,
  0b10011010, 0b01101001, 0b00110100,
  0b10011010, 0b01101001, 0b00110110,
  0b10011010, 0b01101001, 0b10100100,
  0b10011010, 0b01101001, 0b10100110,
  0b10011010, 0b01101001, 0b10110100,
  0b10011010, 0b01101001, 0b10110110,
  0b10011010, 0b01101101, 0b00100100,
  0b10011010, 0b01101101, 0b00100110,
  0b10011010, 0b01101101, 0b00110100,
  0b10011010, 0b01101101, 0b00110110,
  0b10011010, 0b01101101, 0b10100100,
  0b10011010, 0b01101101, 0b10100110,
  0b10011010, 0b01101101, 0b10110100,
  0b10011010, 0b01101101, 0b10110110,
  0b10011011, 0b01001001, 0b00100100,
  0b10011011, 0b01001001, 0b00100110,
  0b10011011, 0b01001001, 0b00110100,
  0b10011011, 0b01001001, 0b00110110,
  0b10011011, 0b01001001, 0b10100100,
  0b10011011, 0b01001001, 0b10100110,
  0b10011011, 0b01001001, 0b10110100,
  0b10011011, 0b01001001, 0b10110110,
  0b10011011, 0b01001101, 0b00100100,
  0b10011011, 0b01001101, 0b00100110,
  0b10011011, 0b01001101, 0b00110100,
  0b10011011, 0b01001101, 0b00110110,
  0b10011011, 0b01001101, 0b10100100,
  0b10011011, 0b01001101, 0b10100110,
  0b10011011, 0b01001101, 0b10110100,
  0b10011011, 0b01001101, 0b10110110,
  0b10011011, 0b01101001, 0b00100100,
  0b10011011, 0b01101001, 0b00100110,
  0b10011011, 0b01101001, 0b00110100,
  0b10011011, 0b01101001, 0b00110110,
  0b10011011, 0b01101001, 0b10100100,
  0b10011011, 0b01101001, 0b10100110,
  0b10011011, 0b01101001, 0b10110100,
  0b10011011, 0b01101001, 0b10110110,
  0b10011011, 0b01101101, 0b00100100,
  0b10011011, 0b01101101, 0b00100110,
  0b10011011, 0b01101101, 0b00110100,
  0b10011011, 0b01101101, 0b00110110,
  0b10011011, 0b01101101, 0b10100100,
  0b10011011, 0b01101101, 0b10100110,
  0b10011011, 0b01101101, 0b10110100,
  0b10011011, 0b01101101, 0b10110110,
  0b11010010, 0b01001001, 0b00100100,
  0b11010010, 0b01001001, 0b00100110,
  0b11010010, 0b01001001, 0b00110100,
  0b11010010, 0b01001001, 0b00110110,
  0b11010010, 0b01001001, 0b10100100,
  0b11010010, 0b01001001, 0b10100110,
  0b11010010, 0b01001001, 0b10110100,
  0b11010010, 0b01001001, 0b10110110,
  0b11010010, 0b01001101, 0b00100100,
  0b11010010, 0b01001101, 0b00100110,
  0b11010010, 0b01001101, 0b00110100,
  0b11010010, 0b01001101, 0b00110110,
  0b11010010, 0b01001101, 0b10100100,
  0b11010010, 0b01001101, 0b10100110,
  0b11010010, 0b01001101, 0b10110100,
  0b11010010, 0b01001101, 0b10110110,
  0b11010010, 0b01101001, 0b00100100,
  0b11010010, 0b01101001, 0b00100110,
  0b11010010, 0b01101001, 0b00110100,
  0b11010010, 0b01101001, 0b00110110,
  0b11010010, 0b01101001, 0b10100100,
  0b11010010, 0b01101001, 0b10100110,
  0b11010010, 0b01101001, 0b10110100,
  0b11010010, 0b01101001, 0b10110110,
  0b11010010, 0b01101101, 0b00100100,
  0b11010010, 0b01101101, 0b00100110,
  0b11010010, 0b01101101, 0b00110100,
  0b11010010, 0b01101101, 0b00110110,
  0b11010010, 0b01101101, 0b10100100,
  0b11010010, 0b01101101, 0b10100110,
  0b11010010, 0b01101101, 0b10110100,
  0b11010010, 0b01101101, 0b10110110,
  0b11010011, 0b01001001, 0b00100100,
  0b11010011, 0b01001001, 0b00100110,
  0b11010011, 0b01001001, 0b00110100,
  0b11010011, 0b01001001, 0b00110110,
  0b11010011, 0b01001001, 0b10100100,
  0b11010011, 0b01001001, 0b10100110,
  0b11010011, 0b01001001, 0b10110100,
  0b11010011, 0b01001001, 0b10110110,
  0b11010011, 0b01001101, 0b00100100,
  0b11010011, 0b01001101, 0b00100110,
  0b11010011, 0b01001101, 0b00110100,
  0b11010011, 0b01001101, 0b00110110,
  0b11010011, 0b01001101, 0b10100100,
  0b11010011, 0b01001101, 0b10100110,
  0b11010011, 0b01001101, 0b10110100,
  0b11010011, 0b01001101, 0b10110110,
  0b11010011, 0b01101001, 0b00100100,
  0b11010011, 0b01101001, 0b00100110,
  0b11010011, 0b01101001, 0b00110100,
  0b11010011, 0b01101001, 0b00110110,
  0b11010011, 0b01101001, 0b10100100,
  0b11010011, 0b01101001, 0b10100110,
  0b11010011, 0b01101001, 0b10110100,
  0b11010011, 0b01101001, 0b10110110,
  0b11010011, 0b01101101, 0b00100100,
  0b11010011, 0b01101101, 0b00100110,
  0b11010011, 0b01101101, 0b00110100,
  0b11010011, 0b01101101, 0b00110110,
  0b11010011, 0b01101101, 0b10100100,
  0b11010011, 0b01101101, 0b10100110,
  0b11010011, 0b01101101, 0b10110100,
  0b11010011, 0b01101101, 0b10110110,
  0b11011010, 0b01001001, 0b00100100,
  0b11011010, 0b01001001, 0b00100110,
  0b11011010, 0b01001001, 0b00110100,
  0b11011010, 0b01001001, 0b00110110,
  0b11011010, 0b01001001, 0b10100100,
  0b11011010, 0b01001001, 0b10100110,
  0b11011010, 0b01001001, 0b10110100,
  0b11011010, 0b01001001, 0b10110110,
  0b11011010, 0b01001101, 0b00100100,
  0b11011010, 0b01001101, 0b00100110,
  0b11011010, 0b01001101, 0b00110100,
  0b11011010, 0b01001101, 0b00110110,
  0b11011010, 0b01001101, 0b10100100,
  0b11011010, 0b01001101, 0b10100110,
  0b11011010, 0b01001101, 0b10110100,
  0b11011010, 0b01001101, 0b10110110,
  0b11011010, 0b01101001, 0b00100100,
  0b11011010, 0b01101001, 0b00100110,
  0b11011010, 0b01101001, 0b00110100,
  0b11011010, 0b01101001, 0b00110110,
  0b11011010, 0b01101001, 0b10100100,
  0b11011010, 0b01101001, 0b10100110,
  0b11011010, 0b01101001, 0b10110100,
  0b11011010, 0b01101001, 0b10110110,
  0b11011010, 0b01101101, 0b00100100,
  0b11011010, 0b01101101, 0b00100110,
  0b11011010, 0b01101101, 0b00110100,
  0b11011010, 0b01101101, 0b00110110,
  0b11011010, 0b01101101, 0b10100100,
  0b11011010, 0b01101101, 0b10100110,
  0b11011010, 0b01101101, 0b10110100,
  0b11011010, 0b01101101, 0b10110110,
  0b11011011, 0b01001001, 0b00100100,
  0b11011011, 0b01001001, 0b00100110,
  0b11011011, 0b01001001, 0b00110100,
  0b11011011, 0b01001001, 0b00110110,
  0b11011011, 0b01001001, 0b10100100,
  0b11011011, 0b01001001, 0b10100110,
  0b11011011, 0b01001001, 0b10110100,
  0b11011011, 0b01001001, 0b10110110,
  0b11011011, 0b01001101, 0b00100100,
  0b11011011, 0b01001101, 0b00100110,
  0b11011011, 0b01001101, 0b00110100,
  0b11011011, 0b01001101, 0b00110110,
  0b11011011, 0b01001101, 0b10100100,
  0b11011011, 0b01001101, 0b10100110,
  0b11011011, 0b01001101, 0b10110100,
  0b11011011, 0b01001101, 0b10110110,
  0b11011011, 0b01101001, 0b00100100,
  0b11011011, 0b01101001, 0b00100110,
  0b11011011, 0b01101001, 0b00110100,
  0b11011011, 0b01101001, 0b00110110,
  0b11011011, 0b01101001, 0b10100100,
  0b11011011, 0b01101001, 0b10100110,
  0b11011011, 0b01101001, 0b10110100,
  0b11011011, 0b01101001, 0b10110110,
  0b11011011, 0b01101101, 0b00100100,
  0b11011011, 0b01101101, 0b00100110,
  0b11011011, 0b01101101, 0b00110100,
  0b11011011, 0b01101101, 0b00110110,
  0b11011011, 0b01101101, 0b10100100,
  0b11011011, 0b01101101, 0b10100110,
  0b11011011, 0b01101101, 0b10110100,
  0b11011011, 0b01101101, 0b10110110
};

#endif // _BITTABLE_H_