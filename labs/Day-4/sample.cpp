#include "crow_all.h"

int main() {
    crow::SimpleApp app;  // Create a Crow application

    // Define a simple GET route
    CROW_ROUTE(app, "/hello")([]() {
        return "Hello, World!";
    });

    // Define a POST route
    CROW_ROUTE(app, "/add").methods(crow::HTTPMethod::POST)(
        [](const crow::request& req) {
            auto json_data = crow::json::load(req.body);
            if (!json_data)
                return crow::response(400, "Invalid JSON");

            int a = json_data["a"].i();
            int b = json_data["b"].i();
            int sum = a + b;

            crow::json::wvalue response;
            response["sum"] = sum;
            return crow::response(response);
        });

    // Start the server
    app.port(8080).multithreaded().run();
    return 0;
}
