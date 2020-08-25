cmake_minimum_required(VERSION 2.8)
project(scpt-examples Go)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(multiEchoTCPClientGo client/multiEchoTCPClient.go)
add_executable(multiEchoTCPServerGo server/multiEchoTCPServer.go)
