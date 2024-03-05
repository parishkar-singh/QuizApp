## api/CMakeLists.txt
#
## Set the source files for the API serve
project(Api)
##set(SERVER_SOURCES
##        server.cpp
##        # Add other source files as needed
##)
#file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
#
## Create the relational engine library
#add_library(Api ${SOURCES})
## Find the Qt6 packages
#find_package(Qt6 COMPONENTS Network REQUIRED)
#find_package(Qt6HttpServer REQUIRED)
#
## Create the library target for the API server
##add_library(Api ${SERVER_SOURCES})
#
## Link libraries
#target_link_libraries(Api PRIVATE Qt6::Network Qt6::HttpServer)

# api/CMakeLists.txt

# Set the source files for the API server
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
#set(SERVER_SOURCES
#        Api
#        )
# Create the library target for the API server
add_library(Api ${SOURCES})

# Find the Qt6 packages
find_package(Qt6HttpServer REQUIRED)
find_package(Qt6 COMPONENTS Network REQUIRED)

# Include the necessary Qt modules
target_link_libraries(Api PRIVATE Qt6::Network)
target_link_libraries(Api PRIVATE Qt6::HttpServer)
# Header Files
target_include_directories(Api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

