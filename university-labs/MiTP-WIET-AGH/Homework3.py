# done

class Vehicle:
    def __init__(self, registration_number, vehicle_type):
        self.registration_number = registration_number
        self.vehicle_type = vehicle_type
        self.is_parked = False

    def enter_parking(self):
        self.is_parked = True

    def exit_parking(self):
        self.is_parked = False

    def print_info(self):
        print(f"Registration number: {self.registration_number}\nVehicle type: {self.vehicle_type}\nParked: {self.is_parked}")

class Parking:
    def __init__(self, max_spaces):
        self.max_spaces = max_spaces
        self.occupied_spaces = 0
        self.income = 0
        self.parked_vehicle = []
        self.parking_history = {}

    def vehicle_entry(self, car):
        if car.registration_number not in self.parked_vehicle:
            if self.occupied_spaces < self.max_spaces:
                car.enter_parking()
                self.parked_vehicle.append(car.registration_number)
                match car.vehicle_type:
                    case "car":
                        self.income += 10
                    case "single-track":
                        self.income += 5
                    case "freight":
                        self.income += 30
                self.occupied_spaces += 1
                # add history of parking here here
                if car.registration_number not in self.parking_history.keys():
                    self.parking_history[car.registration_number] = car.vehicle_type
                print(f"Car {car.registration_number} was parked successfuly.")
            else:
                print("Parking full.")
        else:
            print("Vehicle already parked.")


    def vehicle_exit(self, car):
        if car.registration_number not in self.parked_vehicle:
            print("This vehicle is not parked here.")
        else:
            car.exit_parking()
            self.occupied_spaces -= 1
            self.parked_vehicle.remove(car.registration_number)
            print(f"Car {car.registration_number}  was parked out successfuly.")

    def print_info(self):
        print(f"Max spaces: {self.max_spaces}\nOccupied spaces: {self.occupied_spaces}\nIncome: {self.income}\nParked Vehicles: {self.parked_vehicle}")

    def print_history(self):
        print("History of parked cars:")
        print(list(self.parking_history.keys()))
        print("All")
        for key in self.parking_history.keys():
            if self.parking_history[key] == "freight":
                print(key, end=", ")


"""
car1=Vehicle("KR 43210", "freight")
#car1.print_info()
parking1=Parking(25)
#parking1.print_info()
parking1.vehicle_entry(car1)
car1.print_info()
parking1.print_info()
parking1.vehicle_exit(car1)
car1.print_info()
parking1.print_info()
"""

car1 = Vehicle("KR 43210", "car")
car2 = Vehicle("SB 43210", "freight")
car3 = Vehicle("LC 43210", "single-track")
car4 = Vehicle("WR 4321", "car")
car5 = Vehicle("GD 4321", "car")
car6 = Vehicle("KSU 43210", "freight")
parking1 = Parking(5)

parking1.vehicle_entry(car1)
parking1.vehicle_entry(car2)
parking1.vehicle_entry(car3)
parking1.vehicle_exit(car2)
parking1.print_info()
parking1.vehicle_entry(car2)
parking1.vehicle_entry(car4)
parking1.vehicle_entry(car5)
parking1.vehicle_entry(car5)
parking1.print_info()
parking1.vehicle_entry(car6)
parking1.vehicle_exit(car1)
parking1.vehicle_entry(car6)
parking1.vehicle_exit(car2)
parking1.vehicle_exit(car3)
parking1.vehicle_exit(car4)
parking1.vehicle_exit(car5)
parking1.vehicle_exit(car6)
parking1.print_info()
parking1.print_history()