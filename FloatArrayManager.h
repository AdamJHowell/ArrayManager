#ifndef T_DISPLAY_S3_SHT40_FLOATARRAYMANAGER_H
#define T_DISPLAY_S3_SHT40_FLOATARRAYMANAGER_H

#include <Arduino.h>

/**
 * FloatArrayManager is a class meant to help averaging values.
 * The constructor takes an integer representing the array size.
 * Values can be set explicitly, or added sequentially.
 * The insertValue() method moves each value from its current index to index+1, then saves the new value to index 0.
 */
class FloatArrayManager
{
private:
  int arraySize;
  float *arrayValues;

public:
  explicit FloatArrayManager( int size );
  ~FloatArrayManager();
  void insertValue( float value );
  void setValue( int index, float value );
  float getAverage();
  float getMax();
  float getMin();
  float[] getArray();
  void printValues();
  String toString();
};

#endif //T_DISPLAY_S3_SHT40_FLOATARRAYMANAGER_H
