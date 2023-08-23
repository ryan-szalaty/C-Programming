import csv

filename = "./people-100.csv"

"""
names = []

with open(filename, "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        row["First Name"] = row["First Name"].strip().upper() #remove surrounding whitespace and uppercase
        if row["First Name"] not in names:
            names.append(row["First Name"])
        else:
            print(f"Deleted Name: {row['First Name']}")

print(len(names))
"""
"""
names = set()

with open(filename, "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        row["First Name"] = row["First Name"].strip().upper() #remove surrounding whitespace and uppercase
        names.add(row["First Name"])

for name in sorted(names):
    print(name)
"""

names = dict()

with open(filename, "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        name = row["First Name"].strip().upper() #remove surrounding whitespace and uppercase
        if name in names:
            names[name] += 1
        else:
            names[name] = 1

def get_value(name):
    return names[name]

for name in sorted(names, key=lambda name: names[name], reverse=True):
    print(name, names[name])