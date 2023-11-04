#include <iostream>
#include "MediaPlayer.h"
#include "VideoPlayer.h"
#include "AudioPlayer.h"

using namespace std;


int main()
{
	AudioPlayer* play = new AudioPlayer("AudioPlay");
	VideoPlayer* stop = new VideoPlayer("VideoStop");

	MediaPlayer mediaPlayer;


	mediaPlayer.playMediaPlayer(play);
	mediaPlayer.playMediaPlayer(stop);


}