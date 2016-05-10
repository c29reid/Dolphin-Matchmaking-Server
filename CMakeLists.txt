# version and project naming
cmake_minimum_required (VERSION 2.6)
project (Dolphin_Matchmaking)


# get main project
set(SRCROOT ${PROJECT_SOURCE_DIR}/source)

set(SRC_DOLPHIN
	${SRCROOT}/Dolphin-Matchmaking-Server.cpp
	${SRCROOT}/stdafx.cpp
	${SRCROOT}/stdafx.h
)

add_executable(Dolphin_Matchmaking ${SRC_DOLPHIN})


# get extra libraries
set(LIBS_PATH ${PROJECT_SOURCE_DIR}/thirdparty/SFML/build/)

include_directories ("${LIBS_PATH}/SFML/include")

target_link_libraries(Dolphin_Matchmaking sfml-network sfml-system)
