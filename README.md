# Ekomobong's Random Pairing from CSV File

This C++ program reads a CSV file containing participant names and randomly pairs them up. It assumes that the CSV file has a header row, and one of the columns is labeled "Full Name."

## Prerequisites

Before running this program, make sure you have the following:

- A CSV file named "participants_responses.csv" in the same directory as the executable. This file should contain a list of participant names, with a header row that includes the column "Full Name."

## How to Use

1. Compile the program using a C++ compiler (e.g., g++):

   ```shell
   g++ -o random_pairing assemble.cpp
   ```

2. Run the program:

   ```shell
   ./random_pairing
   ```

3. The program will read the CSV file, randomly shuffle the participant names, and create pairs of participants. If there is an odd number of participants, one participant will be paired with "No partner available."

4. The program will display the pairs on the console.

## Example Output

```
Pair: Alice Johnson and Bob Smith
Pair: Carol Davis and David Lee
Pair: Eve Brown and Frank Wilson
Pair: No partner available
```

## Author

[Ekomobong Ekanem](https://github.com/basticks02)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details.