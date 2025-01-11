/*#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <getopt.h>

struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude;
    double Longitude;

    // Equality operator for CityRecord
    bool operator==(const CityRecord& other) const {
        return Name == other.Name;
    }
};

// Custom hash function for CityRecord
namespace std {
    template<>
    struct hash<CityRecord>
    {
        size_t operator()(const CityRecord& key) const {
            return hash<string>()(key.Name);
        }
    };
}

int main()
{
    // Example code commented out
    // std::vector<CityRecord> cities;
    // cities.emplace_back(CityRecord{"Melbourne",5000000,2.4,9.1});
    // cities.emplace_back(CityRecord{"Toronto",5000000,2.4,9.1});
    // cities.emplace_back(CityRecord{"London",5000000,2.4,9.1});
    // cities.emplace_back(CityRecord{"Paris",5000000,2.4,9.1});
    // cities.emplace_back(CityRecord{"Berlin",5000000,2.4,9.1});

    std::unordered_map<CityRecord, uint32_t> foundedMap;
    std::unordered_map<std::string, CityRecord> cityMap;

    cityMap["Melbourne"] = CityRecord{"Melbourne", 5000000, 2.4, 9.1};
    cityMap["Toronto"] = CityRecord{"Toronto", 5000000, 2.4, 9.1};
    cityMap["London"] = CityRecord{"London", 5000000, 2.4, 9.1};
    cityMap["Paris"] = CityRecord{"Paris", 5000000, 2.4, 9.1};
    cityMap["Berlin"] = CityRecord{"Berlin", 5000000, 2.4, 9.1};


    const auto& cities = cityMap;
   /* if (const auto it = cities.find("Berlin"); 
    it != cities.end()) {
	const CityRecord& berlinData = it->second;
	// ...
}

    if (cities.find("Berlin") != cities.end())

    {
        const CityRecord& berlinData = cities.at("Berlin");
         std::cout << "Berlin Population: " << berlinData.Population << std::endl;

    //berlinData.Name = "Berlin";
    //berlinData.Population = 5;
    }
    for(auto& [name,city]: cityMap)

    {
        //const std::string& name = kv.first;
        //CityRecord& city = kv.second;
       std::cout << name << "\n Population" << city.Population << std::endl;
    }
   std::cin.get();

    return 0;
}*/
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <getopt.h>

struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude;
    double Longitude;

    // Equality operator for CityRecord
    bool operator==(const CityRecord& other) const {
        return Name == other.Name;
    }
};

// Custom hash function for CityRecord
namespace std {
    template<>
    struct hash<CityRecord>
    {
        size_t operator()(const CityRecord& key) const {
            return hash<string>()(key.Name);
        }
    };
}

int main()
{
    // Create an unordered_map to store CityRecord instances with city names as keys
    std::unordered_map<std::string, CityRecord> cityMap;

    // Insert city records into the map
    cityMap["Melbourne"] = CityRecord{"Melbourne", 5000000, 2.4, 9.1};
    cityMap["Toronto"] = CityRecord{"Toronto", 5000000, 2.4, 9.1};
    cityMap["London"] = CityRecord{"London", 5000000, 2.4, 9.1};
    cityMap["Paris"] = CityRecord{"Paris", 5000000, 2.4, 9.1};
    cityMap["Berlin"] = CityRecord{"Berlin", 5000000, 2.4, 9.1};

    // Find and print information about Berlin
    if (cityMap.find("Berlin") != cityMap.end())
    {
        const CityRecord& berlinData = cityMap.at("Berlin");
        std::cout << "Berlin Population: " << berlinData.Population << std::endl;
    }

    // Iterate through the city map and print information about each city
    for (const auto& [name, city] : cityMap)
    {
        std::cout << name << "\nPopulation: " << city.Population << std::endl;
    }

    std::cin.get();

    return 0;
}

