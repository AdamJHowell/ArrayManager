#include "ArrayManager.h"

int main()
{
  ArrayManager testArray( 5 );
  testArray.insertValue( 1.1 );
  testArray.insertValue( 2.2 );
  testArray.insertValue( 3.3 );
  testArray.insertValue( 4.4 );
  testArray.insertValue( 5.5 );

  printf( "Capacity: %d\n", testArray.getSize());

  printf( "Minimum: %f\n", testArray.getMin());
  printf( "Average: %f\n", testArray.getAverage());
  printf( "Median: %f\n", testArray.getMedian());
  printf( "Maximum: %f\n", testArray.getMax());

  printf( "Copy of the array:\n" );
  float const *newArray = testArray.getArray();
  for( int i = 0; i < testArray.getSize(); ++i )
  {
    printf( "  %f\n", newArray[i] );
  }

  return 0;
}
