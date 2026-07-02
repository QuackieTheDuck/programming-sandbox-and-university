while True:
    try:
        path_to_file = input("Please enter path to a file: ")
        with open(path_to_file,"r+") as f:
            content = f.readlines()
            i = 1
            for line in content:
                content[i-1] = f"[{i}] " + line
                #print(line)
                i += 1
            #print(content)
            f.seek(0)
            f.writelines(content)
            f.truncate()
        break
    except FileNotFoundError as e:
        print(f"""Error: {e}.
            Please make sure the file exist and that path is correct.""")