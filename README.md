# CS300-Project-Two
# Competency

In this project, you will demonstrate your mastery of the following competency:

    Develop code using algorithms and data structures to solve basic programming problems

# Scenario
The academic advisors in the Computer Science department at ABCU are very happy with the planning and design you have completed for the advising assistance software. They have decided they would like you to move forward with writing the code for the application so the department advisors can start using this to help when they talk with students.
Directions

All of your coding will be completed in the integrated development environment (IDE). Additional references on the use of this IDE are linked in the Supporting Materials section. As you begin coding, you will be using the data structure that you recommended in Project One to complete the following.

*    Input: Design code to correctly read the course data file. The program you will submit will be a command-line program written in C++. You will prompt the user to ask for the file name that contains the course data and read that file into course objects that are stored in your chosen data structure. Your data structure will hold course objects.

*    Menu: Design code to create a menu that prompts a user for menu options. The menu should include the following options:
        Load Data Structure: Load the file data into the data structure. Note that before you can print the course information or the sorted list of courses, you must load the data into the data structure.
        Print Course List: This will print an alphanumeric list of all the courses in the Computer Science department.
        Print Course: This will print the course title and the prerequisites for any individual course.
        Exit: This will exit you out of the program.

*    Loading Data Structure: Develop working code to load data from the file into the data structure.

*    Course List: Develop working code to sort and print out a list of the courses in the Computer Science program in alphanumeric order (including all math courses). To print out a course list, use the pseudocode you created previously to guide your work. Then, create code that will allow advisers to print a course list in alphanumeric order. Remember that this code should do the following:
        Sort the course information alphanumerically from lowest to highest.
        Print the sorted list to a display.

*    Course Information: Develop working code to print course information. This code should allow users to look up a course and print out information about its title and prerequisites. Your program will need to prompt the user to enter the courseNumber. You will then print out the name of the course along with the prerequisite courseNumbers and titles. See Project Two Sample Program Output in the Supporting Documents section.

*    Industry Standard Best Practices: Apply industry standard best practices in code design. Your program should display an error message when user input does not fall within parameters. You should also use in-line comments and appropriate naming conventions to enhance readability and maintainability.

# Approach
I developed psueodo code for three different data types to represent the information. Then I used Big-O runtime analysis to determine which datatype was optimal for the problem. 

# Roadblocks
My psuedocode revealed design flaws when it came to coming up with an implementations between vector, hash table, and binary search trees. I tried to use the same sort and search method for all three but found that I could have simplified the complexity of some with linear searches instead. 
In the end the flaws did not impact the final decision to use a vector as the backing structure as the hash table and binary search trees had other drawbacks that a redesign couldn't overcome. However during implementation, I changed from a MergeSort to an Insertion Sort when implementing the vector.

# Lessions Learned
Overall I've learned that pseudocode is useful for catching design problems before implementation. Implementation went more smoothly as I followed the pseudocode. 
I also learned that inline code comments can really help explain something that is not obvious to another reader.

