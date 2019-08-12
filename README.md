wxWidgets Simple Examples
===

最近手上剛好接到一個需要寫 GUI 的專案，因為有著需要透過 COM port 控制硬體的需求，不能用自己比較熟的 PHP 去寫，適合處理這個情境而我又比較不陌生的語言就剩 C++了。

原本打算使用  Qt 來寫的，不過不知道是不是動到環境，距離上次使用也不過一年到半年的時間，創個專案創不了，它一直要求我要裝 Android SDK，即便我沒有要跨平台的打算...

好吧，使用包裝得很美好的東西而不構理解其構造，就有著到時候沒能力排除故障的代價，這似乎是一筆我該償還的技術債，也是一個學習新的視窗程式 API 的好理由呢。

在嘗試 wxWidgets 之前，也有不少候選方案：Nana、 GTK+、 FLTK。Nana 是個名氣比較小的函式庫，充滿了類似閉包的寫法，個人不太喜歡這種語法；而且經過一番嘗試我始終無法讓它顯示 png 圖檔，於是便從清單中替除。GTK+  則是語法太 "C" 了，對於使用 C++ 比較習慣的我而言，它定義的函式名稱真是讓我不敢直視。FLTK 則是高職學習程式的過程中，曾經沒頭沒腦地摸過，雖然認識不多但是是我 "已知" 的視窗程式函式庫之一。

選擇函式庫的要點不外乎：

- 使用者眾多 （ ~~前人的屍體比較多~~ ）
- 結構或技術普遍程度較高 （過渡到其他函式庫時，經驗可累積）
- 函式庫文件或手冊完整（不需要花太多時間在瞎猜理解函式庫）

後來參考[這篇](https://philippegroarke.com/posts/2018/c++_ui_solutions/)文章，wxWidgets 似乎是名氣比較大，而且該篇文章的作者也抱怨（指出的缺點）比較少的函式庫，就決定用它啦～關於視窗程式函式庫的選擇與比較網路上也有很多[文章](https://lmgtfy.com/?q=qt+wxwidgets+%E6%AF%94%E8%BC%83)可以參考，wxWidgets 的其他特點我就不在這裡多做敘述了，這裡主要是放一些「超級小」範例作為自己學習的足跡，順便給其他想學習這個函式庫的朋友們參考。

- [01 Hello World Window ( wxApp & wxFrame )](./01_Hello_World.md)
- [02 Label ( wxStaticText )](./02_Label.md)
- [03 Button ( wxButton )](./03_Button.md)
- [04 Message Box ( wxLogMessage, wxTextEntryDialog & wxMessageBox )](./04_Message_Box.md)
- [05 Status Bar](./05_Status_Bar.md)
- [06 Text Box ( wxTextCtrl )](./06_Text_Box.md)
- [07 Combo Box ( wxChoice & wxComboBox )](./07_Combo_Box.md)
- [08 List Box ( wxListBox )](./08_List_Box.md)
- [09 Check Box ( wxCheckBox )](./09_Check_Box.md)
- [10 Radio Button ( wxRadioBox )](./10_Radio_Button.md)
- [11 Progress Bar ( wxGauge )](./11_Progress_Bar.md)
- [12 Tab Panel ( wxNotebook )](./12_Tab_Panel.md)
- [13 Menu Bar ( wxMenu & wxMenuBar )](./13_Menu_Bar.md)
- [14 Image Box ( wxStaticBitmap  )](./14_Image_Box.md)



### Compiler

```shell
cd ./src/<example>
g++ main.cpp `wx-config --cxxflags --libs std` -o main
```



### ※其他注意事項※

- 這篇文章不包含函式庫安裝及環境建置，請依照其他教學完成環境建置後再使用本篇的範例程式。
- [這個網站](http://www.wxishiko.com/wxWidgetsTutorials)也有很多小型範例，而且他也有做拆分檔案的動作。本篇的範例為了方便初學者閱讀，就沒有把宣告特別分割到標頭檔去了。