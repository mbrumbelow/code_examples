object Closures {
  def main(args: Array[String]): Unit = {
    println("multiplier(1) value = " + multiplier(1))
    println("multiplier(2) value = " + multiplier(2))
  }

  private val factor = 3
  private val multiplier = (i: Int) => i * factor
}