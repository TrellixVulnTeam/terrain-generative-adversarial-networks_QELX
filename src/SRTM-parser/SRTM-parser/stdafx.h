#pragma once

#ifdef _DEBUG
#pragma comment(lib, "ippiwd.lib")
#pragma comment(lib, "zlibd.lib")
#pragma comment(lib, "ittnotifyd.lib")
#pragma comment(lib, "libjpeg-turbod.lib")
#pragma comment(lib, "libjasperd.lib")
#pragma comment(lib, "libpngd.lib")
#pragma comment(lib, "libwebpd.lib")
#pragma comment(lib, "libtiffd.lib")
#pragma comment(lib, "IlmImfd.lib")
#pragma comment(lib, "libprotobufd.lib")
#pragma comment(lib, "opencv_core343d.lib")
#pragma comment(lib, "opencv_imgproc343d.lib")
#pragma comment(lib, "opencv_imgcodecs343d.lib")
#else
#pragma comment(lib, "IlmImf.lib")
#pragma comment(lib, "ippicvmt.lib")
#pragma comment(lib, "ippiw.lib")
#pragma comment(lib, "ittnotify.lib")
#pragma comment(lib, "libjasper.lib")
#pragma comment(lib, "libjpeg-turbo.lib")
#pragma comment(lib, "libpng.lib")
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libtiff.lib")
#pragma comment(lib, "libwebp.lib")
#pragma comment(lib, "opencv_core343.lib")
#pragma comment(lib, "opencv_imgcodecs343.lib")
#pragma comment(lib, "opencv_imgproc343.lib")
#pragma comment(lib, "zlib.lib")
#endif