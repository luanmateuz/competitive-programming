// B. Dislike of Threes
fun main() {
    var likedNumbers = IntArray(1000)

    var posArray = 0
    var num = 1

    while (posArray < 1000) {
        if (num % 3 != 0 && num % 10 != 3) {
            likedNumbers[posArray] = num
            posArray++
        }
        num++
    }

    val numberTestCases = readln().toInt()

    repeat(numberTestCases) {
        val kElement = readln().toInt()

        println(likedNumbers[kElement - 1])
    }
}

