#pragma once
#include <iostream>
#include "MediaPlayer.h"
using namespace std;

class VideoPlayer :
	public MediaPlayer
{
public:
	VideoPlayer(string name)
		: MediaPlayer(name) {}

	void play() override {
		cout << "VideoPlayerPlay" << endl;
	}
	void stop() override {
		cout << "VideoPlayerStop" << endl;
	}

};

