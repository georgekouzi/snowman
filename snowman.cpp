#include "snowman.hpp"
#include <iostream> 

using namespace std;
const int snow = 8;
    enum snowMan { Hat=0, Nose=1,LeftEye=2,RightEye=3,LeftArm=4,RightArm=5,Torso=6,Base=7 };

string ariel::snowman(int num){

string print=to_string(num);
if (print.length()!=snow){
 throw invalid_argument("The number should contain exactly 8 numbers");
}
string snow_man;

for(int i=0;i<print.length();i++){

if((int)(print.at(i)-'0')<1 || (int)(print.at(i)-'0')>4){
 throw invalid_argument("Each number should be between 1 and 4");
}
switch(i){

case Hat:
if(print.at(LeftArm)!='4'){
snow_man+=ariel::put_Hat(print.at(i)," ");
}
else{
snow_man+=ariel::put_Hat(print.at(i));
}
break;

case LeftEye://put_LeftEye
if(print.at(LeftArm)=='2'){
snow_man+=ariel::put_LeftArm('2')+ariel::put_LeftEye(print.at(i))+ariel::put_Nose(print.at(Nose));;
}
else if(print.at(LeftArm)!='4'){
snow_man+= ariel::put_LeftEye(print.at(i)," ")+ariel::put_Nose(print.at(Nose));
}
else{
snow_man+= ariel::put_LeftEye(print.at(i))+ariel::put_Nose(print.at(Nose));
}
break;

case RightEye://put_RightEye
if(print.at(RightArm)=='2'){
snow_man+= ariel::put_RightEye(print.at(i))+put_RightArm('2')+"\n";

}
else{
snow_man+= ariel::put_RightEye(print.at(i))+"\n";
}
break;

case LeftArm://put_LeftArm
if(print.at(i)=='2'){
snow_man+=ariel::put_Torso(print.at(Torso)," ");
}
else if (print.at(i)=='4'){
snow_man+=ariel::put_Torso(print.at(Torso));
}
else{
snow_man+= ariel::put_LeftArm(print.at(i))+ariel::put_Torso(print.at(Torso));
}
break;

case RightArm://put_RightArm
if(print.at(i)!='2'){
snow_man+= ariel::put_RightArm(print.at(i))+"\n";
}
else{
snow_man+="\n";
}
break;

case Base:
if (print.at(LeftArm)!='4'){
snow_man+= ariel::put_Base(print.at(i)," ");
}
else{
snow_man+= ariel::put_Base(print.at(i));
}
break;

default:
break;


}
}

return snow_man;
} 



string ariel:: put_Hat(char n ,string const & s){
if(n=='1'){return s+"_===_\n";}
if(n=='2') {return s+" ___\n"+s+".....\n";}
if(n=='3') {return s+"  _\n"+s+" /_\\\n";}
return s+" ___\n"+s+"(_*_)\n";
}

string ariel:: put_Nose(char n){

if(n=='1'){return ",";}
if(n=='2') {return ".";}
if(n=='3') {return "_";}
return " ";
}

string ariel:: put_LeftEye(char n,string const& s){

if(n=='1'){return s+"(.";}
if(n=='2') {return s+"(o";}
if(n=='3') {return s+"(O";}
return s+"(-";
}
string ariel:: put_RightEye(char n){

if(n=='1'){return ".)";}
if(n=='2') {return "o)";}
if(n=='3') {return "O)";}
return "-)";
}
string ariel:: put_LeftArm(char n){
 
if(n=='1'){return "<";}
if(n=='2') {return "\\";}
if(n=='3') {return "/";}
return "";

}
string ariel:: put_RightArm(char n){
 
if(n=='1'){return ">";}
if(n=='2') {return "/";}
if(n=='3') {return "\\";}
return "";
}
string ariel:: put_Torso(char n,string const& s){
 
if(n=='1'){return s+"( : )";}
if(n=='2') {return s+"(] [)";}
if(n=='3') {return s+"(> <)";}
return s+"(   )";
}
string ariel:: put_Base(char n,string const& s){
 
if(n=='1'){return s+"( : )";}
if(n=='2') {return s+"(\" \")";}
if(n=='3') {return s+"(___)";}
return s+"(   )";
}





