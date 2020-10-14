  #include <iostream>

int main()
{
for (int y = 0; y < 10; y++)
{
for (int x = 0; x < 10; x++)
{


if (y > 9 - x) std::cout « "##";
else std::cout « "";

}
std::cout « std::endl;
}


}