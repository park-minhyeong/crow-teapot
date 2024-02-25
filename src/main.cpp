#include "crow.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")
  ([]() {
    crow::json::wvalue x;
    x["message"] = "Hello, World!";
    return x;
  });

  app.port(3000).multithreaded().run();
}
