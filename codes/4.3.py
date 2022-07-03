import numpy as np
import matplotlib.pyplot as plt

values = np.loadtxt('T.dat', dtype='double')
NUM = len(values)
X1 = np.linspace(-1, 3, 30)
X2 = np.linspace(-1, 3, 100)
emp_cdf = []
emp_pdf = [0]
the_pdf = []

for x in X1:
    count = 0
    for value in values:
        if value <= x:
            count += 1
    emp_cdf.append(count/NUM)

for i in range(len(X1)-1):
    emp_pdf.append((emp_cdf[i+1] - emp_cdf[i]) / (X1[i+1] - X1[i]))

for x in X2:
    if x < 0:
        the_pdf.append(0)
    elif x <= 1:
        the_pdf.append(x)
    elif x < 2:
        the_pdf.append(2 - x)
    else:
        the_pdf.append(0)

plt.plot(X2, the_pdf, label='Theoretical')
plt.plot(X1, emp_pdf, 'o', label='Empirical')
plt.grid()
plt.legend()
plt.savefig('figs/4.3.png')
plt.show()