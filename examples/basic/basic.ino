#include "FloatArrayManager.h"

FloatArrayManager humidityArray( 5 );

void setup()
{
  humidityArray.insertValue( 1.1 );
  humidityArray.insertValue( 2.2 );
  humidityArray.insertValue( 3.3 );
  humidityArray.insertValue( 4.4 );
  humidityArray.insertValue( 5.5 );
  Serial.println( humidityArray.getMin() );
  Serial.println( humidityArray.getAverage() );
  Serial.println( humidityArray.getMax() );
}

void loop()
{
}
