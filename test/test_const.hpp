#ifndef TEST_CONST_HPP
#define TEST_CONST_HPP

namespace App
{
    class CTestConst
    {
    private:
        static constexpr const char *TAG{"Test"};  // OK - uppercase
        static constexpr const char *lowercase{"Test"};  // Should fail - not uppercase
        static constexpr int MAX_VALUE = 100;  // OK - uppercase
        static constexpr int minValue = 10;  // Should fail - not uppercase
    };
}

#endif
