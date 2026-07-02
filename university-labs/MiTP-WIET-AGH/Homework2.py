'''
objetosci:
kula 4/3 pi r^3
prostopadloscian abc
walec pi r^2 h

polepowierzchni:
    kula 4 pi r^2
    prostopadloscian 2ab + 2ac + 2bc
    walec 2 pi r^2 + 2pi r h
'''

import math

def sphere(r):
    volume = 4 / 3 * math.pi * r ** 3
    surface_area = 4 * math.pi * r ** 2
    data = [volume, surface_area]
    return data

def cuboid(a, b, c):
    volume = a * b * c
    surface_area = 2 * a * b + 2 * a * c + 2 * b * c
    data = [volume, surface_area]
    return data

def cyllinder(r, h):
    volume = math.pi * r ** 2 * h
    surface_area = 2 * math.pi * r ** 2 + 2 * math.pi * r * h
    data = [volume, surface_area]
    return data

skip = False

while True:
    try:
        option = int(input("1. sphere\n2. cuboid\n3. cyllinder\n0. exit\n"))
        if option not in [1,2,3,0]:
            raise ValueError
        if option == 0:
            skip = True
            break
        else:
            break
    except ValueError:
        print("Please choose one from provided options.")
        continue

while not skip:
    try:
        value_to_calc = int(input("1. volume\n2. surface area\n"))
        if value_to_calc not in [1,2]:
            raise ValueError
        else:
            break
    except ValueError:
        print("Please choose one from provided options.")
        continue


match option:
    case 1:
        while True:
            try:
                radius = int(input("Provide radius of a sphere:"))
                if radius <= 0:
                    raise ValueError
                else:
                    break
            except ValueError:
                print("Please provide proper value.")
                continue
        if value_to_calc == 1:
            print(f"{sphere(radius)[0]:.2f}")
        else:
            print(f"{sphere(radius)[1]:.2f}")
    case 2:
        while True:
            try:
                a = int(input("Provide lenght of a edge:"))
                b = int(input("Provide lenght of b edge:"))
                c = int(input("Provide lenght of c edge:"))
                if a <= 0 or b <= 0 or c <= 0 :
                    raise ValueError
                else:
                    break
            except ValueError:
                print("Please provide proper value.")
                continue
        if value_to_calc == 1:
            print(f"{cuboid(a,b,c)[0]:.2f}")
        else:
            print(f"{cuboid(a,b,c)[1]:.2f}")
    case 3:
        while True:
            try:
                r = int(input("Provide radius of a cyllinder:"))
                h = int(input("Provide height of a cyllinder:"))
                if r <= 0 or h <= 0 :
                    raise ValueError
                else:
                    break
            except ValueError:
                print("Please provide proper value.")
        if value_to_calc == 1:
            print(f"{cyllinder(r,h)[0]:.2f}")
        else:
            print(f"{cyllinder(r,h)[1]:.2f}")
    case 0:
        print("Program ended.")
        exit()