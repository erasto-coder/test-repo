from matplotlib import pyplot as plt
x=[5,8,10]
y=[12,16,6]
x1=[6,9,11]
y1=[6,15,7]

plt.plot(x,y,"g", label="line one", linewidth=5)
plt.plot(x1,y1,"c", label="line two", linewidth=5)

plt.title("FIRST VISIALIZATION CODE")#it stand for tha title in our graph
plt.ylabel("y- axis")#stands for the title that we need to maoke or to name to our code
plt.xlabel("x- axis")#it stands for the name that we need to name the x axis in our table


plt.legend()

plt.grid(True, color="k")
plt.show()#this it helps to shooow tha data in a plot