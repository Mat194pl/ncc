#ifndef TEST_PARAMS_HPP
#define TEST_PARAMS_HPP

namespace App
{
    class CTestClass
    {
    public:
        void CorrectMethod(int t_goodParam);
        void BadMethod(int badParam);  // This should fail - missing t_ prefix
    };
}

#endif
