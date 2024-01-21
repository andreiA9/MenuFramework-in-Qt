set(Qt5_Application_Components Core REQUIRED)
find_package(Qt5 COMPONENTS ${Qt5_Application_Components})

set(BuildManager_src
    BuildManager.cpp
    BuildManager.h
    )

add_library(BuildManager_static STATIC
    ${BuildManager_src}
)

target_link_libraries(BuildManager_static
    Qt5::Core
    BuildTool_static
    MenuLib_static
    )

target_include_directories(BuildManager_static
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )
