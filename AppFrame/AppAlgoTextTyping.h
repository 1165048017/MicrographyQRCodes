#pragma once
#include "QRWordArt/QRStringLine.h"

class AppAlgoTextTyping
{
public:
	AppAlgoTextTyping(void);
public:
	//�K��J�r��A�^�ǯ�_�K�W�h
	//�m��
	bool Typing(std::string& string, QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor,bool cut_word=false);  //"��Ц�m"
	bool Typing_Space(QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor, bool IsEnd= false);	 //"��Ц�m"
	//�m�k
	bool R_Typing(std::string string, QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor,bool cut_word=false);  //"��Ц�m"
	bool R_Typing_Space(QRWordArt::QRStringLine& spline, HSSSpline::Sample from, HSSSpline::Sample to,
		        HSSSpline::Sample* cursor);	 //"��Ц�m"

	//��ܶK��J�r��
	void Typing_Order(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline,int& from,bool cut_word=false);
	void Typing_Random(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline,bool cut_word=false);
	void Typing_Energy(HKCAppItem^ _appItem,QRWordArt::QRStringLine& spline,bool cut_word=false);
	void Typing_Fitting(vector<std::string>& strings_data,QRWordArt::QRStringLine& spline , int id = -1 );

	string TextRemain;
	int TextRemainId;
	int img_height;
	int img_width;
};