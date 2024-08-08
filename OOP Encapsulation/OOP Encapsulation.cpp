#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
private:
	string name;
	string owner_name;
	int subscribersCount;
	list<string> publishes_video_titles;

public:
	YoutubeChannel(string name_value, string owner_name_value) {
		name = name_value;
		owner_name = owner_name_value;
		subscribersCount = 0;
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
	void subscribe() {
		subscribersCount++;
	}
	void unsubscribe() {
		if(subscribersCount>0){
			subscribersCount--;
		}
	}
	void publishVideo(string title) {
		publishes_video_titles.push_back(title);
	}
};

int main()
{
	YoutubeChannel ytChannel("Influencer", "Somebody");
	ytChannel.publishVideo("Video 11");
	ytChannel.publishVideo("Video 12");
	ytChannel.publishVideo("Video 13");
	ytChannel.subscribe();
	ytChannel.subscribe();
	ytChannel.subscribe();
	ytChannel.subscribe();
	ytChannel.unsubscribe();
	ytChannel.unsubscribe();
	ytChannel.unsubscribe();
	ytChannel.unsubscribe();
	ytChannel.unsubscribe();
	ytChannel.getInfo();
	

}





