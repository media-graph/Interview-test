#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <cjson/cJSON.h>

#define API_KEY "your_api_key_here"  
#define CITY "Montreal"
#define API_URL "http://api.openweathermap.org/data/2.5/weather?q=" CITY "&appid=" API_KEY "&units=metric"

// Structure to store API response
struct Memory {
    char *response;
    size_t size;
};

// Function to fetch weather data from an API
char *fetch_weather_data() {
    // 1. Allocate memory dynamically for storing API response.
    // 2. Initialize an HTTP request using libcurl.
    // 3. Set up the request URL (e.g., OpenWeatherMap API).
    // 4. Perform the HTTP request and store the response in allocated memory.
    // 5. Handle any request failures or errors.
    // 6. Return the pointer to the allocated response string.
    
    return NULL;  // Placeholder: Replace with actual response pointer.
}

// Function to parse the JSON response and extract the temperature
void parse_weather_data(const char *json) {
    // 1. Validate if the input JSON string is NULL or empty.
    // 2. Parse the JSON string using a JSON library (e.g., cJSON).
    // 3. Extract the "temp" field from the "main" object.
    // 4. Print the extracted temperature value in Celsius.
    // 5. Handle any JSON parsing errors.

    printf("Extracted temperature: (placeholder) °C\n");  // Replace with actual output.
}

// Main function
int main() {
    printf("Fetching weather data...\n");

    // 1. Call fetch_weather_data() to get the API response.
    // 2. Check if the response is valid (not NULL).
    // 3. Pass the response to parse_weather_data() for processing.
    // 4. Free the dynamically allocated memory after processing.

    return 0;
}
