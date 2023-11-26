#ifndef ARRAYMANAGER_H
#define ARRAYMANAGER_H

#include <Arduino.h>

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
  void insertValue( float value );
  void setValue( int index, float value );
  float getMin();
  float getAverage();
  float getMax();
  float[] getArray();
  void printValues();
  String toString();
};

#endif // ARRAYMANAGER_H
