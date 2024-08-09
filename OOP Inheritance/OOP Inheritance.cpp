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
		if (subscribersCount > 0) {
			subscribersCount--;
		}
	}
	void publishVideo(string title) {
		publishes_video_titles.push_back(title);
	}
};
class CookingYoutubeChannel: public YoutubeChannel{
public:
	CookingYoutubeChannel(string name_value, string owner_name_value): YoutubeChannel(name_value, owner_name_value) {

	}
	void practice() {
		cout <<owner_name<< " practicing cooking" << endl;
	}

};
int main()
{
	CookingYoutubeChannel ytChannelCooking("Cooking with Me","CookingUser");
	ytChannelCooking.subscribe();
	ytChannelCooking.subscribe();
	ytChannelCooking.unsubscribe();
	ytChannelCooking.publishVideo("Apple Pie");
	ytChannelCooking.publishVideo("Pizza");
	ytChannelCooking.getInfo();
	ytChannelCooking.practice();

}





