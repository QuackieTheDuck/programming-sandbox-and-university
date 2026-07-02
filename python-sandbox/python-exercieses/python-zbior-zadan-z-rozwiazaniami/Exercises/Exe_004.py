import re
x = input("Wprowadz znak: ")
if re.search('[aeiouy]',x):
    print("To jest samogloska")
elif re.search('[0-9]',x):
    print("To jest cyfra")
elif re.search('[bcdfgjklmnprstwz]', x):
    print("To jest spolgloska")
else:
    print("To inny znak specjalny")