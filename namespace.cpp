#include<iostream>
using namespace std;
namespace F{
    float x=9;
}
namespace G{
    using namespace F;
    float y=2.0;
    namespace INNER_G{
        float z=10.01;
    }
}
int main(){
    float x=19.1;
    using namespace G::INNER_G;\
    cout<<F::x<<"\n";
    cout<<G::y<<"\n";
    return 0;

}