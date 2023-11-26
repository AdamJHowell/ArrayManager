/**
 * ArrayManager is a class meant to help averaging values.
 * The constructor takes an integer representing the array size.
 * Values can be set explicitly, or added sequentially.
 * The insertValue() method moves each value from its current index to index+1, then saves the new value to index 0.
 */


#include "ArrayManager.h"


/**
 * Constructor.
 * @param size the number of elements the array should hold.
 */
ArrayManager::ArrayManager( int size )
{
  arraySize = size;
  arrayValues = new float[arraySize];
}


/**
 * Destructor to free the allocated memory.
 */
ArrayManager::~ArrayManager()
{
  delete[] arrayValues;
}


/**
 * Move each value from its current index to index+1, then save the new value to index 0.
 * @param value the value to insert into the array.
 */
void ArrayManager::insertValue( float value )
{
  for( int i = 1; i < arraySize; i++ )
  {
    // Copy an array value to the next "higher" slot.
    arrayValues[arraySize - i] = arrayValues[arraySize - i - 1];
  }
  // Insert the new value at the front of the array.
  arrayValues[0] = value;
}


/**
 * Set the value at a specific index.
 */
void ArrayManager::setValue( int index, float value )
{
  if( index >= 0 && index < arraySize )
  {
    arrayValues[index] = value;
  }
}


/**
 * Function to get the minimum value in the array.
 */
float ArrayManager::getMin()
{
  float minValue = arrayValues[0];
  for( int i = 1; i < arraySize; i++ )
  {
    if( arrayValues[i] < minValue )
    {
      minValue = arrayValues[i];
    }
  }
  return minValue;
}


/**
 * Function to get the average value in the array.
 */
float ArrayManager::getAverage()
{
  float sum = 0.0;
  for( int i = 0; i < arraySize; i++ )
  {
    sum += arrayValues[i];
  }
  return sum / arraySize;
}


/**
 * Function to get the maximum value in the array.
 */
float ArrayManager::getMax()
{
  float maxValue = arrayValues[0];
  for( int i = 1; i < arraySize; i++ )
  {
    if( arrayValues[i] > maxValue )
    {
      maxValue = arrayValues[i];
    }
  }
  return maxValue;
}


/**
 * Return the array of values.
 * Use this when you want to do your own toString() or manual data manipulation.
 * @return the array of values.
 */
float[] ArrayManager::getArray()
{
  return arrayValues;
}


/**
 * Function to print each value in the array after its index.
 */
void ArrayManager::printValues()
{
  for( int i = 0; i < arraySize; i++ )
  {
    Serial.printf( "%d: %f\n", i, arrayValues[i] );
  }
}


/**
 * Return the array as a string.
 * @return the values of the array in a String.
 */
String ArrayManager::toString()
{
  String returnString = String();
  returnString += "[";
  bool subsequent = false;
  for( int i = 0; i < arraySize; ++i )
  {
    if( subsequent )
      returnString += ", "
    returnString += arrayValues[i];
    subsequent = true;
  }
  returnString += "]";
  return returnString;
}
