#include<DxLib.h>



int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_	HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)//�G���g���[�|�C���g 
{
	ChangeWindowMode(true);
	SetMainWindowText("2016016_�����@����");
	SetGraphMode(500, 500, 32);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();
		ScreenFlip();


	}
	if (ProcessMessage() == 0)//�E�B���h�E������ۂɉ����A�N�V�������N����
	{

	}
	DxLib_End();
}
