#include <boost/iostreams/device/file_descriptor.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/device/file.hpp>

namespace io = boost::iostreams;

int some_iofiltering()
{
    io::filtering_ostream out;
    //out.push(file_sink("my_file.txt"));
    // write to out using std::ostream interface
}
