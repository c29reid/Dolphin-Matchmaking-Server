# version and project naming
cmake_minimum_required (VERSION 2.6)
project (Dolphin_Matchmaking)


# get main project
set(SRCROOT ${PROJECT_SOURCE_DIR}/source)

set(SRC_DOLPHIN
	${SRCROOT}/Connector.cpp
	${SRCROOT}/Connector.h
	${SRCROOT}/Dolphin-Matchmaking-Server.cpp
	${SRCROOT}/GeoLocation.cpp
	${SRCROOT}/GeoLocation.h
	${SRCROOT}/Logger.cpp
	${SRCROOT}/Logger.h
	${SRCROOT}/Matchmaker.cpp
	${SRCROOT}/Matchmaker.h
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


# get extra libraries
set(LIBS_PATH ${PROJECT_SOURCE_DIR}/thirdparty/SFML/build/)

include_directories ("${LIBS_PATH}/SFML/include")

target_link_libraries(Dolphin_Matchmaking sfml-network sfml-system)
