set(Qt5_Application_Components Core Widgets REQUIRED)
find_package(Qt5 COMPONENTS ${Qt5_Application_Components})

set(BuildTool_src
    GccController.cpp
    GccController.h
    GccCommandGenerator.cpp
    GccCommandGenerator.h
    Process.h
    )

add_library(BuildTool_static STATIC
    ${BuildTool_src}
    )

target_link_libraries(BuildTool_static
    Qt5::Core
    )

target_include_directories(BuildTool_static
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )

