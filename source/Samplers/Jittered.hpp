#pragma once

#include "Sampler.hpp"

class Jittered : public Sampler{
public:
    Jittered(int samples = 1, int sets = 50);
    virtual void generate_samples();
};