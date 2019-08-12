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
  wxRadioBox * radioBox;
};

//define method of the application.

bool MyApp::OnInit() {
  MyFrame *frame = new MyFrame();
  frame->Show(true);
  return true;
}

//define constructor of frame.

MyFrame::MyFrame()
: wxFrame(NULL, wxID_ANY, "wxRadioBox Example", wxDefaultPosition, wxSize(400, 320)) {
  wxPanel * panel = new wxPanel(this, wxID_ANY);

  wxArrayString *selection = new wxArrayString;
  selection->Add("item1");
  selection->Add("item2");
  selection->Add("item3");

  this->radioBox = new wxRadioBox(panel, wxID_ANY, "This is wxRadioBox", wxPoint(20, 20),
          wxSize(200, 150), *selection, 1,  wxRA_SPECIFY_COLS);
}

wxIMPLEMENT_APP(MyApp); 