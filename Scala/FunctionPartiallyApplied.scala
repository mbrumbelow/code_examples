import java.util.Date

object FunctionPartiallyApplied {
  def main(args: Array[String]): Unit = {
    val date = new Date
    val logWithDateBound = log(date, _ : String)

    logWithDateBound("message1" )
    Thread.sleep(1000)

    logWithDateBound("message2" )
    Thread.sleep(1000)

    logWithDateBound("message3" )
  }

  private def log(date: Date, message: String): Unit = {
    println(date + "----" + message)
  }
}