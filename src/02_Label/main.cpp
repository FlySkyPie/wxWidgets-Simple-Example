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
  wxStaticText *label;
  wxPanel * panel;
};

//define method of the application.

bool MyApp::OnInit() {
  MyFrame *frame = new MyFrame();
  frame->Show(true);
  return true;
}

//define constructor of frame.

MyFrame::MyFrame()
: wxFrame(NULL, wxID_ANY, "wxStaticText Example", wxDefaultPosition, wxSize(400, 320)) {
  this->panel = new wxPanel(this, wxID_ANY);

  this->label = new wxStaticText(
          this->panel, wxID_ANY, "Example Text",
          wxPoint(160, 120), wxSize(100, 20));
}

wxIMPLEMENT_APP(MyApp); //implement the application