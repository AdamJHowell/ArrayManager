#include "ArrayManager.h"

int main()
{
  ArrayManager humidityArray( 5 );
  humidityArray.insertValue( 1.1 );
  humidityArray.insertValue( 2.2 );
  humidityArray.insertValue( 3.3 );
  humidityArray.insertValue( 4.4 );
  humidityArray.insertValue( 5.5 );

  printf( "Original array: " );
  humidityArray.printValues();

  printf( "Values: %s\n", humidityArray.toString().c_str() );

  printf( "Capacity: %d\n", humidityArray.getSize() );

  printf( "Minimum: %f\n", humidityArray.getMin() );
  printf( "Average: %f\n", humidityArray.getAverage() );
  printf( "Maximum: %f\n", humidityArray.getMax() );
  printf( "Median: %f\n", humidityArray.getMedian() );
  printf( "Average: %f\n", humidityArray.getAverage() );

  return 0;
}
