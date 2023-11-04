#pragma once
#include <iostream> 
#include <vector>
using namespace std;	

class MediaPlayer
{
private:
	string name;
	vector<MediaPlayer*> MediaPlayerList;
public:
	MediaPlayer(string name) {
		this->name = name;
	}
	virtual void play() {
		cout << "Відтворення:" << endl;
	}
	virtual void pause() {
		cout << "Пауза:" << endl;
	}
	virtual void stop() {
		cout << "Зупинка мультимедійного файлу:" << endl;
	}
	string getName() {
		return name;
	}
	MediaPlayer() {
		name = "DefaultMediaPlayer";
	}


	void playMediaPlayer(MediaPlayer* play) {
		MediaPlayerList.push_back(play);
		}
	void printAllMediaPlayer() {
		for (MediaPlayer* player : MediaPlayerList) {
			cout << player->getName() << endl;
		}
	}
};

