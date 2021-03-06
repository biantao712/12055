
#ifndef __FFMPEG_COMM_H__
#define __FFMPEG_COMM_H__
#include <media/oppostagefright/MediaDefs.h>

struct CodecInfo {
    enum CodecID  codeId;
    const char *mime;
};


static const CodecInfo SWCodecInfo[]= {
    /* audio codecs */
{CODEC_ID_AMR_NB, android::MEDIA_MIMETYPE_AUDIO_AMR_NB},		
{CODEC_ID_AMR_WB, android::MEDIA_MIMETYPE_AUDIO_AMR_WB},		
{CODEC_ID_AAC, 		android::MEDIA_MIMETYPE_AUDIO_AAC},		
{CODEC_ID_PCM_U8, android::MEDIA_MIMETYPE_AUDIO_PCM_U8},		
{CODEC_ID_PCM_S16LE, android::MEDIA_MIMETYPE_AUDIO_RAW},		
{CODEC_ID_PCM_S16BE, android::MEDIA_MIMETYPE_AUDIO_RAW},		
//{CODEC_ID_AC3, android::MEDIA_MIMETYPE_AUDIO_AC3},		
{CODEC_ID_MP3, android::MEDIA_MIMETYPE_AUDIO_MPEG},		
{CODEC_ID_COOK, android::MEDIA_MIMETYPE_AUDIO_COOK},		
{CODEC_ID_MP1, android::MEDIA_MIMETYPE_AUDIO_MPEG1},		
{CODEC_ID_MP2, android::MEDIA_MIMETYPE_AUDIO_MPEG2},		
{CODEC_ID_RA_144, android::MEDIA_MIMETYPE_AUDIO_RA144},		
{CODEC_ID_RA_288, android::MEDIA_MIMETYPE_AUDIO_RA288},		
{CODEC_ID_VORBIS, android::MEDIA_MIMETYPE_AUDIO_VORBIS},		
{CODEC_ID_DTS, android::MEDIA_MIMETYPE_AUDIO_DTS},		
{CODEC_ID_ADPCM_IMA_QT, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_QT},		
{CODEC_ID_ADPCM_IMA_WAV, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_WAV},		
{CODEC_ID_ADPCM_IMA_DK3, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_DK3},		
{CODEC_ID_ADPCM_IMA_DK4, 		android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_DK4},		
{CODEC_ID_ADPCM_IMA_WS, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_WS},		
{CODEC_ID_ADPCM_IMA_SMJPEG, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_SMJPEG},		
{CODEC_ID_ADPCM_MS, android::MEDIA_MIMETYPE_AUDIO_ADPCM_MS},		
{CODEC_ID_ADPCM_4XM, android::MEDIA_MIMETYPE_AUDIO_ADPCM_4XM},		
{CODEC_ID_ADPCM_XA, android::MEDIA_MIMETYPE_AUDIO_ADPCM_XA},		
{CODEC_ID_ADPCM_ADX, android::MEDIA_MIMETYPE_AUDIO_ADPCM_ADX},		
{CODEC_ID_ADPCM_EA, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA},		
{CODEC_ID_ADPCM_G726, android::MEDIA_MIMETYPE_AUDIO_ADPCM_G726},		
{CODEC_ID_ADPCM_CT, android::MEDIA_MIMETYPE_AUDIO_ADPCM_CT},		
{CODEC_ID_ADPCM_SWF, android::MEDIA_MIMETYPE_AUDIO_ADPCM_SWF},		
{CODEC_ID_ADPCM_YAMAHA, android::MEDIA_MIMETYPE_AUDIO_ADPCM_YAMAHA},		
{CODEC_ID_ADPCM_SBPRO_4, android::MEDIA_MIMETYPE_AUDIO_ADPCM_SBPRO_4},		
{CODEC_ID_ADPCM_SBPRO_3, android::MEDIA_MIMETYPE_AUDIO_ADPCM_SBPRO_3},		
{CODEC_ID_ADPCM_SBPRO_2, android::MEDIA_MIMETYPE_AUDIO_ADPCM_SBPRO_2},	
{CODEC_ID_ADPCM_THP, android::MEDIA_MIMETYPE_AUDIO_ADPCM_THP},	
{CODEC_ID_ADPCM_IMA_AMV, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_AMV},	
{CODEC_ID_ADPCM_EA_R1, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA_R1},	
{CODEC_ID_ADPCM_EA_R3, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA_R3},		
{CODEC_ID_ADPCM_EA_R2, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA_R2},	
{CODEC_ID_ADPCM_IMA_EA_SEAD, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_EA_SEAD},	
{CODEC_ID_ADPCM_IMA_EA_EACS, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_EA_EACS},	
{CODEC_ID_ADPCM_EA_XAS, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA_XAS},	
{CODEC_ID_ADPCM_EA_MAXIS_XA, android::MEDIA_MIMETYPE_AUDIO_ADPCM_EA_MAXIS_XA},	
{CODEC_ID_ADPCM_IMA_ISS, android::MEDIA_MIMETYPE_AUDIO_ADPCM_IMA_ISS},	
{CODEC_ID_WMAV1, android::MEDIA_MIMETYPE_AUDIO_WMA1},		
{CODEC_ID_WMAV2, android::MEDIA_MIMETYPE_AUDIO_WMA2},	
{CODEC_ID_QDM2, android::MEDIA_MIMETYPE_AUDIO_QDM2},	
{CODEC_ID_WMAPRO, android::MEDIA_MIMETYPE_AUDIO_WMAPRO},
//{CODEC_ID_EAC3, android::MEDIA_MIMETYPE_AUDIO_EAC3},
{CODEC_ID_PCM_F32BE, android::MEDIA_MIMETYPE_AUDIO_PCM_F32BE},
{CODEC_ID_PCM_F32LE, android::MEDIA_MIMETYPE_AUDIO_PCM_F32LE},
{CODEC_ID_FLAC, android::MEDIA_MIMETYPE_AUDIO_FLAC},
{CODEC_ID_SIPR, android::MEDIA_MIMETYPE_AUDIO_SIPR},
{CODEC_ID_PCM_F64LE, android::MEDIA_MIMETYPE_AUDIO_PCM_F64LE},
{CODEC_ID_PCM_S24LE, android::MEDIA_MIMETYPE_AUDIO_PCM_S24LE},
{CODEC_ID_PCM_S32LE, android::MEDIA_MIMETYPE_AUDIO_PCM_S32LE},
{CODEC_ID_PCM_ZORK, android::MEDIA_MIMETYPE_AUDIO_PCM_ZORK},
{CODEC_ID_PCM_BLURAY, android::MEDIA_MIMETYPE_AUDIO_DLPCM},
{CODEC_ID_APE, android::MEDIA_MIMETYPE_AUDIO_APE},
{CODEC_ID_TRUEHD, android::MEDIA_MIMETYPE_AUDIO_TRUEHD},
{CODEC_ID_WMALOSSLESS, android::MEDIA_MIMETYPE_AUDIO_WMALOSS},

/* video codecs */
{CODEC_ID_MSMPEG4V1, android::MEDIA_MIMETYPE_VIDEO_MSMPEG4V1},	
{CODEC_ID_MSMPEG4V2, android::MEDIA_MIMETYPE_VIDEO_MSMPEG4V2},		
{CODEC_ID_MSMPEG4V3, android::MEDIA_MIMETYPE_VIDEO_MSMPEG4V3},	
{CODEC_ID_MPEG4, android::MEDIA_MIMETYPE_VIDEO_MPEG4},	
{CODEC_ID_H263, android::MEDIA_MIMETYPE_VIDEO_H263},	
{CODEC_ID_H264, android::MEDIA_MIMETYPE_VIDEO_AVC},	
{CODEC_ID_FLV1, android::MEDIA_MIMETYPE_VIDEO_FLV1},		
{CODEC_ID_VP6, android::MEDIA_MIMETYPE_VIDEO_VP6},	
{CODEC_ID_VP6F, android::MEDIA_MIMETYPE_VIDEO_VP6F},	
{CODEC_ID_RV10, android::MEDIA_MIMETYPE_VIDEO_RV10},	
{CODEC_ID_RV20, android::MEDIA_MIMETYPE_VIDEO_RV20},	
{CODEC_ID_RV30, android::MEDIA_MIMETYPE_VIDEO_RV30},		
{CODEC_ID_RV40, android::MEDIA_MIMETYPE_VIDEO_RV40},	
{CODEC_ID_WMV1, android::MEDIA_MIMETYPE_VIDEO_WMV1},	
{CODEC_ID_WMV2, android::MEDIA_MIMETYPE_VIDEO_WMV2},	
{CODEC_ID_WMV3, android::MEDIA_MIMETYPE_VIDEO_WMV3},	
{CODEC_ID_VC1, android::MEDIA_MIMETYPE_VIDEO_VC1},	
{CODEC_ID_MPEG1VIDEO, android::MEDIA_MIMETYPE_VIDEO_MPEG1},		
{CODEC_ID_MPEG2VIDEO, android::MEDIA_MIMETYPE_VIDEO_MPEG2},	
{CODEC_ID_SVQ1, android::MEDIA_MIMETYPE_VIDEO_SVQ1},	
{CODEC_ID_SVQ3, android::MEDIA_MIMETYPE_VIDEO_SVQ3},	
{CODEC_ID_MJPEG, android::MEDIA_MIMETYPE_VIDEO_MJPEG},	
{CODEC_ID_INDEO3, android::MEDIA_MIMETYPE_VIDEO_INDEO3},
{CODEC_ID_MPEG4, android::MEDIA_MIMETYPE_VIDEO_DIVX},	
{CODEC_ID_MPEG4, android::MEDIA_MIMETYPE_VIDEO_DIVX4},
};

#endif

