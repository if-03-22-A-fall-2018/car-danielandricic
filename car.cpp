#include "car.h"
#include <stdbool.h>
#define CARCOUNT 6

struct CarImplementation{
  enum CarType carType;
  enum Color color;
  int actualspeed;
  double accelleration;
  double fill_level;
  bool is_rented;
};


static struct CarImplementation aixam = {AIXAM, RED, 0, 0, 16.0, false};
static struct CarImplementation fico1 = {FIAT_MULTIPLA, GREEN, 0, 0, 65, false};
static struct CarImplementation fico2 = {FIAT_MULTIPLA, BLUE, 0, 0, 65, false};
static struct CarImplementation fico3 = {FIAT_MULTIPLA, ORANGE, 0, 0, 65, false};
static struct CarImplementation jeep1 = {JEEP, SILVER, 0, 0, 80, false};
static struct CarImplementation jeep2 = {JEEP, BLACK, 0, 0, 80, false};

Car car_park[] = {&aixam, &fico1, &fico2, &fico3, &jeep1, &jeep2};

enum CarType get_type(Car car)
{
  return car->carType;
}

enum Color get_color(Car car)
{
  return car->color;
}

float get_fill_level(Car car)
{
  return car->fill_level;
}

float get_acceleration_rate(Car car)
{
  return car->accelleration;
}

int get_speed(Car car)
{
  return car->actualspeed;
}
Car get_car(enum CarType type)
{
    for (int i = 0; i < CARCOUNT; i++) {
      if(car_park[i]->carType == type && !(car_park[i]->is_rented))
      {
          car_park[i]->is_rented = true;
          return car_park[i];
      }
    }
    return 0;
}

void set_acceleration_rate(Car car, double accelleration)
{
  if(accelleration < -8.0000)
  {
    accelleration = -8.0000;
  }
  switch(car->carType) // Primitive Lösung
  {
    case AIXAM:
    if(accelleration > 1.0)
    {
      accelleration = 1.0;
    }
    break;
    case FIAT_MULTIPLA:
    if(accelleration > 2.26)
    {
      accelleration = 2.26;
    }
    break;
    case JEEP:
    if(accelleration > 3.14)
    {
      accelleration = 3.14;
    }
    break;
  }
  car->accelleration = accelleration;
}

void init()
{
  for (int i = 0; i < CARCOUNT; i++) {
    set_acceleration_rate(car_park[i], 0.0);
    car_park[i]->is_rented = false;
  }
}

void accelerate(Car car)
{
  car->actualspeed += car->accelleration;
  car->actualspeed = (int) ((car->actualspeed * 3.6) * 100) % 100;
}
