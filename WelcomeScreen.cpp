#include "WelcomeScreen.h"

#include <string>
#include <string>
#include <iostream>

using namespace std;

class WelcomeScreen
{
public:
    void print() {
        cout << R"(

   _____         _           _                     _                                       
  / ____|       | |         | |                   | |                                      
 | (___    ___  | | __ ___  | |__    __ _  _ __   | |__   _   _                            
  \___ \  / _ \ | |/ // _ \ | '_ \  / _` || '_ \  | '_ \ | | | |                           
  ____) || (_) ||   <| (_) || |_) || (_| || | | | | |_) || |_| |                           
 |_____/  \___/ |_|\_\\___/ |_.__/  \__,_||_| |_| |_.__/  \__, |                           
                                                           __/ |                           
                                                          |___/                            
  _____                     _         _  _            _  __           _        _           
 |  __ \                   (_)       (_)| |          | |/ /          (_)      | |          
 | |  | |  ___   _ __ ___   _  _ __   _ | | __ __ _  | ' /  ___  ____ _   ___ | | __ __ _  
 | |  | | / _ \ | '_ ` _ \ | || '_ \ | || |/ // _` | |  <  / _ \|_  /| | / __|| |/ // _` | 
 | |__| || (_) || | | | | || || | | || ||   <| (_| | | . \| (_) |/ / | || (__ |   <| (_| | 
 |_____/  \___/ |_| |_| |_||_||_| |_||_||_|\_\\__,_| |_|\_\\___//___||_| \___||_|\_\\__,_| 
                                                                                           
                                                                                           
  __   ___  ____  ______  __  _____                                                        
 /_ | / _ \|___ \|____  |/_ || ____|                                                       
  | || (_) | __) |   / /  | || |__                                                         
  | | \__, ||__ <   / /   | ||___ \                                                        
  | |   / / ___) | / /    | | ___) |                                                       
  |_|  /_/ |____/ /_/     |_||____/                                                        
                                                                                           
                                                                                           
press Enter to continue :)   
)" << '\n';
    }

};