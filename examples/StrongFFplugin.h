/**   
 *	-----------------------------------------------------------------------------
 *								StrongFFplugin
 *					 Copyright(C) 2010-2013 lsm �汾����
 *	-----------------------------------------------------------------------------
 */

#ifndef STRONGFFPLUGIN_H_2012_10_10_LSM
#define STRONGFFPLUGIN_H_2012_10_10_LSM

#ifdef __cplusplus
#define ECTERN_C extern "C" 
extern "C" {
#include <stdint.h>
}
#else
#define ECTERN_C
#include <stdint.h>
#endif

#if STRONGFFPLUGIN_EXPORTS
#define STRONGFFPLUGIN_DLL_API __declspec(dllexport)
#else
#define STRONGFFPLUGIN_DLL_API __declspec(dllimport)
#pragma comment(lib, "StrongFFplugin.lib")
#endif


#define STRONGFFPLUGIN_VALID_DATE_YEAR		2013		//��Ч�� ��
#define STRONGFFPLUGIN_VALID_DATE_MONTH		8			//��Ч�� ��
#define STRONGFFPLUGIN_VALID_DATE_DAY		1			//��Ч�� �� 


#define X264_ENCODER_NAME					"x264Encoder"		//x264��Ƶ������	
#define X265_ENCODER_NAME					"x265Encoder"		//x265��Ƶ������
#define H265_DECODER_NAME					"h265"				//h265��Ƶ������
#define INTEL_AVC_DECODER_NAME				"intelAVCDecoder"	//intel��Ƶ������
#define INTEL_ENCODER_NAME					"intelEncoder"		//intel��Ƶ������
#define LIBAACPLUS_ENCODER_NAME				"libaacplus"		//aacplus��Ƶ������
#define LIBFAAC_ENCODER_NAME				"libfaac"			//faac��Ƶ������
#define STICK_FIGURE_NAME					"stickfigure"		//stickfigure��Ƶ��Ч
#define FILE_PROTOCOL_NAME					"file"				//fileЭ��
#define SUBHANG_AVFILTER_NAME				"subHang"			//subHang��Ļ��Ƶ����
#define PIPE_PROTOCOL_NAME					"pipe"				//pipe�����ܵ�Э��
#define AVFS_FORMAT_NAME					"avfs"				//avfs�ļ�����
#define H265_FORMAT_NAME					"h265"				//h265�ļ�����



#define AV_REGISTER_SFFPLUGIN_FLAG_FORCE_INTEL_HARDWARE			0x01	//ǿ��ע��intelӲ�����������û��Ӳ����ʹ��intel��������

/**
 *	���ע��
 *	flag : ע��ʱ����
 *			AV_REGISTER_SFFPLUGIN_FLAG_FORCE_INTEL_HARDWARE
 */
ECTERN_C STRONGFFPLUGIN_DLL_API int av_register_strongffplugin(void * module,int reg_flag = 0);


#endif
