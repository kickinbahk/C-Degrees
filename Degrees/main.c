//
//  main.c
//  Degrees
//
//  Created by Josiah Mory on 4/8/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float fahrenheitFromCelsius(float celsius) {
  float fahrenheit = celsius * 1.8 + 32.0;
  printf("%f Celsius is %f Fahrenheit\n", celsius, fahrenheit);
  return fahrenheit;
}

int main(int argc, const char * argv[]) {
  float freezingInCelsius = 0;
  float freezingInFahrenheit = fahrenheitFromCelsius(freezingInCelsius);
  
  printf("Water freezes at %f degrees Fahrenheit.\n", freezingInFahrenheit);
  return EXIT_SUCCESS;
}
