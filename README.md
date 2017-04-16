# CastLabsChallenge

Summary: Terrible result, but demonstrates aproach to a challenge. Attempted to set up C++ development environment on available computers, but issues consumed available time. So abandonned C++ and started Vis Basic code to demonstrate some programming capability. Also will attach prior original C++ program to demonstrate basic ability with that language.
Deadline: Read unlimited, but in business we need to make firm targets to deliver while relevant. My assessment is that after next weekend may be too late. During the week I need to commit to present employer and resources (Internet access and personal computer) are less than optimal.
Log:
open challenge instructions
Using Windows Vista on laptop.
Using Cplusplus tutorials for compiler leads
Problems fiding C++ express 2010 from trusted source (2013 not compatible)
Trying Dev-C++ compiler
Dev-C++ installed and launched OK
Got C:\Users\John\Documents\Cast Labs\C++ files\g++.exe	[Error] CreateProcess: No such file or directory
From tools>Compiler Options-->Directories-->Binaries  deleted 32bit version
Added g++ path to PATH variable in control panel > system
Rebooted
Still same error
Attempted to run from command line in DEV directory
needed to copy in long list of parameters from gui but still got same error.
Did find g++ as it gave different error when no parameters added.
Uninstalled.
Tried code blocks - again not seeing path to exe
Downoaded visual C++ express
Need Vista SP1 to install
Did SP1 install - crashed twice due to "Internal Error"

Part 2  switch to XP machine.
did Dev-C++ download on XP machine
Worked OK
trying https://mp4explorer.codeplex.com/downloads/get/77573 because recomended viewer needed Win 7
Working simple file io progs from tutorial
found old example using Wininet.lib - found this in d:\VC98\Lib
example at https://forums.anandtech.com/threads/can-c-read-a-text-file-from-the-internet.808891/
Commented out library still shows same errors - assume has not found it from Vis C++ path
Copy lib to gnu directory

Installed Boost but due to size may take too long to configure.

looking at libcurl examples  https://curl.haxx.se/libcurl/c/fopen.html
Curl seems to yield simplest programs for basic download of webfile.
Try adopting curl.

also found at https://github.com/JosephP91/curlcpp

Modified online example as follows:
* <DESC>
 * Very simple HTTP GET
 * </DESC>
 */ 
#include <stdio.h>
#include <curl.h>
 
int main(void)
{
  CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
    /* example.com is redirected, so we tell libcurl to follow redirection */ 
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
 
    /* Perform the request, res will get the return code */ 
    res = curl_easy_perform(curl);
    /* Check for errors */ 
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
 
    /* always cleanup */ 
    curl_easy_cleanup(curl);
  }
  return 0;
}

added makefile.m32 per https://curl.haxx.se/mail/archive-2005-10/0119.html but failed to compile due to 
CreateProcess(NULL, cc -dumpmachine, ...) failed. Probably out of date.

Found info on including libs at 
https://sourceforge.net/p/dev-cpp/discussion/128327/thread/1baf9670/

Copied curl .dll . lib and .h files to DEV-C++ directories
Cleared cannot find commands errors but got lots of syntax errors in include file - version incompatibility.


Time running out reverted to VB
Downloading file after a few minutes
Saved as text file.
Downloaded hex editor and recognized it is binary with embedded text. 
Located MFHD box within moof box by header given in challenge.

Wrote linear code to find three boxes then ran out of time. 
