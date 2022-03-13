#include <iostream>
#include "FluidUnit.hpp"
using namespace std;
using namespace Assert;

int main(int argc, char *argv[]) {

    Assert::That(10).Should().Be(10);
    Assert::That(10).Less().Than(11);

    return 0;
};