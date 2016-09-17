# version and project naming

cmake_minimum_required (VERSION 2.6)
project (Dolphin_Matchmaking)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -stdlib=libc++ -pthread")

# get main project
set(SRCROOT ${PROJECT_SOURCE_DIR}/source)

set(SRC_DOLPHIN
	${SRCROOT}/Config.h
	${SRCROOT}/Config.cpp
	${SRCROOT}/Connector.cpp
	${SRCROOT}/Connector.h
	${SRCROOT}/Dolphin-Matchmaking-Server.cpp
	${SRCROOT}/GeoLocation.cpp
	${SRCROOT}/GeoLocation.h
	${SRCROOT}/Logger.cpp
	${SRCROOT}/Logger.h
	${SRCROOT}/Matchmaker.cpp
	${SRCROOT}/Matchmaker.h
	${SRCROOT}/PreferenceList.h
	${SRCROOT}/Player.cpp
	${SRCROOT}/Player.h
	${SRCROOT}/PlayerInfo.cpp
	${SRCROOT}/PlayerInfo.h
	${SRCROOT}/PlayerQueue.cpp
	${SRCROOT}/PlayerQueue.h
	${SRCROOT}/Server.cpp
	${SRCROOT}/Server.h
	${SRCROOT}/stdafx.cpp
	${SRCROOT}/stdafx.h
)

add_executable(Dolphin_Matchmaking ${SRC_DOLPHIN})


message("Seting up SFML")
add_definitions(-DSFML_STATIC)
# get extra libraries
set(LIBS_PATH ${PROJECT_SOURCE_DIR}/thirdparty/SFML/build/)

add_subdirectory(thirdparty/SFML)

include_directories (BEFORE thirdparty/SFML/include)



target_link_libraries(Dolphin_Matchmaking sfml-network sfml-system)
