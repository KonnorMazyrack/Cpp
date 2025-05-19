#ifndef PROJECT_H
#define PROJECT_H

#include <string>

class Project {
public:
    Project();
    Project(const std::string& name, const std::string& description, double budget);

    const std::string& getName() const;
    const std::string& getDescription() const;
    double getBudget() const;

    void setName(const std::string& name);
    void setDescription(const std::string& description);
    void setBudget(double budget);

private:
    std::string mName;
    std::string mDescription;
    double mBudget;
};

#endif
