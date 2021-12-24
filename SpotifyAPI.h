/*!
 @brief Class used to interface with Spotify API
 Class performs Spotify API authentication using a refresh token & then performs API call to fetch recently played songs from a dummy account made for project
 Spotify API
*/

#ifndef SPOTIFY_API_H
#define SPOTIFY_API_H

#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include "APIInterface.h"
#include "CurlHelper.h"

class SpotifyAPI: public APIInterface{
	public:
		/*!
 		 @brief Initialize data members base_64_encoding_auth_request and refresh_request
 		 Initialize the data members to be used later for Spotify API authentication & access
		 @param None
		 @return None
		 */
		SpotifyAPI();
		~SpotifyAPI() = default;
		/*!
 		 @brief Parse response from authentication request to retrieve access token
 		 Convert JSON response into a dictionary, parse response, retrieve access token & store
		 @param Raw authentication response string
		 @return None
		 */
		void parseAccessToken(std::string &s);
		/*!
 		 @brief Using access token, trigger API call to retrieve recently played tracks
 		 Retrieve raw JSON response of recently played song data from Spotify API using cURL, store
		 @param None
		 @return None
		 */
		void getRecentlyPlayedTracks();
		/*!
 		 @brief Parse response to retrieve recently played tracks
 		 Parse raw JSON response from Spotify API using dictionary, retrieve recently played songs & store
		 @param None
		 @return None
		 */
		void parseRecentTracks();
		/*!
 		 @brief Implemented function based on APIInterface; Perform authentication, retrieve song data and store
 		 Use refresh token generated to retrieve access token using cURL HTTP request to the Spotify access URL, then call other functions to retrieve song data & store
		 @param None
		 @return Formatted string of recently played songs
		 */
		std::string& call() override;
	private:
		std::string spotify_auth_response;
		std::string spotify_songs_response;
		const char* base_64_encoding_auth_request;
		const char* refresh_request;
		std::string  access_token;
		std::string recentSongs;
		CurlHelper* curl_token_make;
		CurlHelper* curl_response_make;
};
#endif
