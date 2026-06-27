def countinstallment (amount, period, lending_rate):
    if lending_rate != 0:
        return (amount * (lending_rate / 100)) / (period * 12)
    elif lending_rate == 0:
        return amount / (period * 12)
    else:
        print("Please provide correct lending rate.")
        end = True

end = False

'''
credit = {
    "amount" : 0,
    "lending_rate" : 0,
    "period" : 0,
    "income" : 0
}
'''

while not end:
    '''
        for key in credit.keys():
            while True:
                try:
                    credit[key] = int(input(f"Please provide {key}: "))
                except ValueError:
                    print(f"Please provide {key} in proper format.")
                    continue
                if credit[key] > 0:
                    break
                else:
                    print(f"Please anter proper {key}.")
    '''




    while True:
        amount = input("Please provide credit amount: ")
        try:
            amount = int(amount)
        except ValueError:
            print("Please provide amount in proper format.")
            continue
        if amount > 0:
            break
        else:
            print("Please anter proper credit amount.")

    while True:
        lending_rate = input("Please provide lending rate(%): ")
        try:
            lending_rate = int(lending_rate)
        except ValueError:
            print("Please provide lending rate in proper format.")
            continue
        if lending_rate < 0:
            print("Please provide lending rate in proper format.")
            continue
        elif lending_rate >= 0:
            break


    while True:
        period = input("Please provide period(years): ")
        try:
            period = int(period)
        except ValueError:
            print("Please provide period in proper format.")
            continue
        if period <= 0:
            print("Please provide period in proper format.")
            continue
        elif period > 0:
            break

    while True:
            income = input("Please provide income: ")
            try:
                income = int(income)
            except ValueError:
                print("Please provide income in proper format.")
                continue
            if income <= 0:
                print("Please provide income in proper format.")
                continue
            elif income > 0:
                break

    installment = countinstallment(amount, period, lending_rate)

    if installment >= income / 3:
        print("Credit can't be provided.")
    elif installment < income / 3:
        print(f"Credit is avaliable.\nMonthly installment: {installment:.2f}.")

    repeat = input("Would you like to repeat calculations?(Y/n)")
    if repeat == "Y":
        continue
    else:
        end = True

print("Thank you for using our calculator.")