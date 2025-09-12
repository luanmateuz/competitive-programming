// A. Furniture Store
fun main() {
    val numberOfTestCases = readln().toInt()

    repeat(numberOfTestCases) {
        val inputNumberSize = readln().toInt()
        val intArray = readln().split(" ").map { it.toInt() }

        val arrayValues = mutableListOf<Int>()
        var lastValue = intArray[0]

        for (i in 1..<inputNumberSize) {
            val currentValue = intArray[i]

            if (currentValue > lastValue) {
                arrayValues.add(i + 1)
            } else {
                lastValue = currentValue
            }
        }

        println(arrayValues.size)
        println(arrayValues.joinToString(" "))
    }
}
