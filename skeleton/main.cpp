#include<DxLib.h>
#include"_debug/_DebugConOut.h"
#include"_debug/_DebugDispOut.h"


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_	HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)//�G���g���[�|�C���g 
{
	ChangeWindowMode(true);
	SetMainWindowText("2016016_�����@����");
	SetGraphMode(500, 500, 32);
	_dbgSetup(500, 500, 255);			//255�͓����x	
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		_dbgStartDraw();

		SetDrawScreen(DX_SCREEN_BACK);
		ClearDrawScreen();
		_dbgAddDraw();
		ScreenFlip();


	}
	if (ProcessMessage() == 0)//�E�B���h�E������ۂɉ����A�N�V�������N����
	{

	}
	DxLib_End();
}
