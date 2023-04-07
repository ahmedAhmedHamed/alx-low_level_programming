#include "main.h"
/**
 * get_endianness - checks whether big endian or little endian
 * big endian is MSB first little endian is LSB first
 * right shift once and if number gets bigger then its little endian,
 * otherwise big endian
 * else return 0
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
return ((2) < (2 >> 1));
}
