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
: wxFrame(NULL, wxID_ANY, "wxStaticBitmap Example", wxDefaultPosition, wxSize(400, 320)) {
  this->panel = new wxPanel(this, wxID_ANY);

  wxBitmap image1,image2,image3; 
  image1.LoadFile("./jpeg.jpg", wxBITMAP_TYPE_JPEG);
  image2.LoadFile("./png.png", wxBITMAP_TYPE_PNG);
  image3.LoadFile("./bmp.bmp", wxBITMAP_TYPE_BMP );
  
  new wxStaticBitmap(this->panel, wxID_ANY, image1, wxPoint(20, 20));
  new wxStaticBitmap(this->panel, wxID_ANY, image2, wxPoint(20, 120));
  new wxStaticBitmap(this->panel, wxID_ANY, image3, wxPoint(20, 220));
}

wxIMPLEMENT_APP(MyApp); //implement the application