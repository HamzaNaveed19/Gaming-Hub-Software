//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <chrono>
//#include <iostream>
//#include<fstream>
//
//using namespace sf;
//
//using namespace std;
//
//class Paddles
//{
//public:
//    RectangleShape shape;
//    Vector2f velocity{ 0,5 };
//
//    Paddles(float x, float y)
//    {
//        shape.setPosition(x, y);
//        shape.setSize({ 20.f, 100.f });
//        shape.setFillColor(Color::White);
//        shape.setOrigin(shape.getSize() / 2.f);
//    }
//    float getX()
//    {
//        return shape.getPosition().x;
//    }
//    float getY()
//    {
//        return shape.getPosition().y;
//    }
//    float getLeft()
//    {
//        return getX() - shape.getSize().x / 2.f;
//    }
//    float getRight()
//    {
//        return getX() + shape.getSize().x / 2.f;
//    }
//    float getTop()
//    {
//        return getY() - shape.getSize().y / 2.f;
//    }
//    float getBottom()
//    {
//        return getY() + shape.getSize().y / 2.f;
//    }
//    void upDate()
//    {
//        shape.move(velocity);
//
//        if (getTop() < 0)
//        {
//            shape.setPosition(getX(), shape.getSize().y / 2.f);
//        }
//        else if (getBottom() > 800)
//        {
//            shape.setPosition(getX(), 800 - shape.getSize().y / 2.f);
//        }
//    }
//};
//class Ball
//{
//public:
//    CircleShape shape;
//    Vector2f velocity{ 10.f,4.f };
//    Vector2f velocity1{ 15.f,4.f };
//    Vector2f velocity2{ 19.f,4.f };
//
//    Ball(float x, float y)
//    {
//        shape.setPosition(x, y);
//        shape.setRadius(10.f);
//        shape.setFillColor(Color::Yellow);
//        shape.setOrigin(shape.getRadius(), shape.getRadius());
//        shape.setOutlineThickness(2);
//        shape.setOutlineColor(Color::Black);
//    }
//    float getX()
//    {
//        return shape.getPosition().x;
//    }
//    float getY()
//    {
//        return shape.getPosition().y;
//    }
//    float getLeft()
//    {
//        return getX() - shape.getRadius();
//    }
//    float getRight()
//    {
//        return getX() + shape.getRadius();
//    }
//    float getTop()
//    {
//        return getY() - shape.getRadius();
//    }
//    float getBottom()
//    {
//        return getY() + shape.getRadius();
//    }
//    void upDate()
//    {
//        shape.move(velocity);
//
//        if (getLeft() < 0)
//        {
//            velocity.x = abs(velocity.x);
//        }
//        else if (getRight() > 1400)
//        {
//            velocity.x = -abs(velocity.x);
//        }
//        if (getTop() < 0)
//        {
//            velocity.y = abs(velocity.y);
//        }
//        else if (getBottom() > 800)
//        {
//            velocity.y = -abs(velocity.y);
//        }
//    }
//    void upDate1()
//    {
//        shape.move(velocity1);
//
//        if (getLeft() < 0)
//        {
//            velocity1.x = abs(velocity1.x);
//        }
//        else if (getRight() > 1400)
//        {
//            velocity1.x = -abs(velocity1.x);
//        }
//        if (getTop() < 0)
//        {
//            velocity1.y = abs(velocity1.y);
//        }
//        else if (getBottom() > 800)
//        {
//            velocity1.y = -abs(velocity1.y);
//        }
//    }
//    void upDate2()
//    {
//        shape.move(velocity2);
//
//        if (getLeft() < 0)
//        {
//            velocity2.x = abs(velocity2.x);
//        }
//        else if (getRight() > 1400)
//        {
//            velocity2.x = -abs(velocity2.x);
//        }
//        if (getTop() < 0)
//        {
//            velocity2.y = abs(velocity2.y);
//        }
//        else if (getBottom() > 800)
//        {
//            velocity2.y = -abs(velocity2.y);
//        }
//    }
//};
//
//string concatenate(string n)
//{
//    string l = "Player1 Score : ";
//    n = l + n;
//    return n;
//}
//
//string concatenate1(string m)
//{
//    string l = "Player2 Score : ";
//    m = l + m;
//    return m;
//}
////
////int main()
////{
////    int max;
////    int i = 0, time = 0;
////    int j = 0;
////    int duration = 10;
////
////     Get the current clock time
////    clock_t start = clock();
////
////     Convert the duration to clock ticks
////    clock_t durationTicks = duration * CLOCKS_PER_SEC;
////    string n = "0", m = "0";
////    RenderWindow window(VideoMode(1400, 800), "Game!");
////    window.setFramerateLimit(60);
////
////      Load Font
////    Font font;
////    font.loadFromFile("arial.ttf");
////
////      Pictures
////    Texture backpic;
////    backpic.loadFromFile("circle.jpg");
////    Sprite sprite1(backpic);
////    sprite1.setScale(Vector2f(.8, .7));
////    float scaleX = static_cast<float>(window.getSize().x) / backpic.getSize().x;
////    float	scaleY = static_cast<float>(window.getSize().y) / backpic.getSize().y;
////    sprite1.setScale(scaleX, scaleY);
////
////     Centre line
////    RectangleShape line(Vector2f(800, .5));
////    line.setFillColor(Color::White);
////    line.setPosition(Vector2f(window.getSize().x / 2, 0));
////    line.rotate(90);
////
////
////     Paddle objects
////    Paddles player1(12, 350);
////    Paddles player2(1388, 350);
////
////     Circle object
////    Ball ball(window.getSize().x / 2, window.getSize().y / 2);
////
////     Score 
////    Text score1;
////    score1.setPosition(350, 10);
////    score1.setFont(font);
////    score1.setString("0");
////    score1.setCharacterSize(60);
////    score1.setFillColor(Color::Red);
////    score1.setOutlineThickness(2);
////    score1.setOutlineColor(Color::Black);
////
////    Text score2;
////    score2.setPosition(1050, 10);
////    score2.setFont(font);
////    score2.setString("0");
////    score2.setCharacterSize(60);
////    score2.setFillColor(Color::Blue);
////    score2.setOutlineThickness(2);
////    score2.setOutlineColor(Color::Black);
////
////
////    Text score5;
////    score5.setPosition(730, 700);
////    score5.setFont(font);
////    score5.setString("0");
////    score5.setCharacterSize(60);
////    score5.setFillColor(Color::Red);
////    score5.setOutlineThickness(2);
////    score5.setOutlineColor(Color::Black);
////
////
////    Text score6;
////    score6.setPosition(550, 700);
////    score6.setFont(font);
////    score6.setString("Time :");
////    score6.setCharacterSize(60);
////    score6.setFillColor(Color::Blue);
////    score6.setOutlineThickness(2);
////    score6.setOutlineColor(Color::Black);
////
////
////    while (window.isOpen())
////    {
////        clock_t current = clock();
////
////         Calculate the elapsed time in clock ticks
////        clock_t elapsedTicks = current - start;
////
////         Calculate the elapsed time in seconds
////        double elapsedSeconds = static_cast<double>(elapsedTicks) / CLOCKS_PER_SEC;
////        time = round(elapsedSeconds);
////
////        string k = to_string(time);
////         Check if the timer has expired
////        if (elapsedTicks >= durationTicks) {
////            std::cout << "Timer expired!" << std::endl;
////            break;
////        }
////
////
////
////        Event event;
////        while (window.pollEvent(event))
////        {
////              Closing Conditions
////            if (event.type == Event::Closed)
////            {
////                window.close();
////            }
////        }
////        if (time > 40 && time <= 100)
////        {
////             Update Paddle 1
////            if (Keyboard::isKeyPressed(Keyboard::W))
////            {
////                player1.velocity.y = -16.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::S))
////            {
////                player1.velocity.y = 16.0f;
////            }
////            else
////            {
////                player1.velocity.y = 0.f;
////            }
////             Update Paddle 2
////            if (Keyboard::isKeyPressed(Keyboard::Up))
////            {
////                player2.velocity.y = -16.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::Down))
////            {
////                player2.velocity.y = 16.0f;
////            }
////            else
////            {
////                player2.velocity.y = 0.f;
////            }
////        }
////        else if (time > 100)
////        {
////             Update Paddle 1
////            if (Keyboard::isKeyPressed(Keyboard::W))
////            {
////                player1.velocity.y = -18.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::S))
////            {
////                player1.velocity.y = 18.0f;
////            }
////            else
////            {
////                player1.velocity.y = 0.f;
////            }
////             Update Paddle 2
////            if (Keyboard::isKeyPressed(Keyboard::Up))
////            {
////                player2.velocity.y = -18.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::Down))
////            {
////                player2.velocity.y = 18.0f;
////            }
////            else
////            {
////                player2.velocity.y = 0.f;
////            }
////        }
////        else
////        {
////             Update Paddle 1
////            if (Keyboard::isKeyPressed(Keyboard::W))
////            {
////                player1.velocity.y = -14.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::S))
////            {
////                player1.velocity.y = 14.0f;
////            }
////            else
////            {
////                player1.velocity.y = 0.f;
////            }
////             Update Paddle 2
////            if (Keyboard::isKeyPressed(Keyboard::Up))
////            {
////                player2.velocity.y = -14.0f;
////            }
////            else if (Keyboard::isKeyPressed(Keyboard::Down))
////            {
////                player2.velocity.y = 14.0f;
////            }
////            else
////            {
////                player2.velocity.y = 0.f;
////            }
////        }
////
////        if (time > 40 && time <= 100)
////        {
////
////            if (ball.shape.getGlobalBounds().intersects(player1.shape.getGlobalBounds()))
////            {
////                ball.velocity1.x = abs(ball.velocity1.x);
////            }
////            else if (ball.shape.getGlobalBounds().intersects(player2.shape.getGlobalBounds()))
////            {
////                ball.velocity1.x = -abs(ball.velocity1.x);
////            }
////        }
////        else if (time > 100)
////        {
////            if (ball.shape.getGlobalBounds().intersects(player1.shape.getGlobalBounds()))
////            {
////                ball.velocity2.x = abs(ball.velocity2.x);
////            }
////            else if (ball.shape.getGlobalBounds().intersects(player2.shape.getGlobalBounds()))
////            {
////                ball.velocity2.x = -abs(ball.velocity2.x);
////            }
////        }
////        else
////        {
////            if (ball.shape.getGlobalBounds().intersects(player1.shape.getGlobalBounds()))
////            {
////                ball.velocity.x = abs(ball.velocity.x);
////            }
////            else if (ball.shape.getGlobalBounds().intersects(player2.shape.getGlobalBounds()))
////            {
////                ball.velocity.x = -abs(ball.velocity.x);
////            }
////        }
////
////        if (ball.getRight() > 1400)
////        {
////            i++;
////            n = to_string(i);
////            score1.setString(n);
////            sleep(seconds(1));
////            ball.shape.setPosition(window.getSize().x / 2, window.getSize().y / 2);
////        }
////        if (ball.getLeft() < 0)
////        {
////            j++;
////            m = to_string(j);
////            score2.setString(m);
////            sleep(seconds(1));
////            ball.shape.setPosition(window.getSize().x / 2, window.getSize().y / 2);
////        }
////
////        player1.upDate();
////        player2.upDate();
////        if (time > 40 && time <= 100)
////        {
////            ball.upDate1();
////        }
////        else if (time > 100)
////        {
////            ball.upDate2();
////        }
////        else
////        {
////            ball.upDate();
////        }
////        window.draw(sprite1);
////        window.draw(score1);
////        window.draw(score2);
////        window.draw(score5);
////        window.draw(score6);
////
////        window.draw(player1.shape);
////        window.draw(player2.shape);
////        window.draw(line);
////        score5.setString(k);
////
////        window.draw(ball.shape);
////
////        window.display();
////
////
////    }
////    if (i > j)
////    {
////        max = i;
////    }
////    else if (i < j)
////    {
////        max = i;
////    }
////    else
////    {
////        max = j;
////    }
////    int rec = 0;
////    ifstream input("record.txt");
////
////
////    Text score7;
////    score7.setPosition(300, 600);
////    score7.setFont(font);
////    score7.setCharacterSize(60);
////    score7.setFillColor(Color::Black);
////    score7.setOutlineThickness(2);
////    score7.setOutlineColor(Color::White);
////    if (input.is_open())
////    {
////
////        input >> rec;
////    }
////    if (rec < max)
////    {
////        ofstream out("record.txt");
////        if (out.is_open())
////        {
////            out << max;
////        }
////        score7.setString("Congratulations! New Record Score");
////    }
////
////
////    Font font1;
////    font1.loadFromFile("arial.ttf");
////
////    Texture backpic1;
////    backpic1.loadFromFile("dadu1.jpeg");
////    Sprite sprite2(backpic1);
////    sprite2.setScale(Vector2f(.8, .7));
////    float scaleX1 = static_cast<float>(window.getSize().x) / backpic1.getSize().x;
////    float	scaleY1 = static_cast<float>(window.getSize().y) / backpic1.getSize().y;
////    sprite2.setScale(scaleX1, scaleY1);
////
////    n = concatenate(n);
////    m = concatenate1(m);
////
////
////    Text score3;
////    score3.setPosition(400, 8);
////    score3.setFont(font);
////    score3.setString("----RESULTS----");
////    score3.setCharacterSize(60);
////    score3.setFillColor(Color::Black);
////    score3.setOutlineThickness(2);
////    score3.setOutlineColor(Color::White);
////
////
////    score1.setPosition(120, 120);
////    score1.setFont(font);
////    score1.setString(n);
////    score1.setCharacterSize(47);
////    score1.setFillColor(Color::Red);
////    score1.setOutlineThickness(2);
////    score1.setOutlineColor(Color::Black);
////    score2.setPosition(120, 200);
////    score2.setFont(font);
////    score2.setString(m);
////    score2.setCharacterSize(47);
////    score2.setFillColor(Color::Blue);
////    score2.setOutlineThickness(2);
////    score2.setOutlineColor(Color::Black);
////
////    string l;
////
////    if (i > j)
////    {
////        l = "Player1 Won!!";
////    }
////    else if (i < j)
////    {
////        l = "Player2 Won!!";
////    }
////    else
////    {
////        l = "Match Tied";
////    }
////    Text score4;
////    score4.setPosition(500, 500);
////    score4.setFont(font);
////    score4.setString(l);
////    score4.setCharacterSize(60);
////    score4.setFillColor(Color::White);
////    score4.setOutlineThickness(4);
////    score4.setOutlineColor(Color::Black);
////
////    while (window.isOpen())
////    {
////        Event event1;
////        while (window.pollEvent(event1))
////        {
////            if (event1.type == Event::Closed)
////            {
////                window.close();
////            }
////        }
////
////        window.draw(sprite2);
////        window.draw(score3);
////        window.draw(score1);
////        window.draw(score2);
////        window.draw(score4);
////        if (max > rec)
////        {
////            window.draw(score7);
////        }
////        window.display();
////    }
////    return 0;
//}