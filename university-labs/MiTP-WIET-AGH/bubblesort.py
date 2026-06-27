import random
import time

def bubblesort(arr):
     # TODO: Implement Bubble Sort, return sorted arraysort(arr):
     for j in range(len(arr)):
          #print(f"Iteration: {j}")
          for i in range(0, len(arr)-j-1):
               if arr[i] > arr[i+1]:
                    #print(arr[i], arr[i+1])
                    arr[i] , arr[i+1] = arr[i+1], arr[i]
                    swapped = True
                    #print(arr[i], arr[i+1])
          if not swapped:
               break
     return arr

def generate_random_array(size):
     return [random.randint(1, 10*size) for _ in range(size)]

def test_bubblesort():
     for i in range(10):
          arr = generate_random_array(10)
          sorted_bubble = bubblesort(arr.copy())
          sorted_arr = sorted(arr)
          if sorted_bubble != sorted_arr:
               print(f"Bubble Sort failed on test case {arr}")
               print(f"Expected: {sorted_arr}")
               print(f"Got: {sorted_bubble}")
               exit(1)
          print("Bubble Sort tests passed.")

# Run tests for bubblesort
test_bubblesort()
thousand = generate_random_array(1000)
twothousand = generate_random_array(2000)
fivethousand = generate_random_array(5000)
tenthousand = generate_random_array(10000)
start = time.time()
bubblesort(thousand)
stop = time.time()
runtime = stop - start
print(f"Time: {runtime}")
start = time.time()
bubblesort(twothousand)
stop = time.time()
runtime = stop - start
print(f"Time: {runtime}")
start = time.time()
bubblesort(fivethousand)
stop = time.time()
runtime = stop - start
print(f"Time: {runtime}")
start = time.time()
bubblesort(tenthousand)
stop = time.time()
runtime = stop - start
print(f"Time: {runtime}")