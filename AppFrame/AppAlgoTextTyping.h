#pragma once
#include "QRWordArt/QRStringLine.h"

class AppAlgoTextTyping
{
public:
	AppAlgoTextTyping(void);
public:
	//貼輸入字串，回傳能否貼上去
	//置左
	bool Typing(std::string& string, QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor,bool cut_word=false);  //"游標位置"
	bool Typing_Space(QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor, bool IsEnd= false);	 //"游標位置"
	//置右
	bool R_Typing(std::string string, QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor,bool cut_word=false);  //"游標位置"
	bool R_Typing_Space(QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor);	 //"游標位置"

	//選擇貼輸入字串
	void Typing_Order(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline,int& from,bool cut_word=false);
	void Typing_Random(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline,bool cut_word=false);
	void Typing_Energy(HKCAppItem^ _appItem,QRWordArt::QRStringLine& spline,bool cut_word=false);
	void Typing_Fitting(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline , int id = -1 );

	string TextRemain;
	int TextRemainId;
	int img_height;
	int img_width;
};