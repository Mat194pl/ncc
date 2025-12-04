#ifndef TEST_METHOD_HPP
#define TEST_METHOD_HPP

namespace App
{
    class TestClass
    {
    public:
        void correctMethod(int t_goodParam)
        {
            // Correct implementation
            bool correctLocalVar = true;
        }

        void BadMethod(int badParam)  // This should fail - missing t_ prefix
        {
            // Incorrect implementation
            bool bad_local_var = false;  // This should fail - not lowercase
        }
    };
}

#endif
