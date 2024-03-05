
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
add_library(Api ${SOURCES})

# Find the Qt6 packages
find_package(Qt6HttpServer REQUIRED)
find_package(Qt6 COMPONENTS Network REQUIRED)

# Include the necessary Qt modules
target_link_libraries(Api PRIVATE Qt6::Network)
target_link_libraries(Api PRIVATE Qt6::HttpServer)
# Header Files
target_include_directories(Api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

