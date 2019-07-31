#pragma once

#include <vector>
#include "../Utilities/Point2D.hpp"
#include "../Utilities/Maths.hpp"

class Sampler{
public:
    Sampler(int samples = 1, int sets = 50);
    virtual ~Sampler();

    int get_num_samples();
    void set_num_samples(int samples);

    int get_num_sets();
    void set_num_sets(int sets);

    Point2D sample_unit_square();
    virtual void generate_samples() = 0;
    
protected:
    int num_samples;
    int num_sets;
    unsigned long count;
    int jump;

    std::vector<Point2D> samples;
};