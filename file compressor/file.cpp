// //taking file as input from the user 
// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     std::string filename;
//     std::cout << "Enter the filename: ";
//     std::cin >> filename;

//     std::ifstream inputFile(filename); // Open file specified by user
    
//     if (!inputFile) {
//         std::cerr << "Unable to open file " << filename;
//         return 1; // Exit if file opening failed
//     }
    
//     std::string line;
//     while (std::getline(inputFile, line)) { // Read each line from the file
//         std::cout << line << std::endl; // Output each line to the console (or process it)
//     }
    
//     inputFile.close(); // Close the file when done
    
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter the string name :  " << std::flush;
    getline(cin, name);

    cout << "\nUser name is : " <<  name << endl;

    return 0;
}
