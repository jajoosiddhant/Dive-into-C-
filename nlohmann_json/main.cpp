#include <iostream>
#include <fstream>
#include <iomanip>

#include <nlohmann/json.hpp>

using json = nlohmann::json;



int main()
{
    
    json obj;
    std::ifstream file("/home/jajoosiddhant/data/settingsServer.json");
    if(file.good()) {
        file >> obj;
        file.close();
    }

    if (obj["Car"].contains("Make"))
    {
        std::cout <<  obj["Car"].contains("Make") << std::endl;
    }
/*
    std::ofstream ofile("/home/jajoosiddhant/data/production/settingsServer.json");
    if(ofile.good()) {
        ofile << obj.dump(4);
        // OR
        // ofile << std::setw(4) << obj
        // The .dump is overloads setw(4) to give use the same functionality.
        // I think the setw(4) is also overloaded to give us pretty print json file wherever 8 spaces are required.
        ofile.close();
    }
*/
    obj["Car"]["Make"] = "Honda";

    std::ofstream ofile("/home/jajoosiddhant/data/settingsServer.json");
    if(ofile.good()) {
        ofile << obj.dump(4);
        // OR
        // ofile << std::setw(4) << obj
        // The .dump is overloads setw(4) to give use the same functionality.
        // I think the setw(4) is also overloaded to give us pretty print json file wherever 8 spaces are required.
        ofile.close();
    }

}
