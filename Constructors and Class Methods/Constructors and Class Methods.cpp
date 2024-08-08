#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
public:
	string name;
	string owner_name;
	int subscribersCount;
	list<string> publishes_video_titles;

	YoutubeChannel(string name_value, string owner_name_value) {
		name = name_value;
		owner_name = owner_name_value;
		subscribersCount = 2000;
	}

	void getInfo() {
		cout << "Name: " << name << endl;
		cout << "Owner Name : " << owner_name << endl;
		cout << "Number of Subs : " << subscribersCount << endl;
		cout << "Videos: " << endl;
		for (string video : publishes_video_titles) {
			cout << video << endl;
		}

	}
};

int main()
{
	YoutubeChannel ytChannel("Influencer", "Somebody");
	ytChannel.publishes_video_titles.push_back("Video 10");
	ytChannel.publishes_video_titles.push_back("Video 20");
	ytChannel.publishes_video_titles.push_back("Video 30");
	ytChannel.getInfo();

	YoutubeChannel ytChannel2("Influencer no 2", "Somebody else");
	ytChannel2.getInfo();
	}

	
	


