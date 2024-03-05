
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(Database ${SOURCES})


#find_package(Qt6 REQUIRED COMPONENTS Sql)
find_package(Qt6 COMPONENTS Core Sql REQUIRED)

#target_link_libraries(Database PRIVATE Qt6::Sql)
target_link_libraries(Database PRIVATE Qt6::Core Qt6::Sql pq)


# Header Files
target_include_directories(Database PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

