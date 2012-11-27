/**   
 *	StrongFFplugin ���
 */
#ifndef STRONGFFPLUGIN_H_2012_10_10_LSM
#define STRONGFFPLUGIN_H_2012_10_10_LSM

#ifdef STRONGFFPLUGIN_EXPORTS
#define STRONGFFPLUGIN_DLL_API __declspec(dllexport)
#else
#define STRONGFFPLUGIN_DLL_API __declspec(dllimport)
#pragma comment(lib, "StrongFFplugin.lib")
#endif

#define X264_ENCODER_NAME					"x264Encoder"		//x264��Ƶ������
#define LIBAACPLUS_ENCODER_NAME				"libaacplus"		//aacplus��Ƶ������
#define LIBFAAC_ENCODER_NAME				"libfaac"			//faac��Ƶ������
#define STICK_FIGURE_NAME					"stickfigure"		//stickfigure��Ƶ��Ч
#define FILE_PROTOCOL_NAME					"file"				//fileЭ�飨�ļ������ö��ַ�����

extern "C" STRONGFFPLUGIN_DLL_API int av_register_strongffplugin(void * module);

#endif