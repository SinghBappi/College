CREATE TABLE history (
    id INT AUTO_INCREMENT PRIMARY KEY,
    user_input TEXT,
    bot_response TEXT,
    timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
chatbot_db