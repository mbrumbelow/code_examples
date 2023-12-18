use rand::seq::SliceRandom; // 0.7.2

fn main() {
    let vs = vec!["0", "1", "2", "3", "4"];
    println!("{:?}", vs.choose(&mut rand::thread_rng()));
}