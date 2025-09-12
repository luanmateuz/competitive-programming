// A. Spy Detected!
fun main() {
    val numInterations = readln().toInt()

    repeat(numInterations) {
        println(numInterations)
        val arraySize = readln().toInt()
        val intArray = readln().split(" ").map { it.toInt() }

        if (intArray[0] == intArray[1]) {
            val uniqueIndex = intArray.indexOfFirst { it != intArray[0] }

            println(uniqueIndex + 1)
        } else {
            if (intArray[0] == intArray[2]) {
                println(2)
            } else {
                println(1)
            }
        }
    }
}

