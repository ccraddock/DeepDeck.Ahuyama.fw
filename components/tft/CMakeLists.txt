idf_component_register(SRCS "src/tft_tasks.c"
                    INCLUDE_DIRS "include" "${CMAKE_SOURCE_DIR}/main"
                    REQUIRES "hagl_hal" "hagl" "battery" "nvsfuncs")
