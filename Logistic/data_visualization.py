import matplotlib.pyplot as plt
import numpy as np

lambdas = np.array(list(map(float, open("./lambda.data", "r").read().split())))
attractor = np.array(
    list(map(float, open("./attractor.data", "r").read().split())))

plt.scatter(lambdas, attractor)
plt.xlabel("Lambda")
plt.ylabel("Attractor")
plt.legend(loc=2)
plt.show()
