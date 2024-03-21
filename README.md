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
