/**   
 *	StrongFFplugin and FEEServer 
 *	Copyright(C) 2010-2013 lsm �汾����
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

#ifdef STRONGFFPLUGIN_EXPORTS
#define STRONGFFPLUGIN_DLL_API __declspec(dllexport)
#else
#define STRONGFFPLUGIN_DLL_API __declspec(dllimport)
#pragma comment(lib, "StrongFFplugin.lib")
#endif

/**
 *	-----------------------------------------------------------------------------
 *								StrongFFplugin
 *	-----------------------------------------------------------------------------
 */

#define X264_AVC_ENCODER_NAME				"x264AVCEncoder"	//x264��Ƶ������		
#define INTEL_AVC_DECODER_NAME				"intelAVCDecoder"	//intel��Ƶ������
#define INTEL_AVC_ENCODER_NAME				"intelAVCEncoder"	//intel��Ƶ������
#define LIBAACPLUS_ENCODER_NAME				"libaacplus"		//aacplus��Ƶ������
#define LIBFAAC_ENCODER_NAME				"libfaac"			//faac��Ƶ������
#define STICK_FIGURE_NAME					"stickfigure"		//stickfigure��Ƶ��Ч
#define FILE_PROTOCOL_NAME					"file"				//fileЭ��
#define SUBHANG_AVFILTER_NAME				"subHang"			//subHang��Ļ��Ƶ����
#define PIPE_PROTOCOL_NAME					"pipe"				//pipe�����ܵ�Э��
#define AVFS_FORMAT_NAME					"avfs"				//avfs�ļ�����



#define AV_REGISTER_SFFPLUGIN_FLAG_FORCE_INTEL_HARDWARE			0x01	//ǿ��ע��intelӲ�����������û��Ӳ����ʹ��intel��������
/**
 *	���ע��
 *	flag : ע��ʱ����
 */
ECTERN_C STRONGFFPLUGIN_DLL_API int av_register_strongffplugin(void * module,int reg_flag = 0);


















/**
 *	-----------------------------------------------------------------------------
 *	                      Fast Easy Efficient Media Server
 *	-----------------------------------------------------------------------------
 *
 *	�����С����� ������
 *
 */

#define FEEMSERVER_FREE_VERSION 1
#define FEESERVER_NOFREE_VERSION_AD "��ʽ�汾:StrongFFplugin��ģ������;FEEMServer�޴�������;ffparseԴ��ȵ�."
#define FEEMSERVER_NOFREE_VERSION_STRING "������ʽ�汾֧��"
#define MAX_USE_REGISTER_APP_NUMBER 10

enum enFEEMSError
{
	enFEEMSError_NotFree = -3,
	enFEEMSError_LOG_CONFIG = -2,
	enFEEMSError_Param = -1,
	enFEEMSError_No = 0,
};

/**
 *	��ʼ����
 *	Param:
 *		log_dir_path			��־�ļ������ļ��У�NULL is current dir
 */
ECTERN_C STRONGFFPLUGIN_DLL_API int InitFEEMServer(char * log_dir_path);


/**
 *	�ͷſ�
 */
ECTERN_C STRONGFFPLUGIN_DLL_API void DestroyFEEMServer();


#endif