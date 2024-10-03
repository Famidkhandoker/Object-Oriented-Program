#include <iostream>
#include <string>
using namespace std;
class Movie {
private:
string title; // Movie title
float rating; // Movie rating (0.0 to 10.0)
public:
// Constructor
Movie(const string title, float rating) : title(title), rating(rating) {}
// Friend declaration
friend class StreamingPlatform;
};
class StreamingPlatform {
public:
// Method to display the rating of a movie
void displayRating(const Movie movie) {
cout << "Movie: " << movie.title << ", Rating: " << movie.rating <<
std::endl;
}
};
int main() {
// Create a Movie object
Movie movie("Inception", 8.8f);
// Create a StreamingPlatform object
StreamingPlatform platform;
// Display the movie rating
platform.displayRating(movie);
return 0;
}
