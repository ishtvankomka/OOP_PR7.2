#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.h"
TEST_CASE( "Arguments initialized") {
    srand((unsigned int)time(NULL));
    list<int> l1 = { 4, 7, 7, 9, 7, 8, 7, 8 };
    list<int> l2 = { 4, 9, 8, 8};

    RemoveIf(l1, 7);
        
    REQUIRE( l1 == l2 );
}
