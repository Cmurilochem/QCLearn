#ifndef PARTICLE_BOX_H_
#define PARTICLE_BOX_H_

void particle_box(double lenght, double mass, int nqtmax, std::string filename);
double particleBoxExactEnergy(int quant_num, double lenght, double mass);
double particleBoxExactWF(int quant_num, double lenght, double x_coord);

#endif