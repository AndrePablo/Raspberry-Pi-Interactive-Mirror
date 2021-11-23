#ifndef SPOTI_API_H
#define SPOTI_API_H

#include <iostream>
#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <vector>
#include "api_interface.h"

class spoti_api: public api_interface{
	public:
		spoti_api();
		~spoti_api() = default;
		static size_t writefunc(void *ptr, size_t size, size_t nmemb, std::string *s);
		void parseAccessToken(std::string &s);
		void getRecentlyPlayedTracks();
		void parseRecentTracks();
		std::string& call() override;
	private:
		std::string s;
		std::string spotify_response;
		const char* base_64_encoding_auth_request;
		const char* refresh_request;
		std::string  access_token;
		std::string recentSongs;

};
#endif