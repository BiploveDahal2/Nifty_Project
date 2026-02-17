#include <iostream>
#include <dirent.h> 
#include <vector>
#include <string>

using namespace std;

int main() {
    string sig_dir = "Signature_files"; 
    DIR *dir;
    struct dirent *entry;

    // 1. Opening the directory
    dir = opendir(sig_dir.c_str());

    if (dir == NULL) {
        cout << "Error: Could not open directory " << sig_dir << endl;
        return 1;
    }

    cout << "Scanning directory: " << sig_dir << "..." << endl;
    cout << "------------------------------------------" << endl;

    // 2. Loop through every file inside
    while ((entry = readdir(dir)) != NULL) {
        string filename = entry->d_name;


        // 3. Filter for .stats files specifically
        // We ignore "." (current dir) and ".." (parent dir)
        if (filename.find(".stat") != string::npos) {
            cout << "Found signature file: " << filename << endl;
            
            // This is where you will call your function to:
            // a) Read the file content
            // b) Compare it to the mystery text
        }
    }

    

    
    closedir(dir);
    
    cout << "------------------------------------------" << endl;
    cout << "Scan complete." << endl;

    return 0;
}
