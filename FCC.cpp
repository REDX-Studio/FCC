#include <windows.h>

int main()
{
	RECT rsw;//����ṹ 
	int cx = GetSystemMetrics(SM_CXSCREEN);   
	int cy = GetSystemMetrics(SM_CYSCREEN);
	HWND cmd =FindWindow("ConsoleWindowClass",NULL);
	SetWindowPos(cmd,HWND_BOTTOM,0,0,0,0,SWP_HIDEWINDOW | SWP_NOOWNERZORDER);//���ش��� 
		while(1)
		{
			HWND sw=FindWindow(NULL,"ϣ�ֹܼ�");//��ͬ������(����chrome�ģ��ܲ飬���������ֻ�õ�)
			HWND swf =GetForegroundWindow(); //�Ҷ��� 
				if (sw!=0&&sw==swf){
					GetClientRect(sw,&rsw);//�鴰�ڴ�С 
					if(rsw.right==cx&&rsw.bottom==cy){
						SetWindowPos(sw,HWND_BOTTOM,0,0,0,0,SWP_HIDEWINDOW | SWP_NOOWNERZORDER);//���ش���(*��win10��ĳЩ�������ò���)
					}
			}
			Sleep(1000);
		}
	return 0;
} 
