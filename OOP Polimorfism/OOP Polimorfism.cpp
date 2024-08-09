#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
private:
	string name;
	int subscribersCount;
	list<string> publishes_video_titles;

protected:
	string owner_name;
	int contentQuality;

public:
	YoutubeChannel(string name_value, string owner_name_value) {
		name = name_value;
		owner_name = owner_name_value;
		subscribersCount = 0;
		contentQuality = 0;
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
		if (subscribersCount > 0) {
			subscribersCount--;
		}
	}
	void publishVideo(string title) {
		publishes_video_titles.push_back(title);
	}
	void checkAnalitycs() {
		if (contentQuality < 5)
			cout << name << " this channel quality is bad" << endl;
		else
			cout << name << " this channel has good quality" << endl;
	}
};
class CookingYoutubeChannel : public YoutubeChannel {
public:
	CookingYoutubeChannel(string name_value, string owner_name_value) : YoutubeChannel(name_value, owner_name_value) {

	}
	void practice() {
		cout << owner_name << " practicing cooking" << endl;
		contentQuality++;
	}

};

class SingertsYoutubeChannel : public YoutubeChannel {
public:
	SingertsYoutubeChannel(string name_value, string owner_name_value) : YoutubeChannel(name_value, owner_name_value) {
	}
		void practice() {
			cout << owner_name << " learning songs" << endl;
			contentQuality++;

	}
};
int main()
{
	CookingYoutubeChannel ytChannelCooking("Cooking with Me", "CookingUser");
	SingertsYoutubeChannel ytChannelSinging("Learn to sing", "SingerUser");

	ytChannelCooking.practice();
	ytChannelSinging.practice();
	ytChannelSinging.practice();
	ytChannelSinging.practice();
	ytChannelSinging.practice();
	ytChannelSinging.practice();
	
	ytChannelCooking.checkAnalitycs();
	ytChannelSinging.checkAnalitycs();

	YoutubeChannel* yt1 = &ytChannelCooking;
	YoutubeChannel* yt2 = &ytChannelSinging;

	yt1->checkAnalitycs();
	yt2->checkAnalitycs();
}





