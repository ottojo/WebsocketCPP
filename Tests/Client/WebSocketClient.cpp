#include <gtest/gtest.h>

#ifdef USE_INSTALLED_LIB
#include <SopraNetwork/WebSocketClient.hpp>
#else
#include <Client/WebSocketClient.hpp>

#endif

TEST(WebSocketClient, ConstructDestruct) {
    EXPECT_NO_THROW((websocket::network::WebSocketClient{"localhost", "/", 8080, "test"}));
}
