float compute(float miles,float gallons) {
 return miles/gallons;
}

float computepesimist(float miles,float gallons) {
 return miles/(gallons+1);
}

float computeoptimist(float miles,float gallons) {
 return (miles+1)/gallons;
}

