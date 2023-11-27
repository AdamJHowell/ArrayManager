#ifndef ARRAYMANAGER_H
#define ARRAYMANAGER_H

#ifdef ESP32
#include <Arduino.h>
#else
#include <cstdlib>
#include <cstdio>
#endif // ESP32

/**
 * ArrayManager is a class meant to help averaging values.
 * The constructor takes an integer representing the array size.
 * Values can be set explicitly, or added sequentially.
 * The insertValue() method moves each value from its current index to index+1, then saves the new value to index 0.
 */
class ArrayManager
{
private:
  int arraySize;
  float *arrayValues;

public:
  explicit ArrayManager( int size );
  ~ArrayManager();
  int getSize();
  void insertValue( float value );
  void setValue( int index, float value );
  float getMin() const;
  float getAverage() const;
  float getMedian();
  float getMax() const;
  float* getArray();
  static void swap( float *xp, float *yp );
  static void bubbleSort( float array[], int size );
};

#endif // ARRAYMANAGER_H
