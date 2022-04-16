#ifndef VENDING_MACHINE_MICROSERVICES_BeveragePreferenceHANDLER_H
#define VENDING_MACHINE_MICROSERVICES_BeveragePreferenceHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/BeveragePreferenceService.h"


#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace vending_machine{

class BeveragePreferenceServiceHandler : public BeveragePreferenceServiceIf {
 public:
    BeveragePreferenceServiceHandler();
		  
  ~BeveragePreferenceServiceHandler() override=default;

  void getBeverage(std::string& _return,const BeverageType::type btype) override;
};
  
 //private:
 // ClientPool<ThriftClient<BeveragePreferenceServiceClient>> *_BeveragePreference_client_pool;


// Constructor
 BeveragePreferenceServiceHandler::BeveragePreferenceServiceHandler() {
		
}

// Remote Procedure "PlaceOrder"
void BeveragePreferenceServiceHandler::getBeverage(std::string& _return,BeverageType::type btype){
     // Your implementation goes here
     printf("BeveragePreference\n");

     

    
    
   // 3. business logic
            std::string hBeverage[3] = {"cappuccino", "latte", "espresso"};
	    std::string cBeverage[3] = { "lemonade", "ice tea", "soda"};


	    srand(time(0));
	    
	    std::cout << "Beverage TYPE" <<btype<< std::endl;

	    if ( btype == BeverageType::type::HOT)
		     _return = hBeverage[rand() % 3 ];
	    else
		    _return = cBeverage[rand() % 3];

}
}




//#endif


 // namespace vending_machine


#endif //VENDING_MACHINE_MICROSERVICES_BEVERAGEPREFERENCEHANDLER_H

