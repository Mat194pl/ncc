#pragma once

namespace App
{
    class TestClass
    {
    public:
        bool m_goodVariable;  // OK - lowercase with m_ prefix
        bool badVariable;     // This should fail - missing m_ prefix

        static bool s_goodStaticVar;  // OK - lowercase with s_ prefix
        static bool badStaticVar;     // This should fail - missing s_ prefix
    };
}