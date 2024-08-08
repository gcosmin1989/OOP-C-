#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
public:
	string name;
	string owner_name;
	int subscribersCount;
	list<string> publishes_video_titles;


};

int main()
{
	YoutubeChannel ytChannel;
	ytChannel.name = "My Yt Channel";
	ytChannel.owner_name = "Influencer";
	ytChannel.subscribersCount = 1800;
	ytChannel.publishes_video_titles = { "Video 1", "Video 2", "Video 3" };


	cout << "Name: " << ytChannel.name << endl;
	cout << "Owner Name : " << ytChannel.name << endl;
	cout << "Number of Subs : " << ytChannel.name << endl;
	cout << "Videos: " << endl;
	for (string videoTitle: ytChannel.publishes_video_titles)
		cout  << videoTitle<<endl;
}

