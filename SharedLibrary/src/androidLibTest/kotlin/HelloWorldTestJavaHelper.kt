package org.greeting

import org.junit.runner.RunWith
import org.junit.runners.JUnit4
import org.sharedLibrary.SharedSpeaker
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
        assertEquals(SharedSpeaker().platformGreeting(), "Hello, Android world!")
    }
}
