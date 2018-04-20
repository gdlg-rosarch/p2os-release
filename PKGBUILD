# Script generated with Bloom
pkgdesc="ROS - URDF file descriptions for P2OS/ARCOS robot"
url='http://ros.org/wiki/p2os-purdue'

pkgname='ros-lunar-p2os-urdf'
pkgver='2.1.0_1'
pkgrel=1
arch=('any')
license=('BSD'
)

makedepends=('ros-lunar-catkin'
'ros-lunar-geometry-msgs'
'ros-lunar-kdl-parser'
'ros-lunar-sensor-msgs'
'ros-lunar-std-msgs'
'ros-lunar-tf'
'ros-lunar-urdf'
)

depends=('ros-lunar-geometry-msgs'
'ros-lunar-kdl-parser'
'ros-lunar-p2os-driver'
'ros-lunar-p2os-msgs'
'ros-lunar-sensor-msgs'
'ros-lunar-std-msgs'
'ros-lunar-tf'
'ros-lunar-urdf'
)

conflicts=()
replaces=()

_dir=p2os_urdf
source=()
md5sums=()

prepare() {
    cp -R $startdir/p2os_urdf $srcdir/p2os_urdf
}

build() {
  # Use ROS environment variables
  source /usr/share/ros-build-tools/clear-ros-env.sh
  [ -f /opt/ros/lunar/setup.bash ] && source /opt/ros/lunar/setup.bash

  # Create build directory
  [ -d ${srcdir}/build ] || mkdir ${srcdir}/build
  cd ${srcdir}/build

  # Fix Python2/Python3 conflicts
  /usr/share/ros-build-tools/fix-python-scripts.sh -v 2 ${srcdir}/${_dir}

  # Build project
  cmake ${srcdir}/${_dir} \
        -DCMAKE_BUILD_TYPE=Release \
        -DCATKIN_BUILD_BINARY_PACKAGE=ON \
        -DCMAKE_INSTALL_PREFIX=/opt/ros/lunar \
        -DPYTHON_EXECUTABLE=/usr/bin/python2 \
        -DPYTHON_INCLUDE_DIR=/usr/include/python2.7 \
        -DPYTHON_LIBRARY=/usr/lib/libpython2.7.so \
        -DPYTHON_BASENAME=-python2.7 \
        -DSETUPTOOLS_DEB_LAYOUT=OFF
  make
}

package() {
  cd "${srcdir}/build"
  make DESTDIR="${pkgdir}/" install
}

