# Goal: rendering texture
![Screenshot 2025-04-03 181907](https://github.com/user-attachments/assets/9710c885-985e-4094-8683-346e102a2b93)

I learned to use a new library: `stb_image.h`.
This is a single-header library created by Sean Barrett as part of the stb libraries collection.
It is widely used in graphics programming, especially with OpenGL, to load image files.

## What is stb_image.h used for?
The library is mainly used to load image files into memory so they can be used as textures or to manipulate pixel data.

### Supported Image Formats:
- JPEG (.jpg)
- PNG (.png)
- BMP (.bmp)
- TGA (.tga)
- GIF (.gif)
- PSD (.psd)
- HDR (.hdr)
- PIC (.pic)
- PNM (.ppm, .pgm)

## Why use stb_image.h?
- **Simplicity:** One header file, easy to integrate.
- **Lightweight:** Minimal dependencies and straightforward usage.
- **Popularity:** Many OpenGL tutorials and projects use it.
- **Easy Image Loading:** No need to manually parse image formats.

## What does stb mean?
- The letters "stb" stand for "Sean's Tool Box".
- It’s a collection of simple, single-header C libraries created by a developer named Sean Barrett.
- These libraries are designed to be lightweight and easy to use for various tasks, like loading images, audio, and fonts.

## What does stbi mean?
- The "stbi" prefix specifically means "stb image".
- It is used in function names to indicate that they belong to the stb_image.h library.
- For example, `stbi_load` is a function from stb_image.h that loads an image file.
