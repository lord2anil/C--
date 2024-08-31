// Get the iframe element
var iframe = document.querySelector('iframe');

// Function to post messages to the Vimeo player
function postMessageToVimeoPlayer(action, value) {
  iframe.contentWindow.postMessage({
    method: action,
    value: value
  }, '*');
}

// Event listener for messages from the Vimeo player
window.addEventListener('message', function(event) {
  if (event.origin !== 'https://player.vimeo.com') {
    return;
  }
  
  // Get the current time and duration of the video
  if (event.data && event.data.event === 'ready') {
    postMessageToVimeoPlayer('getDuration'); // Get the video duration
  }
  if (event.data && event.data.method === 'getDuration') {
    var duration = event.data.value;
    var targetTime = duration * 0.9; // 90% of the video
    postMessageToVimeoPlayer('setCurrentTime', targetTime); // Skip to 90%
    postMessageToVimeoPlayer('play'); // Play the video
  }
});

// Send the "ready" event to the player to start the communication
postMessageToVimeoPlayer('addEventListener', 'ready');










// Get the video element
var video = document.querySelector('video');

if (video) {
  // Function to play the video at high speed
  function playVideoAtHighSpeed() {
    // Set the playback rate to a high value (e.g., 16x)
    video.playbackRate =16.0

    // Add an event listener to detect when the video has ended
    video.addEventListener('ended', function() {
      console.log('Video has finished playing.');
      video.playbackRate = 1.0; // Reset the playback rate to normal
    });

    // Play the video
    video.play().then(() => {
      console.log('Video is playing at high speed.');
    }).catch((error) => {
      console.error('Error playing video:', error);
    });
  }

  // Ensure the video metadata is loaded before setting the playback rate
  if (video.readyState >= 1) {
    playVideoAtHighSpeed();
  } else {
    video.addEventListener('loadedmetadata', playVideoAtHighSpeed);
  }
} else {
  console.error('Video element not found');
}

