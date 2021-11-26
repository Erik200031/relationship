#ifndef NAME_H
#define NAME_H
class Name{
    public:
    void set_name(std::string name)
    {
        this->name=name;
    }
    std::string get()const
    {
        return name;
    }
    private:
    std::string name;
};
#endif //NAME_H