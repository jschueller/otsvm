#! /usr/bin/env python

from __future__ import print_function, division
from openturns import *
from otsvm import *


# instantiate a kernel=Gaussian with sigma = 2
kernel = LinearKernel()
x = Point(2, 2)
y = Point(2, 1)

print(" kernel ([2 2],[1 1]) = ", kernel(x, y))
print(" dkernel/dx_i([2 2],[1 1]) = ", repr(kernel.partialGradient(x, y)))
print(" d2kernel/(dx_i*dx_j)([2 2],[1 1]) = ", repr(
    kernel.partialHessian(x, y)))

x[0] = 0
x[1] = 5
y[0] = 0
y[1] = 3

print(" kernel ([0 5],[0 3]) = ", kernel(x, y))
print(" dkernel/dx_i([0 5],[0 3]) = ", repr(kernel.partialGradient(x, y)))
print(" d2kernel/(dx_i*dx_j)([0 5],[0 3]) = ", repr(
    kernel.partialHessian(x, y)))
