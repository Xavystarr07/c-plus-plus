#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    Point(int xx, int yy) : x(xx), y(yy) {}
    int x;
    int y;
};

struct Image {
    int width;
    int height;
    std::vector<int> data; // Linear storage for pixels

    Image(size_t w, size_t h) : width(w), height(h), data(w * h, 0) {}

    void makeFillCircle(const Point& p, int radius) {
        // Iterate over each pixel in the image
        for (int i = 0; i < width; ++i) {
            for (int j = 0; j < height; ++j) {
                // Test if the pixel is inside the circle
                if ((i - p.x) * (i - p.x) + (j - p.y) * (j - p.y) < radius * radius) {
                    // Set the pixel to 1 if inside the circle
                    data[j * width + i] = 1;
                }
            }
        }
    }
};

std::ostream& operator<<(std::ostream& os, const Image& img) {
    os << "P1\n" << img.width << " " << img.height << "\n";
    for (auto el : img.data) {
        os << el << " ";
    }
    return os;
}

int main() {
    Image img(100, 100);
    img.makeFillCircle(Point(60, 40), 30); // first big circle
    img.makeFillCircle(Point(20, 80), 10); // second big circle
    std::cout << img << std::endl; // the output is the PBM file

    return 0;
}

