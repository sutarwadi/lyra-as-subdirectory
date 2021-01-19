#include <lyra/lyra.hpp>

int main(int argc, char** argv)
{
  int width = 0;
  auto cli = lyra::cli()
      | lyra::opt(width, "width")
          ["-w"]["--width"]("How wide should it be?");

  auto result = cli.parse({ argc, argv });
  if (!result) {
    std::cerr << "Error in command line: " << result.errorMessage() << std::endl;
    exit(1);
  }
  return 0;
}
