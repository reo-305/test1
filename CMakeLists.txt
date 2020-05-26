# Qt Setting
set(QTDIR ${QTDIR})
set(CMAKE_PREFIX_PATH ${QTDIR})
set(CMAKE_AUTOMOC ON)

file(GLOB_RECURSE PROJECT_SOURCES CMAKE_SOURCE_DIR *.cpp *.hpp)
add_executable(moving_object_tracker #WIN32
  ${PROJECT_SOURCES}
)

# -Ycstdafx.hpp プリコンパイル済みヘッダー
# -Fp$(SolutionDir)stdafx.pch プリコンパイル済みヘッダー
# -FIstdafx.hpp 必ず使用されるインクルードファイル
target_compile_options(moving_object_tracker PRIVATE 
  -Yustdafx.hpp 
  -Fp$(SolutionDir)stdafx.pch
  -FIstdafx.hpp
)

target_link_libraries(moving_object_tracker
  data
  func
  viewer
  utl
  config_window
  recognizer_window
  Qt5::Widgets
  ${OPENGL_LIBRARIES}
  ${PCL_LIBRARIES}
  ${OpenCV_LIBS}
)
