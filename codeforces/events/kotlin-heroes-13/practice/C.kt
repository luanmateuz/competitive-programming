// C. YetnotherrokenKeoard
fun main() {
    val numberTestCases = readln().toInt()

    repeat(numberTestCases) {
        val inputKeyboard = readln()

        val tempStringBuilder = StringBuilder()

        val lowerCaseIndices = mutableListOf<Int>()
        val upperCaseIndices = mutableListOf<Int>()

        for (char in inputKeyboard) {
            when (char) {
                'b' -> {
                    if (lowerCaseIndices.isNotEmpty()) {
                        val lastIndex = lowerCaseIndices.removeLast()
                        tempStringBuilder[lastIndex] = '-'
                    }
                }
                'B' -> {
                    if (upperCaseIndices.isNotEmpty()) {
                        val lastIndex = upperCaseIndices.removeLast()
                        tempStringBuilder[lastIndex] = '-'
                    }
                }
                else -> {
                    tempStringBuilder.append(char)
                    val currentIndex = tempStringBuilder.length - 1
                    if (char.isLowerCase()) {
                        lowerCaseIndices.add(currentIndex)
                    } else {
                        upperCaseIndices.add(currentIndex)
                    }
                }
            }
        }

        val result = tempStringBuilder.filter { it != '-' }.toString()
        println(result)
    }
}

