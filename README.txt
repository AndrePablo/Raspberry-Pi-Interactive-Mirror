Display for a smart mirror created using Qt in C++. Display able to show:

- Recently played songs through integration with the Spotify API by regenerating refresh tokens upon GET requests
- Weather data by fetching it from an open-source API
- Time by fetching it from OS
- Tweets for a particular individual with Twitter API integration
- Additional functionality includes a smart power-saving mode enabled by polling motion detection readings from a Passive Infrared (PIR) sensor that sends data - over a serial connection from an Arduino to the Raspberry Pi that the software runs on.

 Design patterns leveraged:

- Factory design pattern to generate various APIs for data fetching
- MVC pattern to decouple the user interface from the model for a parallelized workflow
- Observer design pattern to fetch data when changes are detected 

KEY TAKEAWAYS: Leveraging C++ to make an efficient IOT system. Implementing a backend that leverages Twitter api, and spotify api, parses and filters response data in a clean efficient way that allows clients to easily render data.

