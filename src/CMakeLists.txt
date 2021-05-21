# Create a new executable and add source files to it
add_executable(cro
  main.c
  download.c
  utils.c
  common.c
  parse.c
  sync.c
)
# Link with libs
target_link_libraries(cro ${CURL_LIBRARIES} ${ZSTD_LIBRARIES})
