import csv

with open('mnist_test.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    line_count = 0
    for row in csv_reader: 
        print(row[0])
        count = 1
        for r in range(1,29):
            for c in range(1,29):
                if (int(row[count]) < 50):
                    print(".", end="")
                else:
                    print("#", end="")
                count = count + 1
            print("")
