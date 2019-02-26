package org.sharedLibrary

import kotlinx.cinterop.alloc
import kotlinx.cinterop.memScoped
import kotlinx.cinterop.ptr
import kotlinx.cinterop.toKString
import platform.posix.uname
import platform.posix.utsname

actual class Platform actual constructor() {
    actual val name: String = "iOS"
}

