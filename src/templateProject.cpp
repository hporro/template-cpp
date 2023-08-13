#include "templateProject.h"

namespace TemplateProject
{
    int fibonacci(int number)
    {
        return number < 2 ? number : fibonacci(number - 1) + fibonacci(number - 2);
    }

    int A::give2() { return 2; }
}