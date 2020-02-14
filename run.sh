mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=RELEASE -DBUILD_EXAMPLES=ON -DWITH_CUDA=OFF  ..
make 
sudo make install