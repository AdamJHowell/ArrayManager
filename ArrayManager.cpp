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
ArrayManager::ArrayManager( int size ) : arraySize( size )
{
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
 * Function to get the size of the value array.
 * @return the size of the value array.
 */
int ArrayManager::getSize()
{
  return arraySize;
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
 * Function to get the median value in the array.
 * @return
 */
float ArrayManager::getMedian()
{
  float *sortedArray = new float[arraySize];
  for( int i = 0; i < arraySize; ++i )
  {
    sortedArray[i] = arrayValues[i];
  }
  bubbleSort( sortedArray, arraySize );
  float median = sortedArray[arraySize / 2];
  delete[] sortedArray;
  return median;
}


/**
 * Function to get the minimum value in the array.
 */
float ArrayManager::getMin() const
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
float ArrayManager::getAverage() const
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
float ArrayManager::getMax() const
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
float *ArrayManager::getArray()
{
  return arrayValues;
}


/**
 * A simple function to swap two array values by manipulating their pointers.
 * @param xp the first value to swap.
 * @param yp the second value to swap.
 */
void ArrayManager::swap( float *xp, float *yp )
{
  float temp = *xp;
  *xp = *yp;
  *yp = temp;
}


/**
 * A simple implementation of a bubble sort that sorts the array in-place.
 */
void ArrayManager::bubbleSort( float array[], int size )
{
  for( int i = 0; i < size - 1; i++ )
    for( int j = 0; j < size - i - 1; j++ )
      if( array[j] > array[j + 1] )
        swap( &array[j], &array[j + 1] );
}
