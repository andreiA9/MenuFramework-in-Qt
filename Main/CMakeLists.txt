set(Qt5_Application_Components Core REQUIRED)
find_package(Qt5 COMPONENTS ${Qt5_Application_Components})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTORCC ON)

set(Main_RES
    Resources/resources.qrc
    )

add_executable(Main
    # add the RESOURCES
    # RESURSELE doar aici merg
    ${Main_RES}
    main.cpp
    )

# Find the Qt5 package, make sure to set CMAKE_PREFIX_PATH in your environment variables
# to the install path of Qt5 if cmake does not find it.
find_package(Qt5 COMPONENTS Core REQUIRED)

# Link the required Qt5 module
target_link_libraries(Main
    Qt5::Core
    BuildManager_static)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/Resources/
        DESTINATION ${PROJECT_BINARY_DIR}/Main/Resources/)
