 #include <iostream>

int main()

{
for (int y = 0; y < 10; y++)
{
for (int x = 0; x < 10; x++)
{
if ((x == 0) || (x == 9) || ((y == 0) || (y == 9)))

{
std::cout « "##";
}
else std::cout « " ";
}
std::cout « std::endl;
}
}