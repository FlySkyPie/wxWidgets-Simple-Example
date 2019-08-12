#include <wx/wx.h>
#include <iostream>
#include <string>

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
  wxButton *button;

  void buttonClicked(wxCommandEvent & event);
};


//define method of the application.

bool MyApp::OnInit() {
  MyFrame *frame = new MyFrame();
  frame->Show(true);
  return true;
}

//define constructor of frame.

MyFrame::MyFrame()
: wxFrame(NULL, wxID_ANY, "Message Box Example", wxDefaultPosition, wxSize(400, 320)) {
  wxPanel * panel = new wxPanel(this, wxID_ANY);

  this->button = new wxButton(panel, wxID_ANY, wxT("I'm button."),
          wxPoint(20, 20), wxDefaultSize, 0);

  Connect(this->button->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,
          wxCommandEventHandler(MyFrame::buttonClicked));
}

void MyFrame::buttonClicked(wxCommandEvent & event) {
  int value = wxMessageBox("There are some information balbalbal...",
          "This is wxMessageBox", wxYES_NO | wxCANCEL | wxICON_INFORMATION);

  wxTextEntryDialog dialog(this, "This is a small sample\nA long, long string to test out the text entrybox",
          "This is wxTextEntryDialog", "Default value", wxOK);
  dialog.ShowModal();

  wxString str("wxMessageBox return: " + std::to_string(value) + "\nwxTextEntryDialog input:" + dialog.GetValue());
  wxLogMessage(str);
}

wxIMPLEMENT_APP(MyApp); //implement the application