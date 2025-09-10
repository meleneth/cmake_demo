#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <CLI/CLI.hpp>

#include "secondary.hpp"

int main(int argc, char *argv[]){
  bool debug = false;
  std::string filename;
  CLI::App app{"some_program"};

  app.add_flag("-d,--debug", debug, "Enable debug logging");
  CLI11_PARSE(app, argc, argv);

  spdlog::set_level(debug ? spdlog::level::debug : spdlog::level::info);
  spdlog::set_pattern("[%H:%M:%S] [%^%l%$] %v");
  spdlog::info("Starting up...");
  spdlog::debug("DEBUG MODE ACTIVE...");

  secondary_foo();
  return 0;
}
