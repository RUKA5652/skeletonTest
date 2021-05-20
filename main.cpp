#include<DxLib.h>



/*
ウィンドウを開いてるのは　OS
アプリケーションはWindowsに対して　こういうウィンドウを作って開いてね　とお伺いを立てている

今回　main関数があります、これを呼び出しているのはOSです

*/
//int main()
//{
//		ChangeWindowMode(true);
//		DxLib_Init();
//		SetDrawScreen(DX_SCREEN_BACK);
//		while (ProcessMessage() != -1 )
//		{
//				ClearDrawScreen();
//				ScreenFlip();
//		}
//		DxLib_End();
//}

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_	HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)//エントリーポイント 
{
	SetWindowText("2016016_杉岡　竜二");
	SetGraphMode(500, 500, 16);
		ChangeWindowMode(true);
				DxLib_Init();
				SetDrawScreen(DX_SCREEN_BACK);

				while (!CheckHitKey(KEY_INPUT_ESCAPE))
				{
						ClearDrawScreen();
						ScreenFlip();

						if (ProcessMessage())//ウィンドウが閉じる際に何かアクションを起こす
						{
							break;
						}
				}
				DxLib_End();
}