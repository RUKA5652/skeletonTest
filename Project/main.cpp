#include<DxLib.h>



/*
�E�B���h�E���J���Ă�̂́@OS
�A�v���P�[�V������Windows�ɑ΂��ā@���������E�B���h�E������ĊJ���Ăˁ@�Ƃ��f���𗧂ĂĂ���

����@main�֐�������܂��A������Ăяo���Ă���̂�OS�ł�

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

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_	HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)//�G���g���[�|�C���g 
{
	SetWindowText("2016016_�����@����");
	SetGraphMode(500, 500, 16);
		ChangeWindowMode(true);
				DxLib_Init();
				SetDrawScreen(DX_SCREEN_BACK);

				while (!CheckHitKey(KEY_INPUT_ESCAPE))
				{
						ClearDrawScreen();
						ScreenFlip();

						if (ProcessMessage())//�E�B���h�E������ۂɉ����A�N�V�������N����
						{
							break;
						}
				}
				DxLib_End();
}