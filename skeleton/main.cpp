#include<DxLib.h>



int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_	HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)//エントリーポイント 
{
	ChangeWindowMode(true);
	SetMainWindowText("2016016_杉岡　竜二");
	SetGraphMode(500, 500, 32);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();
		ScreenFlip();


	}
	if (ProcessMessage() == 0)//ウィンドウが閉じる際に何かアクションを起こす
	{

	}
	DxLib_End();
}
