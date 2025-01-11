#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<string>

struct CityRecord
{
    std::string Name;
    uint64_t  Population;
    double Latitude;
    double Longitude;

    
};

namespace std{
    template<>
    struct hash<CityRecord>
    {
        size_t operator()(const CityRecord& key)
        {
            return hash<std::string>()(key.Name);
        }
    };
}
int main()
{
   /* std::vector<CityRecord> cities;
    cities.emplace_back(CityRecord{"Melbourne",5000000,2.4,9.1});
    cities.emplace_back(CityRecord{"Toronto",5000000,2.4,9.1});
    cities.emplace_back(CityRecord{"London",5000000,2.4,9.1});
    cities.emplace_back(CityRecord{"Paris",5000000,2.4,9.1});
    cities.emplace_back(CityRecord{"Berlin",5000000,2.4,9.1});*/
    

    std::unordered_map<CityRecord,uint32_t> foundedMap;
    std::unordered_map<std::string,CityRecord> cityMap;

    cityMap["Melbourne"] = CityRecord {"Melbourne",5000000,2.4,9.1};
    cityMap["Toronto"] = CityRecord {"Toronto",5000000,2.4,9.1};
    cityMap["London"] = CityRecord {"London",5000000,2.4,9.1};
    cityMap["Paris"] = CityRecord {"Paris",5000000,2.4,9.1};
    cityMap["Berlin"] = CityRecord {"Berlin",5000000,2.4,9.1};
    

    CityRecord& berlinData =  cityMap["Berlin"];
    std::cout << "Berlin Population: " << berlinData.Population << std::endl;
    
}