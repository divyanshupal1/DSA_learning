#include <cstdlib> // Include the header for system()

int main() {
    // Command to change directory
    const char* changeDirCommand = "cd /D D:/python && pycharm .";

    // Execute the change directory command
    int changeDirResult = system(changeDirCommand);

    // Check if changing directory was successful
    if (changeDirResult != 0) {
        // Handle error if changing directory failed
        // For example, print an error message
        return 1;
    }
    // Both commands executed successfully
    return 0;
}