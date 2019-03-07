package org.sharedLibrary

import org.junit.runner.RunWith
import org.junit.runners.JUnit4
import kotlin.test.Ignore
import kotlin.test.Test
import kotlin.test.assertEquals

// special class for running test within IDE
@Ignore
@RunWith(JUnit4::class)
class HelloWorldTestJavaHelper : SharedHelloWorldTest()

open class HelloWorldLibraryTest {
    @Test
    fun testPlatformGreeting() {

    }
}
