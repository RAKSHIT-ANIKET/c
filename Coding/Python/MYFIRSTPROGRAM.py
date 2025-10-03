import csv
with open('people.csv', mode='w+', newline='\n') as file:
    writer = csv.writer(file)
    writer.writerow(['Name', 'Age', 'City'])
    writer.writerow(['Alice', 30, 'New York'])
    writer.writerow(['Bob', 25, 'Los Angeles'])
    writer.writerow(['Charlie', 35, 'Chicago'])
    file.seek(0)
    reader = csv.reader(file)   
    for row in reader:
        print(row)
