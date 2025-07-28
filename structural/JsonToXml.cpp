#include <iostream>
#include <memory>

/*
    Adapter Pattern
    SWC: Client (Method) - ClientInterface (Method) - Adapter (Wrapper) - Service (SpecialMethod)
*/
struct xml
{
    std::string element;
    std::string value;
};

struct json 
{
    std::string key;
    std::string value;
};

//ClientInterface Class
class IXmlClient
{
public:
    virtual ~IXmlClient() = default;
    virtual xml fromJson() const = 0;
};

//Service class
class JsonService
{
    private:
        std::string m_key;
        std::string m_val;

    public:
        void setJsonSchema(json file)
        {
            m_key = file.key;
            m_val = file.value;
        }

        json getJsonSchema() const
        {
            json ret;
            ret.key =   m_key;
            ret.value = m_val;
            return ret;
        }
};

//Adapter class
class Adapter : public IXmlClient
{
    private:
        JsonService* service;
    public:
        Adapter(JsonService* ser)
        {
            service = ser;
        }

        xml fromJson() const override
        {
            json jsonRet = service->getJsonSchema();
            xml  res;
            res.element =  jsonRet.key; 
            res.value   =  jsonRet.value; 
            return res;
        }
};

//Client method
void ClientCode(const IXmlClient* xmlClient)
{
    xml res = xmlClient->fromJson();
    std::cout << "\n" << "<" << res.element << ">" << res.value << "</" << res.element << ">" << "\n";
}

//App
int main()
{
    auto service = std::make_unique<JsonService>();
    json file = {"employee", "Seif"};
    service->setJsonSchema(file);

    auto ad = std::make_unique<Adapter>(service.get());
    ClientCode(ad.get());

    return 0;
}
