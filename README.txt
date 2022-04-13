Display for a smart mirror created using Qt in C++. Display able to show:

Recently played songs through integration with the Spotify API by regenerating refresh tokens upon GET requests
Weather data by fetching it from an open-source API
Time by fetching it from OS
Tweets for a particular individual with Twitter API integration
Additional functionality includes a smart power-saving mode enabled by polling motion detection readings from a Passive Infrared (PIR) sensor that sends data over a serial connection from an Arduino to the Raspberry Pi that the software runs on.

Software designed with design patterns in mind to improve development time including:

Factory design pattern to generate various APIs for data fetching
MVC pattern to decouple the user interface from the model for a parallelized workflow
Observer design pattern to fetch data when changes are detected for a seamless user experience
UML highlighting the software functionality shown as follows:

[![Screenshot-2022-04-13-170233.png](https://i.postimg.cc/Y96Rdr04/Screenshot-2022-04-13-170233.png)](https://postimg.cc/62QC3Ndw)
