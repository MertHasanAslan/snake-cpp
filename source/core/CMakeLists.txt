project(SnakeCoreLib)
include(CMakePrintHelpers)
file (GLOB_RECURSE CORE_HEADERS CONFIGURE_DEPENDS "./public/*.h")
file (GLOB_RECURSE CORE_SOURCES CONFIGURE_DEPENDS "./private/*.cpp")

add_library(${PROJECT_NAME} STATIC ${CORE_HEADERS} ${CORE_SOURCES})

target_include_directories(${PROJECT_NAME} 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/public
    ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/private
)

target_link_libraries(${PROJECT_NAME} PUBLIC ExternalLibrary)