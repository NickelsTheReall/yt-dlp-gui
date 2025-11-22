#include <iostream>
#include <cstdlib>
#include <string>
void _main() {
    std::string _enteredURL;
    std::cout << "===================\nWelcome to YT-DLP-GUI, type the complete YouTube URL of the video you want to download, it will be downloaded in the directory of this yt-dlp-gui.exe: ";
    std::cin >> _enteredURL;
    std::string command = "yt-dlp " + _enteredURL;
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "Download completed successfully!\n";
    } else {
        std::cout << "Download failed. Please check the URL or yt-dlp installation.\nyt-dlp need to be in the same folder.";
    }
}
int main() {
    _main();
    return 0;
}
