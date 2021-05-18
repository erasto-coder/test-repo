import wmi
c = wmi.WMI()
my_system = c.Win32_ComputerSystem()[0]

#print(f"manufacturer:{my_System.Manufacturer}")
print(f"Name:{my_System.Name}")