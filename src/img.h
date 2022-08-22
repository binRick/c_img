#include <stdint.h>
#include <stdbool.h>
struct image_dimensions_t {
  int width, height;
};
void usage();
void output_jpeg_dimensions(const char *path);
void output_png_dimensions(const char *path);
struct image_dimensions_t *get_png_dimensions(const char *path);
void output_gif_dimensions(const char *path);
void read_from(const char *path,char *buf,int len,int offset);
void output_css_dimensions(int width,int height);
int read_uint16(uint8_t *buf);
int read_uint32(uint8_t *buf);
int is_png(uint8_t *buf);
int is_gif(uint8_t *buf);
int is_jpeg(uint8_t *buf);
