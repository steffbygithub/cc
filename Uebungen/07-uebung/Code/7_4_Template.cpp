/* 7_4_Template.cpp Beilpiel-Programm für Grafik-Simmulation */
/* Author: Stefan Mueller                                     */
// greated: 14.11.2022
// modified: 22.11.2022 Experimentals with Text and its Font!
// not really solved! 
// modified: 29.11.2022 Lines for the Roads (solved)

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>

#include <iostream>

using sf::Event; using sf::CircleShape; using sf::RenderWindow;
using sf::Color;

int main()
{   
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML Crossroad!");
       // Declare and load a font
    sf::Font font;
    // Leider ist der Font noch leer!! ==> deshalb keine Textausgabe
    //font.getInfo();
    //sf::String string("C:\\Users\\smueller\\source\\repos\\sfml-start\\sansation.ttf");
    //if (!font.loadFromFile(string))
    //{
    //    std::cerr << "Fehler beim Laden des fonts" << std::endl;
    //    return -1;
    //}
    //// Create a text
    //sf::Text text;
    //text.setFont(font);
    //text.setString("Hallo");
    //text.setCharacterSize(24);
//    text.setStyle(sf::Text::Bold);
//    text.setFillColor(sf::Color::Red);

    // linkes oberes Eck  
    sf::RectangleShape rechteck1(sf::Vector2f(250.0, 250.0));
    rechteck1.setFillColor(Color::Yellow);
    // Hintergrund in Grau
    sf::RectangleShape hintergrund(sf::Vector2f(600.0, 600.0));
    hintergrund.setFillColor(sf::Color(190,190,190,255)); //grau
    hintergrund.setOrigin(0, 0);
    // linke waagrechte Markierung
    sf::RectangleShape lineleftmainroad1(sf::Vector2f(25.f, 3.f));
    lineleftmainroad1.setPosition(0.f, 300.f);
    sf::RectangleShape lineleftmainroad2(sf::Vector2f(25.f, 3.f));
    lineleftmainroad2.setPosition(50.f, 300.f);
    sf::RectangleShape lineleftmainroad3(sf::Vector2f(25.f, 3.f));
    lineleftmainroad3.setPosition(100.f, 300.f);
    sf::RectangleShape lineleftmainroad4(sf::Vector2f(90.f, 3.f));
    lineleftmainroad4.setPosition(150.f, 300.f);
    sf::RectangleShape lineleftmainroad5(sf::Vector2f(50.f, 6.f));
    lineleftmainroad5.setPosition(240.f, 300.f);
    lineleftmainroad5.rotate(90.f);
    // rechte waagrechte Markierung
    sf::RectangleShape linerightmainroad1(sf::Vector2f(25.f, 3.f));
    linerightmainroad1.setPosition(575.f, 300.f);
    sf::RectangleShape linerightmainroad2(sf::Vector2f(25.f, 3.f));
    linerightmainroad2.setPosition(525.f, 300.f);
    sf::RectangleShape linerightmainroad3(sf::Vector2f(25.f, 3.f));
    linerightmainroad3.setPosition(475.f, 300.f);
    sf::RectangleShape linerightmainroad4(sf::Vector2f(90.f, 3.f));
    linerightmainroad4.setPosition(357.f, 300.f);
    sf::RectangleShape linerightmainroad5(sf::Vector2f(50.f, 6.f));
    linerightmainroad5.setPosition(357.f, 300.f);
    linerightmainroad5.rotate(270.f);
    // obere senkrechte Markierung
    sf::RectangleShape lineuppercrossroad1(sf::Vector2f(25.f, 3.f));
    lineuppercrossroad1.setPosition(300.f, 0.f);
    lineuppercrossroad1.rotate(90.f);
    sf::RectangleShape lineuppercrossroad2(sf::Vector2f(25.f, 3.f));
    lineuppercrossroad2.setPosition(300.f, 50.f);
    lineuppercrossroad2.rotate(90.f);
    sf::RectangleShape lineuppercrossroad3(sf::Vector2f(25.f, 3.f));
    lineuppercrossroad3.setPosition(300.f, 100.f);
    lineuppercrossroad3.rotate(90.f);
    sf::RectangleShape lineuppercrossroad4(sf::Vector2f(90.f, 3.f));
    lineuppercrossroad4.setPosition(300.f, 150.f);
    lineuppercrossroad4.rotate(90.f);
    sf::RectangleShape lineuppercrossroad5(sf::Vector2f(50.f, 6.f));
    lineuppercrossroad5.setPosition(250.f, 234.f);
    // untere senkrechte Markierung
    sf::RectangleShape linelowercrossroad1(sf::Vector2f(25.f, 3.f));
    linelowercrossroad1.setPosition(300.f, 575.f);
    linelowercrossroad1.rotate(90.f);
    sf::RectangleShape linelowercrossroad2(sf::Vector2f(25.f, 3.f));
    linelowercrossroad2.setPosition(300.f, 525.f);
    linelowercrossroad2.rotate(90.f);
    sf::RectangleShape linelowercrossroad3(sf::Vector2f(25.f, 3.f));
    linelowercrossroad3.setPosition(300.f, 475.f);
    linelowercrossroad3.rotate(90.f);
    sf::RectangleShape linelowercrossroad4(sf::Vector2f(90.f, 3.f));
    linelowercrossroad4.setPosition(300.f, 360.f);
    linelowercrossroad4.rotate(90.f);
    sf::RectangleShape linelowercrossroad5(sf::Vector2f(50.f, 6.f));
    linelowercrossroad5.setPosition(300.f, 360.f);


    sf::Text textA2Oben;
    textA2Oben.setFont(font);
    textA2Oben.setCharacterSize(30);
    textA2Oben.setPosition(200.f, 120.f);
    //textA2Oben.setStyle(sf::Text::Regular);
    textA2Oben.setFillColor(Color::Black);
    textA2Oben.setString(sf::String("Ampel2"));

    
    sf::RectangleShape ampel2Oben(sf::Vector2f(35.0, 90.0));
    ampel2Oben.setFillColor(Color::Black);
    ampel2Oben.setOrigin(-210, -150);

    CircleShape redlight2Oben(12.0);
    redlight2Oben.setFillColor(Color::Red);
    redlight2Oben.setOrigin(-214, -215);

    CircleShape yellowlight2Oben(12.0);
    yellowlight2Oben.setFillColor(Color::Yellow);
    yellowlight2Oben.setOrigin(-214, -185);

    CircleShape greenlight2Oben(12.0);
    greenlight2Oben.setFillColor(Color::Green);
    greenlight2Oben.setOrigin(-214, -155 );


    sf::RectangleShape rechteck2(sf::Vector2f(250.0, 250.0));
    rechteck2.setFillColor(Color::Yellow);
    rechteck2.setOrigin(-350,0);

    sf::RectangleShape ampel1Oben(sf::Vector2f(90.0, 35.0));
    ampel1Oben.setFillColor(Color::Black);
    ampel1Oben.setOrigin(-350, -210);

    CircleShape redlight1Oben(12.0);
    redlight1Oben.setFillColor(Color::Red);
    redlight1Oben.setOrigin(-352, -218);

    CircleShape yellowlight1Oben(12.0);
    yellowlight1Oben.setFillColor(Color::Yellow);
    yellowlight1Oben.setOrigin(-382, -218);

    CircleShape greenlight1Oben(12.0);
    greenlight1Oben.setFillColor(Color::Green);
    greenlight1Oben.setOrigin(-412, -218);

    sf::RectangleShape rechteck3(sf::Vector2f(250.0, 250.0));
    rechteck3.setFillColor(Color::Yellow);
    rechteck3.setOrigin(0, -350);
 
    sf::RectangleShape ampel1Unten(sf::Vector2f(90.0, 35.0));
    ampel1Unten.setFillColor(Color::Black);
    ampel1Unten.setOrigin(-155, -355);

    CircleShape redlight1Unten(12.0);
    redlight1Unten.setFillColor(Color::Red);
    redlight1Unten.setOrigin(-216, -361);

    CircleShape yellowlight1Unten(12.0);
    yellowlight1Unten.setFillColor(Color::Yellow);
    yellowlight1Unten.setOrigin(-188, -361);

    CircleShape greenlight1Unten(12.0);
    greenlight1Unten.setFillColor(Color::Green);
    greenlight1Unten.setOrigin(-158, -361);

    sf::RectangleShape rechteck4(sf::Vector2f(250.0, 250.0));
    rechteck4.setFillColor(Color::Yellow);
    rechteck4.setOrigin(-350, -350);

    sf::RectangleShape ampel2Unten(sf::Vector2f(35.0, 90.0));
    ampel2Unten.setFillColor(Color::Black);
    ampel2Unten.setOrigin(-355, -355);
    CircleShape redlight2Unten(12.0);
    redlight2Unten.setFillColor(Color::Red);
    redlight2Unten.setOrigin(-361, -360);

    CircleShape yellowlight2Unten(12.0);
    yellowlight2Unten.setFillColor(Color::Yellow);
    yellowlight2Unten.setOrigin(-361, -390);

    CircleShape greenlight2Unten(12.0);
    greenlight2Unten.setFillColor(Color::Green);
    greenlight2Unten.setOrigin(-361, -420);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Draw it
        window.draw(hintergrund);
        window.draw(rechteck1);
        window.draw(ampel2Oben);
        window.draw(redlight2Oben);
        window.draw(yellowlight2Oben);
        window.draw(greenlight2Oben);
        window.draw(rechteck2);
        window.draw(ampel1Oben);
        window.draw(redlight1Oben);
        window.draw(yellowlight1Oben);
        window.draw(greenlight1Oben);
        window.draw(rechteck3);
        window.draw(ampel1Unten);
        window.draw(redlight1Unten);
        window.draw(yellowlight1Unten);
        window.draw(greenlight1Unten);
        window.draw(rechteck4);
        window.draw(ampel2Unten);
        window.draw(redlight2Unten);
        window.draw(yellowlight2Unten);
        window.draw(greenlight2Unten);
        window.draw(lineleftmainroad1);
        window.draw(lineleftmainroad2);
        window.draw(lineleftmainroad3);
        window.draw(lineleftmainroad4);
        window.draw(lineleftmainroad5);
        window.draw(linerightmainroad1);
        window.draw(linerightmainroad2);
        window.draw(linerightmainroad3);
        window.draw(linerightmainroad4);
        window.draw(linerightmainroad5);
        window.draw(lineuppercrossroad1);
        window.draw(lineuppercrossroad2);
        window.draw(lineuppercrossroad3);
        window.draw(lineuppercrossroad4);
        window.draw(lineuppercrossroad5);
        window.draw(linelowercrossroad1);
        window.draw(linelowercrossroad2);
        window.draw(linelowercrossroad3);
        window.draw(linelowercrossroad4);
        window.draw(linelowercrossroad5);
        window.draw(textA2Oben);
        window.display();
    }

    return 0;
}