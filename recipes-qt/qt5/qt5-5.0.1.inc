# Copyright (C) 2012 O.S. Systems Software LTDA.

QT_VERSION ?= "${PV}"

SRC_URI += " \
  http://releases.qt-project.org/qt5/${QT_VERSION}/submodules_tar/${QT_MODULE}-opensource-src-${QT_VERSION}.tar.xz \
  file://linux.conf \
  file://g++.conf \
"

S = "${WORKDIR}/${QT_MODULE}-opensource-src-${QT_VERSION}"

LICENSE = "GFDL-1.3 & LGPLv2.1 | GPLv3"
LIC_FILES_CHKSUM ?= "file://LICENSE.LGPL;md5=02356821480f1d3d534b21e0343265b5 \
                     file://LICENSE.GPL;md5=d32239bcb673463ab874e80d47fae504 \
                     file://LGPL_EXCEPTION.txt;md5=0145c4d1b6f96a661c2c139dfb268fb6 \
                     file://LICENSE.FDL;md5=6d9f2a9af4c8b8c3c769f6cc1b6aaf7e"
