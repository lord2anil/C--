import csv

# Example data
my_list = [['2020-06-20 10:00:00.000', 'player1', 100],
           ['2020-06-20 10:00:10.000', 'player3', 100],
           ['2020-06-20 10:00:20.000', 'player2', 100],
           ['2020-06-20 10:00:30.000', 'player4', 100]]

# Write data to CSV file
with open('my_csv_file.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    for row in my_list:
        writer.writerow(row)

print("CSV file created successfully.")