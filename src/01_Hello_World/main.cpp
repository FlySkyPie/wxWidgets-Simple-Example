#include <wx/wx.h>

//declare a application

class MyApp : public wxApp {
public:
  virtual bool OnInit();
};


//declare a frame

class MyFrame : public wxFrame {
public:
  MyFrame();
private:
};

//define method of the application.

bool MyApp::OnInit() {
  MyFrame *frame = new MyFrame();
  frame->Show(true);
  return true;
}

//define constructor of frame.

MyFrame::MyFrame()
: wxFrame(NULL, wxID_ANY, "Hello World", wxDefaultPosition, wxSize(400, 320)) {

}

wxIMPLEMENT_APP(MyApp); //implement the application