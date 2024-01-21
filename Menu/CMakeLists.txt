set(Qt5_Application_Components Core REQUIRED)
find_package(Qt5 COMPONENTS ${Qt5_Application_Components})

set(MenuLib_sources
    Menu.cpp
    Menu.h
    )

add_library(MenuLib_static
    ${MenuLib_sources}
)

# Find the Qt5 package, make sure to set CMAKE_PREFIX_PATH in your environment variables
# to the install path of Qt5 if cmake does not find it.
find_package(Qt5 COMPONENTS Core REQUIRED)

target_link_libraries(MenuLib_static
    Qt5::Core
    )

target_include_directories(MenuLib_static
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )
