QT += core widgets
TARGET = SmartMirror
TEMPLATE = app
SOURCES += main.cpp mainwindow.cpp Model.cpp APIFactory.cpp CurlHelper.cpp SpotifyAPI.cpp WeatherAPI.cpp MotionSensorThread.cpp
HEADERS += mainwindow.h Model.h APIFactory.h APIInterface.h CurlHelper.h SpotifyAPI.h WeatherAPI.h MotionSensorThread.h
LIBS += -ljsoncpp -lcurl -lwiringPi