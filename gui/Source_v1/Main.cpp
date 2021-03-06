/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SaxTutorComponent.h"

class SaxTutorWindow : public DocumentWindow
{
public:
    //==============================================================================
    SaxTutorWindow()
        : DocumentWindow ("SaxTutor",
                          Colours::lightgrey,
                          DocumentWindow::allButtons,
                          true)
    {
        // Create an instance of our main content component, and add it to our window..
        setContentOwned (new SaxTutorComponent(), true);

        // Centre the window on the screen
        centreWithSize (getWidth(), getHeight());

        // And show it!
        setVisible (true);
    }

    ~SaxTutorWindow()
    {
        // (the content component will be deleted automatically, so no need to do it here)
    }

    //==============================================================================
    void closeButtonPressed()
    {
        // When the user presses the close button, we'll tell the app to quit. This
        // HelloWorldWindow object will be deleted by the JUCEHelloWorldApplication class.
        JUCEApplication::quit();
    }
};

//==============================================================================
class NewProjectApplication  : public JUCEApplication
{
public:
    //==============================================================================
    NewProjectApplication()
    {
    }

    ~NewProjectApplication()
    {
    }

    //==============================================================================
    void initialise (const String& commandLine)
    {
    	// Do your application's initialisation code here..
	//Step 1: Create a score, add some pages, and give it some information.
	saxTutorWindow = new SaxTutorWindow();
    }

    void shutdown()
    {
      // Do your application's shutdown code here..
    	saxTutorWindow = 0;    
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        quit();
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "SaxTutor";
    }

    const String getApplicationVersion()
    {
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        
    }

private:
    ScopedPointer<SaxTutorWindow> saxTutorWindow;
};

//==============================================================================
// This macro generates the main() routine that starts the app.
START_JUCE_APPLICATION(NewProjectApplication)
