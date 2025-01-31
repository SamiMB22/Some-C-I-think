#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

void printlyric() {
    std::vector<std::tuple<std::string, int, int>> lyric = {
        {"It's stuck with you forever, so promise you won't let it go", 500, 45},
        {"I'll trust the universe will always bring me to you", 700, 50},
        {"", 300, 0},
        {"", 500, 40},
        {"I'll imagine we fell in love", 700, 35},
        {"I'll nap under moonlight skies with you", 600, 30},
        {"I think I'll picture us, you with the waves", 500, 45},
        {"The ocean's colors on your face", 400, 50},
        {"I'll leave my heart with your air", 500, 40},
        {"So let me fly with you", 600, 30},
        {"Will you be forever with me?", 700, 50},
    };


    for (const auto& baris : lyric) {
        const std::string& teks = std::get<0>(baris);
        int delayBaris = std::get<1>(baris);
        int delayHuruf = std::get<2>(baris);

        for (char c : teks) {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(delayHuruf)); 
        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayBaris)); 
    }
}

int main() {
    printlyric();
    return 0;
}