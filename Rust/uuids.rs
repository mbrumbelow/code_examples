// Import the required types and traits
use uuid::Uuid;

fn main() {
    // Generate a random UUID
    let my_uuid = Uuid::new_v4();

    // Print the UUID
    println!("Generated UUID: {}", my_uuid);
}