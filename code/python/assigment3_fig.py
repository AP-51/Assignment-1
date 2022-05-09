import matplotlib.pyplot as plt
import matplotlib.patches as pat
fig, ax = plt.subplots()
plt.plot([0,3],[0,0],color='black')
plt.plot([3,3],[0,2],color='black')
plt.plot([3,0],[2,2],color='black')
plt.plot([0,0],[2,0],color='black')
circle1 = plt.Circle((1.5, 1), 0.5,facecolor='none', edgecolor='black')
ax.add_patch(circle1)
plt.show()