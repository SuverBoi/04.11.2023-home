#pragma once
#include <iostream>
#include "MediaPlayer.h"
using namespace std;

class AudioPlayer :
	public MediaPlayer
{
public:
	AudioPlayer(string name)
		: MediaPlayer(name) {}

	void play() override {
		cout << "AudioPlayerPlay" << endl;
	}
	void pause() override {
		cout << "AudioPlayerStop" << endl;
	}

};


