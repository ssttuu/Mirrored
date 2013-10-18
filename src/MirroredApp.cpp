#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MirroredApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void MirroredApp::setup()
{
}

void MirroredApp::mouseDown( MouseEvent event )
{
}

void MirroredApp::update()
{
}

void MirroredApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( MirroredApp, RendererGl )
