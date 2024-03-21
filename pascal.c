// PA2 Pascal's Triangle
// NAME: Linnea P. Castro
// DATE: 10 NOV 2022
// COURSE: CSE 215
// ASSIGNMENT: PA2

/* SYNOPSIS: 
This program prints the first 32 lines of Pascal's Triangle.  A [33][33] array named row will be used to store elements 
of the triangle as they are calculated.  New elements of the array are calculated using elements of the previous row.  
I used the variable rownumber to track the row number, and the variable i to access the horizontal elements of each row.
I hardwired the contents of the first and second row, filling in the 1's manually, and then beginning the for loop
to calculate and print rows 3-32.  

The for loop is broken into three parts.  The first part prints the first 1 on each row, this remains static for each
row.  The middle part is a while loop that fills in everything in the row between the bookending 1's.  The second
element of the row is calculated by looking at the previous row (rownumber-1) and then accessing the [i-1] and [i]th 
elements, and summing these together.  i is then incremented to calculate a new sum pair, as long as i < rownumber.  
When i < rownumber, the last part of the for loop kicks in to place and print the last element of the row, a final 1. 
i resets to 1 before heading into the next iteration of the for loop, when rownumber is incremented. 

Skills practiced: populating arrays and learning how to access specific elements within the array. Deciding how many
separate variables to use. How to structure loop to print a given row, and how to formularize everything between the 
1's on each end. Making arrays big enough to hold data.  Deciding how to number arrays to make it straighforward to 
conceptualize. 
*/

#include <stdio.h>

void main()
{
int row[33][33]; // Not using the 0th horizontal or vert parts of the array

int rownumber; // Using this variable for row number
rownumber = 3; // Beginning at ROW 3 because I'm hardwiring ROW 1 and ROW 2

int i; // Variable for numbered elements within each row
i = 1; // Initializing to 1 to refer to 1st element in row, incrementing this moves along elements horizontally

row[1][1] = 1; // Hardwiring contents of ROW 1
row[2][1] = 1; // Hardwiring contents of ROW 2, element 1
row[2][2] = 1; // Hardwiring contents of ROW 2, element 2

printf("%d\n", row[1][1]); // Printing ROW 1
printf("%d %d\n", row[2][1], row[2][2]); // Printing ROW 2

for( rownumber = 3 ; rownumber <= 32 ; rownumber++){ // Starting at ROW 3 and going until we complete ROW 32
  row[rownumber][i] = 1; // First element of every row is 1
  printf("%d ", row[rownumber][i]); // Print first 1 of the row
  i++; // increment i to next element of row array

  while( i > 1 && i < rownumber){ // For all the stuff in the middle, not the bookending 1's
    row[rownumber][i]=(row[rownumber-1][i-1]+row[rownumber-1][i]); // Using prev row w current (i-1) and i values to populate row
    printf("%d ", row[rownumber][i]); // Print that element of the row
    i++; // And increment i so we can travel along the previous row's values to get a new sum pair
    }

  row[rownumber][rownumber] = 1; // Last item of each row is a 1, row number matches number of elements
  printf("%d\n", row[rownumber][rownumber]); // Print last 1 of row plus newline
  i = 1; // Reset value of i to 1 for fresh start on next row
  }

}
