#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Course {
    int courseID;
    char courseName[100];
    char instructor[100];
    int creditHours;
};

void addCourse() {
    struct Course courses;
    FILE *file=fopen("course_data.txt", "a");

    if (file==NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter course ID:\n");
    scanf("%d", &courses.courseID);
    printf("Enter course name:\n");
    scanf("%s", courses.courseName);
    printf("Enter instructor name:\n");
    scanf("%s", courses.instructor);
    printf("Enter total credit hours:\n");
    scanf("%d", &courses.creditHours);

    fprintf(file,"%d %s %s %d\n", courses.courseID, courses.courseName, courses.instructor, courses.creditHours);
    fclose(file);

    printf("The course has been successfully added.\n");
}

void deleteCourse(int courseID) {
    struct Course courses;
    int found=0;
    FILE *file=fopen("course_data.txt", "r");
    FILE *tempFile=fopen("temp_course_data.txt", "w");

    if (file== NULL) {
        printf("Error opening file.\n");
        return;
    }

    if (tempFile==NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    while (fscanf(file,"%d %s %s %d", &courses.courseID, courses.courseName, courses.instructor, &courses.creditHours) != EOF) {
        if (courses.courseID!= courseID) {
            fprintf(tempFile, "%d %s %s %d\n", courses.courseID, courses.courseName, courses.instructor, courses.creditHours);
        } else {
            found= 1;
        }
    }
    fclose(file);
    fclose(tempFile);

    remove("course_data.txt");
	rename("temp_course_data.txt", "course_data.txt"); 

    if (found) {
        printf("Course with ID %d deleted successfully.\n", courseID);
    } else {
        printf("Course with ID %d not found in file.\n", courseID);
    }
}

void display() {
    struct Course courses;
    FILE *file=fopen("course_data.txt", "r");

    if (file==NULL) {
        printf("No courses present in file.\n");
        return;
    }

    if (fgetc(file)==EOF) {
        printf("No courses present in the file.\n");
        fclose(file);
        return;
    }
    rewind(file);

    printf("Course Records:\n");
    printf("Course ID    Course Name   Instructor Name   Credit Hours\n");

    while (fscanf(file, "%d %s %s %d", &courses.courseID, courses.courseName, courses.instructor, &courses.creditHours)!=EOF) {
        printf("%d %s %s %d\n", courses.courseID, courses.courseName, courses.instructor, courses.creditHours);
    }
    fclose(file);
}

void search() {
    struct Course courses;
    char instructor[100];
    int found=0;
    FILE *file= fopen("course_data.txt", "r");

    if (file== NULL) {
        printf("No course recorded.\n");
        return;
    }

    printf("Enter instructor name to search by:\n ");
    scanf("%s", instructor);

    printf("Courses by the requested instructor: %s\n", instructor);
    while (fscanf(file, "%d %s %s %d", &courses.courseID, courses.courseName, courses.instructor, &courses.creditHours) != EOF) {
        if (strcmp(courses.instructor, instructor)==0) {
            printf("%d %s %s %d\n", courses.courseID, courses.courseName, courses.instructor, courses.creditHours);
            found=1;
        }
    }

    if (found!=1) {
        printf("No courses found by this instructor.\n");
    }
    fclose(file);
}

int main() {
    int choice;

    do {
        printf("Course Management System\n");
        printf("1. Add course \n");
        printf("2. Delete course\n");
        printf("3. Display courses\n");
        printf("4. Search course by instructor\n");
        printf("5. Exit\n");
        printf("Enter your choice:\n");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addCourse();
                break;
            case 2: {
                int courseID;
                printf("Enter the course ID to delete: ");
                if (scanf("%d", &courseID) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    while (getchar() != '\n');
                    continue;
                }
                deleteCourse(courseID);
                break;
            }
            case 3:
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

