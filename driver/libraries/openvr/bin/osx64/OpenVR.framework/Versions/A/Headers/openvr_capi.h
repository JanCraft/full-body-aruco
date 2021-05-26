//======= Copyright (c) Valve Corporation, All rights reserved. ===============
//
// Purpose: Header for flatted SteamAPI. Use this for binding to other languages.
// This file is auto-generated, do not edit it.
//
//=============================================================================

#ifndef __OPENVR_API_FLAT_H__
#define __OPENVR_API_FLAT_H__
#if defined( _WIN32 ) || defined( __clang__ )
#pragma once
#endif

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

#if defined( _WIN32 )
#define OPENVR_FNTABLE_CALLTYPE __stdcall
#else
#define OPENVR_FNTABLE_CALLTYPE 
#endif

// OPENVR API export macro
#if defined( _WIN32 ) && !defined( _X360 )
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C __declspec( dllexport )
	#elif defined( OPENVR_API_NODLL )
	#define S_API EXTERN_C
	#else
	#define S_API extern "C" __declspec( dllimport ) 
	#endif // OPENVR_API_EXPORTS
#elif defined( __GNUC__ )
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C __attribute__ ((visibility("default")))
	#else
	#define S_API EXTERN_C
	#endif // OPENVR_API_EXPORTS
#else // !WIN32
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C
	#else
	#define S_API EXTERN_C
	#endif // OPENVR_API_EXPORTS
#endif

#include <stdint.h>

#if defined( __WIN32 )
typedef char bool;
#else
#include <stdbool.h>
#endif

typedef uint64_t PropertyContainerHandle_t;
typedef uint32_t PropertyTypeTag_t;
typedef uint64_t VRActionHandle_t;
typedef uint64_t VRActionSetHandle_t;
typedef uint64_t VRInputOriginHandle_t;


// OpenVR Constants

static const unsigned int k_nDriverNone = 4294967295;
static const unsigned int k_unMaxDriverDebugResponseSize = 32768;
static const unsigned int k_unTrackedDeviceIndex_Hmd = 0;
static const unsigned int k_unMaxTrackedDeviceCount = 16;
static const unsigned int k_unTrackedDeviceIndexOther = 4294967294;
static const unsigned int k_unTrackedDeviceIndexInvalid = 4294967295;
static const unsigned long k_ulInvalidPropertyContainer = 0;
static const unsigned int k_unInvalidPropertyTag = 0;
static const unsigned int k_unFloatPropertyTag = 1;
static const unsigned int k_unInt32PropertyTag = 2;
static const unsigned int k_unUint64PropertyTag = 3;
static const unsigned int k_unBoolPropertyTag = 4;
static const unsigned int k_unStringPropertyTag = 5;
static const unsigned int k_unHmdMatrix34PropertyTag = 20;
static const unsigned int k_unHmdMatrix44PropertyTag = 21;
static const unsigned int k_unHmdVector3PropertyTag = 22;
static const unsigned int k_unHmdVector4PropertyTag = 23;
static const unsigned int k_unHiddenAreaPropertyTag = 30;
static const unsigned int k_unOpenVRInternalReserved_Start = 1000;
static const unsigned int k_unOpenVRInternalReserved_End = 10000;
static const unsigned int k_unMaxPropertyStringSize = 32768;
static const unsigned int k_unControllerStateAxisCount = 5;
static const unsigned long k_ulOverlayHandleInvalid = 0;
static const unsigned int k_unScreenshotHandleInvalid = 0;
static const char * IVRSystem_Version = "IVRSystem_017";
static const char * IVRExtendedDisplay_Version = "IVRExtendedDisplay_001";
static const char * IVRTrackedCamera_Version = "IVRTrackedCamera_003";
static const unsigned int k_unMaxApplicationKeyLength = 128;
static const char * k_pch_MimeType_HomeApp = "vr/home";
static const char * k_pch_MimeType_GameTheater = "vr/game_theater";
static const char * IVRApplications_Version = "IVRApplications_006";
static const char * IVRChaperone_Version = "IVRChaperone_003";
static const char * IVRChaperoneSetup_Version = "IVRChaperoneSetup_005";
static const char * IVRCompositor_Version = "IVRCompositor_021";
static const unsigned int k_unVROverlayMaxKeyLength = 128;
static const unsigned int k_unVROverlayMaxNameLength = 128;
static const unsigned int k_unMaxOverlayCount = 64;
static const unsigned int k_unMaxOverlayIntersectionMaskPrimitivesCount = 32;
static const char * IVROverlay_Version = "IVROverlay_016";
static const char * k_pch_Controller_Component_GDC2015 = "gdc2015";
static const char * k_pch_Controller_Component_Base = "base";
static const char * k_pch_Controller_Component_Tip = "tip";
static const char * k_pch_Controller_Component_HandGrip = "handgrip";
static const char * k_pch_Controller_Component_Status = "status";
static const char * IVRRenderModels_Version = "IVRRenderModels_005";
static const unsigned int k_unNotificationTextMaxSize = 256;
static const char * IVRNotifications_Version = "IVRNotifications_002";
static const unsigned int k_unMaxSettingsKeyLength = 128;
static const char * IVRSettings_Version = "IVRSettings_002";
static const char * k_pch_SteamVR_Section = "steamvr";
static const char * k_pch_SteamVR_RequireHmd_String = "requireHmd";
static const char * k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
static const char * k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
static const char * k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
static const char * k_pch_SteamVR_DebugProcessPipe_String = "debugProcessPipe";
static const char * k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
static const char * k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
static const char * k_pch_SteamVR_SendSystemButtonToAllApps_Bool = "sendSystemButtonToAllApps";
static const char * k_pch_SteamVR_LogLevel_Int32 = "loglevel";
static const char * k_pch_SteamVR_IPD_Float = "ipd";
static const char * k_pch_SteamVR_Background_String = "background";
static const char * k_pch_SteamVR_BackgroundUseDomeProjection_Bool = "backgroundUseDomeProjection";
static const char * k_pch_SteamVR_BackgroundCameraHeight_Float = "backgroundCameraHeight";
static const char * k_pch_SteamVR_BackgroundDomeRadius_Float = "backgroundDomeRadius";
static const char * k_pch_SteamVR_GridColor_String = "gridColor";
static const char * k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
static const char * k_pch_SteamVR_ShowStage_Bool = "showStage";
static const char * k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
static const char * k_pch_SteamVR_DirectMode_Bool = "directMode";
static const char * k_pch_SteamVR_DirectModeEdidVid_Int32 = "directModeEdidVid";
static const char * k_pch_SteamVR_DirectModeEdidPid_Int32 = "directModeEdidPid";
static const char * k_pch_SteamVR_UsingSpeakers_Bool = "usingSpeakers";
static const char * k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float = "speakersForwardYawOffsetDegrees";
static const char * k_pch_SteamVR_BaseStationPowerManagement_Bool = "basestationPowerManagement";
static const char * k_pch_SteamVR_NeverKillProcesses_Bool = "neverKillProcesses";
static const char * k_pch_SteamVR_SupersampleScale_Float = "supersampleScale";
static const char * k_pch_SteamVR_AllowAsyncReprojection_Bool = "allowAsyncReprojection";
static const char * k_pch_SteamVR_AllowReprojection_Bool = "allowInterleavedReprojection";
static const char * k_pch_SteamVR_ForceReprojection_Bool = "forceReprojection";
static const char * k_pch_SteamVR_ForceFadeOnBadTracking_Bool = "forceFadeOnBadTracking";
static const char * k_pch_SteamVR_DefaultMirrorView_Int32 = "defaultMirrorView";
static const char * k_pch_SteamVR_ShowMirrorView_Bool = "showMirrorView";
static const char * k_pch_SteamVR_MirrorViewGeometry_String = "mirrorViewGeometry";
static const char * k_pch_SteamVR_StartMonitorFromAppLaunch = "startMonitorFromAppLaunch";
static const char * k_pch_SteamVR_StartCompositorFromAppLaunch_Bool = "startCompositorFromAppLaunch";
static const char * k_pch_SteamVR_StartDashboardFromAppLaunch_Bool = "startDashboardFromAppLaunch";
static const char * k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool = "startOverlayAppsFromDashboard";
static const char * k_pch_SteamVR_EnableHomeApp = "enableHomeApp";
static const char * k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 = "CycleBackgroundImageTimeSec";
static const char * k_pch_SteamVR_RetailDemo_Bool = "retailDemo";
static const char * k_pch_SteamVR_IpdOffset_Float = "ipdOffset";
static const char * k_pch_SteamVR_AllowSupersampleFiltering_Bool = "allowSupersampleRIFF�> WEBPVP8X
      ? �  ANIM   ����  ANMF�        ? �  }  VP8 �  �q �*@� >�@�J���"%�;��	e��t'p���4϶�I�3�y�;v�gE��%~��:p��춂���~�����|��o�?���ލ{��'������+����?h��{�~����#����?�{ �%���G����W���4=��;����G�?�?��{Uz������g�����0��+��&;}yk��֙��e��պ�zH�[Ω����p��3+��ew����O�c�x���尼�S��)���o�>���l������� .�W��/����+�vBֶ͔v5�G��l�ed����4z����[���J2�D��j�'s�x
|d��
i /f�y���N�i���G�?�TQ)LcF�M���C�y�e���	>���A#Xt
_f�`�ݻ���D�=�B���Pgx`���V���k�soڢ�
���s�*���}y�~
�`nC��-�,H�r�VR/�c<y�I4Ė �+��ɃZ��1`�\�.�A�?����P��Q��%�7GT�7����6:� �ϴ|zX`k�A[�&��c ��NY�qw�p�_�Նp���˄ʗ�)�K5�!_�{z�b�Oؾ�;�OF�<f�f��Cr�	�����d�U'��CTp֦��iUR1ʳ�]�n�M��zPhH}�x� Z�x��S`yB
��J)s�	��=�r����B����"���]�����oz��lR�.���W���q��F������i�V�5�Rգ�"\�"�<����q"��G7�~�͋�����M$�,e�w��
�6D�1�I5�:?s0���(���%��	�$����K�\�t�I�7�tb+�.�m_����9�ېe�����P�JEn�a	���Fq�~�I�-NY����v�H�U�! "��bh�O`d���j�K0 T�M|^T%m��]��w'S�׹�`��]����w�ͤ�]�̙�y���I�<��5H"�y/ ����a��,/��F��:��z�5>��� ��F���u�KM��*� GHR�,�ZgT�J-!p��Wf�ș���,ć!�!W�)�x�zud��"�ʐ��&_��f�h'`Q
@���HU��P���b|e%$��8�Gu5^��%{w�RͰ�c���dZ����U}�ޓ��)� FpuqH����m�.��rB�j����iWE|�
�و]�栞͝C��1'���
n��*z`�4�lp�M{�w���Ѱ
��L3+��9��L�=&���I���5�Ǖb�������Z�����z�ʼ9�<)C�JFhCs��
!M#�O�@͇w��u��oI�ɍ�#��3~�9��3�q�" �s�x��'}�R�na���u�a>۱��(�����^������XkQ�A@Z�6�v��[�'��#$,��(Pk5�U��V��	$����?��d��R��i��i//�jxi,y����?m2�8֙��
�"\�/JX˂������r��}$I�5����}B��I�?B�%��\Hq`�E-��PG��,�dݑ�
�-^l�a����敻��/P�k)��
+��c�ԡ�~�x�Y���6yƮ�Zd��~h��jG��KE7�#�A�"�$%n7-������ԭ�V���O�j�v��[Լ���H�w\Ыh�x�6Z���ͽ���\��%-��d�}��/G��tϽ�փ�&5��Ϫ����r�%��Oe��p���dr?�gd�MXq٤v�_H�g�A�M�0��"+�;!EݵŬ�દ|q
Kj�U�/eh��4߹�#*[�w�G�P�#^X�&�^�F(2gh��?^&E!��h���g|�<6Sڣ��ٱ�Yi]��KJ�ȝ���ÇT���Ʒ} w�GWftY*�`�gR>D/k�
��l�c8,���:�E�o��#�%�����"bҺ��?���]�p̈����D�/����@Z��r ,�tYĘ\U���i�[��HI�Y�)��QZ%���亳��������/�5n��b
��Tp��6��/�O�Y�FFt2��R|��[� v�IR��(�"E�v�*:|b#��M�PB#���w K�EƧ��`�={.�UWf�^3�J����9�R��Q��z߇�%4��ُ�ckLp�P�x�+�'E�
nLޢ6mʒ��&�`4��-���������gP��z��gl
]�x�(Y���]K�2/�rw��n`"S=3�]��jg�ȯ��F�� ���x�Hn�a\�*Jv�"�f�F��T���DۦJ�@��ݣɥ��e'GZ�˹ �Դ�oݟ~�Zr����~��'z��A*'�ri&���Zh����g�039^+��H��d'7��B��U���ʜ��0n�&����V��YF�w�v���}L���!��;q��������Z:a��
q�q�;<1���>Z�x���3ڿ��W�G~J2z
���Ю��ׁ�1�����N!��vs�
�Y�S�_��6�����>}�D�,q�!�V�}-�Q{x�*r��Ȑ`a�&�.��
�J�w�m��1�����u��{��`��nB-��[�

?�������}_̢��Ɨ��m0�VSX�j2RYr��)[�F����໒�?A&t�[��ީ-^W����3��RǬf�q�6גL{��2�])��`le"���kq~g�F1���(^B,JI���jYIV�,a����	Vj?�M/��n����Ӏ    ANMF�        ? �  }  VP8 l  �[ �*@� >�D�KAM�� �p=��DG�2F�^u
`�_љ��Lp I�[ \���WZ�`y�h��D��
��u�P������}���o����d�8��G��T��9�I��)_�R�{̨RoL%;_��ʽT��� �<c|C���B\f���Ż������L�/�Z��i�}�� ;�`�E��)y�jn��S1�)"�r�#�|f�K5~�|���䫙�'+~C�EF����vRy���P�V	u);�{�q�Y�*P��;h?� �Y~�AC��er����c��	��R��eI�r�\���u��R�� U|By��_N�uX˂�^ʘ���j��#-�Z�Ђ��h5P�a�& �N�⦃�<|��R�dVpW���@��^;Ɓ)N�oe�}����g��»�9X�2�T�d iʾ�C,,��)oOSq�EK�	�>qC�����<�|���0�T��wͨ�Iԫ�aYc�ڼ#*���?Ȩ�:y:m�"��M|{��X�պi��X�6[�Ȇs�E0�|�|
�<�h���6S�(qb�$p���g����r��C~��'��l��S�X���$�u�j�1�
���=Y7$~1Vz\tӂՃ����
;z�gvP�^�?�$�+�0�fH!�y���>wzKR�
��n�}=�Ȥ5�	���`	�2��o�z֐���!�������Plψw���F� �P^%�����S�����q�h�a{a��KX�@���ɡ�wR	�I�����Vɰ*�5�t7Kê*�i�ɶ<ٔK�Q:��ؒ9]�l�p���17-D�Ɵ�Ǯ;���;��*pߡ�V,�Ȟ+��uc2���7�϶�a\�9�a�P���Z�x��F��h��Ǜ�wO����]ԛ�u�f�!f妛�<��!�6/�?��z���P�>��0�{;FP
��-G�Xhi���0$�A��(�k?�/g��%��v�Y���m�����p=R�F��4�3^��2���ڏ�4����Z���$S�ͶI�>�yu)��H|WL�Z�蝐�A0�f�}���h~���-��x*�ZH�v���1�ɨ���ŗm:��O˯�2Bď����g0�8_ov��c�h�o)���" |T��=�C>�R�)�G����s7<�MJ��6p�kEb�9�D5@0ܱ:M��'�0x)B *�:� <l��'��k����[���]5®C!�
�{�C:�|،��C�8�F5��<�J��JS-<�"d(jvN��bWy��Gq�&r��h����S�@�2F�戞t��%�����"MUirҔe��ǵs#�{���0�6�ܒ}�S p��F��^P�����`�~ݩ��h #l]SG�E�J�,gwL��
��'��	D�� ��[��
~�;}(��DI�ZOc١��pn.zjH��{X�+����)Z}�W��;Q3��X�Qcޣ	����o꿿��Z���A���2��Ÿ���%>�៩��å��|�iKs�~�x��X.����Zr�iV�	7?+��yQ> 'ͫM�;�>� �zz�"�ՒXQkb���V�E(frd���,���!Ea�ӍE�E��>���4�S2N�t�x`��jl�0�e���S}� ���':��愐����_��ۋ��� 7c6e�R���ҫ$Xn��%�v��`X����,�il��d��nk@ʌ�R�&f7+Wah��Iݝ���-æ��i��M�����k~�*~
�I��z�b�r'g��I�7�WVGL3�`��6���x,��e�L���ro��c�p�a�Ԗ��.�h;k�
��[��\�����2K��a�ь�;�q�P�����Ac=�' =��7�-�������� E�8X؀��e���E���,~	�g�����ϲ���^ڃpKfps����O�c�A��xVY�� �wI��ϓ-$'p����]
pW�+��w��&�yK鱮�:���O�u�τX^�(9�Y�*spq�^�A���1��v I�pX��.���ݚS�:�%���裏>{h@J���ΐ!����s����hPW��L:7���t�w�� �SQ�Q���=���ٶ�x�Ls5�,�j�B�x�ͪ�8ۚ`���,?�ǿ�W��[���5 .�9���0.zbF@�3g�mp��d�������S����e׎>�@�'��_�m�1�zEeޡ�H�����>�g��~a&�%m,H��?\�:f�@���ܙ�j�b�&a����Q]���@��˖�2�ޗ�/W�0a`�$
:o��K;���c��<� I�}�	�m{Nc�"�����s-�ᭊ�,�̣ٝ	U��/��V �ǍXͮ �������:V�1����u]��@���<kL�.������]|;��&�]zo�r�rm����|�VD�+�,x� p̗��xiؐ]Kd�H��vE�Ѷ�]�2}�M�ۼ�$&Ia�Op;*}
V*8*p�$�ʪ�pQ2�,����c��R'}Sy�,�ϓ)�����,
�er��)�E���-����C���`�mDd�e�/:t1�=/2�u'y6�s��vYHVa�����u扑
����,�� %4zT��tZ�D�:_ր<13 U���%�$�|7��i�Ӽ��[�z�s,(�����|t;�eV�'("×_�Aw�tUAz���8#�y�o��
2w����)QE>������/�)W�;�QH���Zw�+�gP�r�@����� ���
S��CY�L��mP4(A�b��0´�5o�i�Z����>�f�
hHI�Cu���1�iQ���n|����c�w3�/�>Z�O����g��-��o/粒Si�������y5*��R�;��_�u�[�O:����t���Zr��~|G�ncz�Y�z�^�V���3(T�j�(`�
�V�~�z&V�L���xa�y* Bw�#.1��yz2��"���k�ߨwCD��,��"�D��	
N.��-���G"ؙ�#�6��������9s�+`��:X��&Ѯrb+�wזI�F����v_�?|��3�<[h����а�{�MXg+k�|n�p����gR1D0�qf��'ų;��h������Ϳ�{J����1��Y���c7��i��ha��J�DY����_�"�]ȉю�O�xګ	ȃM
p��Xe�_;{ԗ�6'H1��Ud+�m��s�HǸ���|]h��D>b�N�zz1ӊ	�������l'<d<�奢�6�e�(
-��J�L��}a�����a�G�p�D�6�����
1g{���e5;�I�m�����N�gYr��P;�"q1E�dR�������Tv���@l�<���:C $�_U��JY%,�qR�����FfZ����7紲�	��hz���]�\��궏�Etf��p����"� $��Вҏ���^�|�7�IY_��yR����t�����GU k��P+PRk	'Gf%�H��{�N���|�.o[�]ƹ��)��T%�ۣi��&��ܣ�i��#�����	�:���#Q�rٶ/ʵ�X�o%q=6�f�HNP��i�u�KF�H�����aD����u����Vޫ+y�{���M CX��Y	�ݵus�2�}�;%�E�U�mve+��6�kn�t�:�V�0}hǡ�jy>A��o��1 &lj1���{.Y����z��1�#�a�vf��>�k�Ǒ�]2�-l�]Es���o�Pt��0��w�/R�pփ9��?���Qޑ�HM�R��������_	ڈV��t�Y4I�iy�.u��=�̾)p�$��aS
��B�l�@��-����WVZ7��x����t��W� �Cَ��u�w�����=�><�5D�n���6YEMM
9�xHHh�ٶ�㊅�d�"�!�q�l���ߙb��nsQ}��|������E���I�*�Wo�h��_N��'�nJ~<qhM��Vئ�]QlΥ��׹�3�d!��!�t��Y.��o�L�C%�o��y��O���l��9�h��ٔ� ��Y	�Ғ`kg�����h�_b��+�FX�?�:M�z�.��t����4d�f��^�3�К��˂6�=D���J{����.W7�'D����p������L������t���@Q��kAء����F>`=��n
	w�U�L)?�5��yoPG@�/��`��TPw�$M���îy�K��N�y�`��f�rK �U�����O��g=�qѥ�+J�c5x25�S�K�:]F�r�ϛ�ɺ)i�Ƴ	�!�X<�����C����0�����G��Jg�
S�#M�M�J���P\�FñA���ES?�ڇ�`o�~�e��py3��>v����52f'�zB�.�;�+Nz�T�^`�3�7��Q�f���&ֈ�S\)&�CQ����J�i�<�'� �9�uѐ%���x�>;wp��Gf���{0 �@El�%������x
��D1�Y�w�2�%C�ĉAm�p�p�f7Q�}�X^��8*J#�� �\����pZV%v�o�Ǎp�~���������K���͑�0ʕZ�!���6��������K{C�a2���^ ��M���{�����z�!����>���U�y�A6|Y<�����H�i���˞�=�u�����!m�3��� "v]��gy���`Ĉ�&q�7��1�'��gNV�ȓ�_!�◺q0î���EW��w!>o,)a���
�&��_�]�V��4��"X�#*3��3�c�[�d�0���~���n.�
vn�#�	�,B�(ǯgȆ�J�e'�~�$й~q�k�djR���� <��E$6�K�,���)vz��k�%��N W#Ƴ���d��`cɅ�8Rb��^]7�*�E%�Ia5�*������'��?
ی�t�l5b�`���u���e<i�Ғ���~*�$��i�*����R�tN`���f\Y�j��>�O��S�l�{'+�i5�PT�W�(F9���T�0���\Ԛ>�36H�� �O�_�
TJ_\u ��N�k$F9����\<�>�п�O�2�Q���뛭t�0�Ŗf1W��a���]|@�,�� �=d4�"�����
�|م��&�˭�=���y}�!���,�j�[	ф��H���=2�������q�#��{��"�,&]QQ����#)V;Nog�Ͻ���7�@��tfɅ3���>]�,��g�>L���U��$`��w���,�ف7w�B���CB�̄s��r�O�~G�,k���!�ᙿ
r����ѕ5���;����?9_6���3�u����9(��߻5X~!�.S��?@T\+<���A7�6�Jլ�ڏ��;)����b���/��}]��x����J��Y�;�8��r�8HΦ� ����Gא��U�)����*|�X��> ��r�=�޲t�T�ҙ󐧢�r��N&�ڝ�>n����dî��W=,x����;���
����O���c��.92G�&q�ƈx�4���t�#Οl�D���!f�N�Iu�H=M������p�|����ӝ�bO2�ъ�,ut��b�G�Й��s9"N�UK��/�O����}.�N��@u1�V(<�K���`#WYDTI�Bw�������ԗ�2���y�S��Ὸs��q�x:�2��:[��{#�	�|�C���Ǌ���ͺ������jd��h���xN|�Z�ڴ���$Q�^v!�e�j�cP�l/&9��J�6ncn���A��bj��hV�;����c�����e�ng��:P�늯�����c������3�s�d��WS`lH=�hb��O���9�ŇJ�C�#���u���I�`�\�=~��o_K3�����A:!P��"���E�n��P�=`Q˕���")^ޓY��L�<$`��P��Z��ؿ �p�x_����*��+9�����!�3ċ(�/�I�����ם4~#��{�|��	��8��S|��VqB���Ϧ�s�
p�������$>-�����?f��?��S�e�G��կ,���������������?����;����o�?�?����+���7�G�g�Om߶����[��O���Q+���x�aa�	���	H��9"9^�^�{���
j�װ�aOZ�A�\�}��N�3l���ljm�����^D!܉H���>j���m�����y/���͋�����Uԣ�[M}e��Mk,�}��[T�۞�T`'9�����G��l�A� 3͢��:X=�vu�h��Z�k����Z*.6��m�Bh�jr:��sA�8���,�*%b��>A�:��Զd	,���#,U�����dsݷg�)UQ��S���#<~o�^����:�+��QC�>#@Lζa�@������J2Bf ����p���+�;��u�RF������.yTl�����,��,L�Lz��&��*u%��'�dK4��xXM=�~�<�ҫ�]��O�7o>5(�eLv��d5,S��V}�}����e�����������5��Ư����A'�}��b���UE�	���v��:"��̵���	0�S�/j/�[��xm[�Fj��RJ�±+
N�J�ӥr��K-�V�l_6�K�s�LЭo��Ʉ_�RI{֖D�������DJ#��i���Lc9�20��P����ٺ�����.Ð�h-
+�sGmۈp�Ν�d�2�E�9y��y�հQ}zl^��'���a�5�ǫW�G�z1��$
bD��qdZ�n��񖌭%Mf-�N�  ��UV���Ӑ�I��/� ���X=�6g@R����0�"�
�X���r��1_?�!��.ک��z��ę�v������.3M&��n@6�>ͽ���sY������s��-R�L�@7�L9v+�W]P�W�b�骫��
�⃠����̈́a�ԫ�B�~�i�%�1 5]��/
.S�!�A�u�Bة����=	'c߈�&�dvdroɿ
C4O�W����"&�
�*�W��J1'[Bs�l�N�_W������W�%��Ę��.4o��$����� i&��-� �,� ���ջ�0jl���:�����Xt����'���d�m�lNBQo�3T��Xo@��x����
�,����⧄�#��>�#��ǳO�p��=�^�˕��mJ��q2I�iV)P�ej�B��/g;!o�e�Z^�m�VHs9~4ֺ.������8��/KP��I��q��Ǎʚ��!]���!��.���K�V���A�_N�k�?Li����\�*"��r���-��7��ҷ���<�=V�l�� ��0cM��IѦ��x�7P�/ϓ[�Áu{���r'�������~L��t[8���aZ��	��\?��´n���fcN��pl- մ���uo��T\-��2�.�	���7aSL��%ֻ��	�~W��΅,�v�0���i���U"�c�6sYJ���KuSm�Y��w
G
'4�����.ZP`ЂC;/@��3cݖ~`1gD�2ad�{"9h���`��S-�?�<�J���k�c�x]�^C+f�/!.P3��h��w�2
 �nYL3����%�jDh`'�bE��e��*S4#)���,d��,=����3�n�C��&�wO
n"�������?W�
݄ʷ�1b+�[�;��:�7�V�72%	o�A��R�����6�bM�-y�Y{����}��
a�+k^�aR��k��+��Nn�{O����E�i�R�5��o����d&�_�S�q�<�T�0��3�ţ�,�<g�	����ᑗ����!���@�Rʼ`�{�O� �
�%R�|�E�Ã��w���
�#��a`�o��^RP��^��P��g���60��4cK��lX�ZJ��L^h��k
��ǲI&j�$�I��s���㪺=/�X�S���H:F�?Ỡ� ����ƈ�|��e#f�'`m���3ѝ/]��
�dMl�ȇ�,L��"���/	au�i����;�K��2���#�fM��3�K1g�K�g�$�j,�Ĉ�3���ps�z���eYp�>Z8;-�Hgԅo<����:I�t�+��t� d5��8��z�;X#Hޔ\�jc�FB��L}]�rZ�1����̬��fa��
Bdo�C������s��OF*/1���a�]s�oz
����k���7oK�qg[�j!o�ͅ���)��������t ��$��k"!�s�;��/��q���#�ф �Y���C��!fq�Dڼ����z����ڛ�a��R�-��RϏ��i�+pwk5���6V
J���	����-f�D�0�Ҵ�a�f�� i�O��)�5�ؿ��A��uV��;N��vّ���=o�w�{?̿$X�+q稭���6�v���I��+��cC�8������{�D³�����G�E!��p��]1����uW�P'�+�Q4��?�����hHN��H��*�����!���[��RxD8(4)yF:��G�x��B�ِ�b�����	Zr���ɨSKU��AR�#���%0��v� ���?s)�Ӽ��_�E?������2���=���E�ѮS�τ;�����~%���O�%$����}6�;�Ne��}�`�%P�q؞��`���mth���gW��z{Tw��o�
�$��w��'0�8d{�.s�	N���F`�N,d���=<�+���h�aL���o������!�.�Ļ�k�4�x��x��3(;����m�%��.>��Z J�EI��2ͨ���>P���'�����"͎R���P��Sm�jLe}�a(�G=))��5�
�+����Tk��ӱ��}Y��UXZ�)ǉ�����TJ��s�da����Ԫ�g|>C�r�}�`~�p�|��Y6<6b�
���Nˇ'���i����"n$Ӈ� �L��ʼr�G>gq��.�63�qLu��*�i���yFIk	)-��U�oe�,|B�-��~Ho9,�G�=�ƍ�A�,'r��܃�q3����C�Zk���b��� G�gbh�� ��r ��N��=s��3��Xr�-Z/T�ʄ4׈~~���(^Q�Uo�Z�8XJ�Ep	CM�I�|�g3�?x�?z)(r��@Ǔ<��k"�rTu|�>=j.���9��N�ҙ�iϰi�7k㊟x v]��[���HJ2>�Ze�m�7�1���(=�F��۔a) ����ͦ
�|�.A�������j�3�^�R
�h*ժ�Z���p��4�������#��(�_��f�G|_�����_��v8le���Z���qc�W<L!}���kw�B�
�r3��v?��"�6�C�`	��g,�;�z��Pp��"���e�09�����N<��h3i,���d�9e�c�����/;�Y{�Z�`Oj�	��Mg�����F&Sɞm
1O;,D�8$�ûC=G�k�C��=�U�z�����L�T�A,�l�*��fKjD���;W���7T���(�?.�+#�:>�N����;�O�o,۟�����8;ap�nw����"�i���	��O�޸���wğ:�H��E��9j����."�G�Ӏ�I`�1�=ۯ*%kّ}1^�2�m��W�0o��8u
k�L;���w��	^��}L�$�v2eA�ړ����dtGyt��.�����{܂�zdvsf?9��;�Fg�1�RPcb�s^�C�b~���
�|@��2�2z^i;.w��-spbvZ��зc��E��ƕf �y�O[����k��(f掏(�N|�;���Dʲ�eLj{�?����]X�QϷ�Vpa~�f���N����.F�U�\l���JK�"����x����ʸ�!P����YH�7"I4c��������\�Ԋ��9��`b����]AK�6���a�5��^Ar��m��(�Ө�i�joV���q��]�g��Mp��Q�a����1@��X�f�p,��P܍Gaȶ�fฯ�8?�M�Y��@��<�1D.���S6�Ϗ�e�DJ��MvaA������R�#T��dx�N{�f9���J<BnwS�K?��W^����� �ߘ���jl���\e21�"�1����;�
�[]����#0��u�[�:@����
b�p����EC��D?S�,95� ��.���?�ۑ6��:y�/���_��.����"��}���V$�bm�m��]��6@��y��Q�j��0�n�/��%?w��UĖ��e4��NB[�/����M�GT�76j����L�
9	7��qx���:C��C���[�;v.9����z�2uٶW���B9��
Tgֳ�!L�m����hYk��nĭWv|�:.MԬ����,X��e�3L��[��"�	�1>d�����K)����L�vZ�A"��}_E�iB��ҽM��8qd���g� ���\�74
7Y�#��F[s��S^�#��L�z�f�8#�Ή����1���  ZP������m���]XGS�����V�qW���vfHǴ�������Z����"�0���]�F�c%��H�J�t��95����Q�ͨ��|� SN1�e�H7qZV9^L��	ʁu�0r��N���/*���R�Wb�Q�{�!7��*��oLh��������3�9$�"��ľxk�Nf!���=^��{�+T�w5��=������5�iJ�Xp_�T=�����-�
=}NC��/���ޏ�Q�����"���T��v�cMu���?V�f��J�q���67�jJB=8��Vӣ*{L3�:��9`q��|�踍�S��&�7aɡ�xH^��@�_��/?���.���nɺX��\�z�Ǵ�sܛ�2��jͦ��f�O�Vm�o��y�\�3a8�C�V�����B�a�TS䕔)�x���Z;��!�f����BTy�P�p�>/Z|�r��uWS�����cم�C�u�!���>o3�j�	�_h��N}�����6�h�<�CR�Lj�[D�����?2Ut�w�GvT���v Sa͠���^�45bR���Z7K@J�\xB:TT1Չ�8�Ag.������!>��;z�u�_y���3A�p��KO��f����ߥ2�	���_��2~��<߇�������Yލ�b��#Ӣ
/�{��u�Rm�{��^5p���>��;4���h����W�e� �����ǵR�ȓ������l���+���4$�����{�U��`����2��M����wf|�'�z4���ۡ���5�����p4��,*��m6�s)l�ؓ�����T��zum��Ў
0	Q�:��v�
E�0�X<��U>�M��KJ.3�E���ƖC�X�|Y�B��b�q���(k�	�M�GM���:�/���4�� �u�!��V��*���] b��1n�:�D��
������ v���`M��A��i_��0�4~�HmY!�J�7~�Vj��8�H1��[�JBm��o��� �t�m�uY��^�m!YTI
�T�ōZ�֙�܂�Ʋ5�C�H���I4�ܨ�)�f�W ���AͶX�S�?-<||摰�+[��=�����N1z�D��*9������^��?:�		&1�O���<��<E�U	뤵
�t17Ub:c덝1�hAK/9>0���~��Z���߀V�c��5�`�׌�*�	
k���<�i7�6�	^*���ʄ:�H�]L��������\��A~���^"���`�T��WHV�k��!���|#ɩ�~��u�[�W�\�`���~�Ix<V���<;c9;Q.WA�"8�LܴHs�	ঀ���ȌsU��2�,,R��4��b���O�ǧ��6�6��y������X^������\�÷��+&�>h�ҚnV�� �D� ��³�]���ZH��ǃA���"T]s �鯍#%�	P�E�B6PՇ��ԝ�D�,E6��@oS���7�s�j�� ٽ
�HQ8�ɏ2y�V,��������j;TLj��>���܏�V�^� �$�cV=�͝�M�z�L���?�g�N�
�LV2�j$P�w���{\_	m��s-��T�'�f�(�o>�������&��Mj�~d#��L�
��2���Ad���樃u�02��O��N�������?�5w-k��c��."�����
\T8$a������A��C��nX4��=��.�7~���-K����3����Iȭ�I?ԖӸ�5������*�-ԫ��+p������tq�٪��[x̘�/�(��7���˭Pr�S�O���(0FY���mq��m6�vc~36��'�#�Ɔ0 ��I���S"�a�y���3;,w��:��{���E�q�W���%�;�:�r���@��������0\%��qY@Y\�4%�hI�gQ�Pzii�`k/����*��x�6v�Ӿ���{��0��*��hM�ɀ�2�UKo<ZKiǗf�1�}�Wg���[��Yp���"�)�$]�_��x�Fw�p �˵��v�G�$��jӑ��9\���,�n�����%bF�ϠܷP"�o�+P �%���-G,���B\��K�U��惢�EA��.!�{n�(�g��VFA�h� �r�+v��P_���ए��$�e��6��w�\`�u�;7
Ѯ��}��K�� �I_�����I
 z8B4n%'�H-0)&�����瀤/Xz��H\����Fv���Z8D�1�w���Ȱ��KiԢ�K��5r4��?:�0��O��v=O�}�^�̧���Ӝ�(�Yz4y�I׷�DKy1�&���F�����J&$k#x0	o�@��&��M=�7��|�M�҂��/�e6��n?j�Av�pcp4�����+�{�3wI�L_�M&?�?xm�w+��y%�2���E�S���|8�S�Q`YgG`���Y��<�iij��/�7�?n>��Fbv�W ��IN<~}��@����n�Қ���:�(�B��F�硯x?u'?�k�'�G����d�gOK�?�^]��b��j_siRG_Q����Jc��U�����|K�2+��घ�2�|jwR��~Z��?CPcZ�?[�J�R�t�q�Lӂ��,�A�,��;�k�8��z�#��������9(�>�8(O
:�����8�-U k���\�#-r�+���)�����ۆ:�|l2�Ka�@�Y������W�w,�gX}���(��f�hM�NO�x��XOI�˂�LY]������X���鱺{��P������
3�^K�4�z��L�/����*��"u��}]�淞��&H�b�B��]Ӛ�gR$ ?}(�Cs �uW� �~(F.�$�'0.C��%�$4k�_0�j���޸��dQ����n��'�*^�ٙ~�+� �#�T�5v���0b��פ�H)�<���4�����H.z�6_�3{�࿾�*+�K�c 9|�?��%q!�7G|B�9C��r"�;@�΋mz}��Z��?&�*�Ą�^�����)QGڌ "l����4���c� �}��Ç-s{�K�6����f��c-�Y4`�*�T?�%���Sn��3�ʳL<�k���`����!�w����_����a65|�0U����Kv�0��S2J��FeL��`
�SH�{鉊Ͷ
�z�_�/�۵ca�����$H����e8���g����͐ٰק�5��n�0R�:�13�i�J���hT�敽7��p�,i��;��z�}���\;��4�I�=}�m�5Oِ˜����Nx��\�ŻB�P����ŕ��Q����F�ڲ��1�%(fւ��5`���}S~�3E�:�U5�����`jCys�7��;��q���M�􏜕=�hm�E��17hTnvD2��`��4���G����Cr�a����b�Sd�ށ+k��+�~��̹�|�4�ϸ���P5C[G��(E�����fȞ��6T���+�e<�F�cU.l�V^.g�s� �-
8���=�R忳���}�4�9�Uc�h����a�����褀��{g,����f�V�[%k�=�7SX*3M�[�+���phn)f
�_P�֖��,|�� ����
�.�Y�W ���Bjq��+�����D��)��:���5�v#.��y�g��P�¨�[|'�}q�5��
+`�Ȉ��{q��\����J+sd#?������e4��hC_�.�}%y߿��k�Y28z:0=�Vߧ�:�57���1K�~��󴗽]���a�d���}-�xz�;A
��9n=h�x�z����ʁ�-�Y��j*�ȅ���-�
�2"C�_�NаA&������ɥ)%np،����PiH�GMd�"ɄZ�L9.�p[֧?���� +p�m�eSs��-�dC��O`V�NӘn]���5!5�d6��=?�O_'1F =�픽L `r��~��*���F��a�܎�
���~� ��Qw� ��)t��j'N�]���y��'�8s��	'8�錗:^�P��S+�/	�S����ک���������w�R) �my�7`��Q]���@e��w�אtm嵮��o��g0������C����BHq�W��vi
������½o���#���Y���0W���=�u,N����ޟ�O�m���q�e�ﰊ�6��1'	�F��`96�M�"���b��7^��9�P4GN����s(X��-6nV�Ȧ.�"�F�<�4�B�]�'�l��jwE����g��+	��C��g��a�|�|L�Ɩ��Q�@6&~�F���7�	�W2(a���.6%�:]��*oX �aAHү 6Fvo��9E
��}7��~/�NV��p�9Ff�j�&��7`��%�Y A��֏�Z3�F�rX`2閅]�bj��!٤�C��Q�-��$��ل�
56C���߹�u�A�F�!��S�I�K��Q��9��QyA7��V��^'4*�͹E
��e@��_璏r��/0w�6K� �ON.�<Y�'�K�H/���*z��1������:m	�Ϻ���5��n����KDA��*�'��X@��,�� �ej�e��S�V�F��Zc����?�����X�Qlcf�Y����"�k����b���C&U�wg O����I���r���m�Qt�\�[ɔ$!��
)PA�ֻ�y�E��Yؘye���z�|�	��Npk�
�ʼ޻�J[��/)���qݓ�<���U��  �%�[�y��g
h�N.�鋎@�8����J�' ��XjdP�O��ڵ��>���i��`�*H��(�0����%�����e�X�_�J�A/�E���H(��璙�FHǧٷDL��֎�5 Rⷵ�oM�A���|)���`��g�,�
R���'3����H]H�lH�LT��{��+�Gܯ��_����.
�X�����w����d�H������f z�)
?�k
�� =�/����>��w�[�hk);�*p�<���`������p��>�I����L'u�m,�`jU���e;�/376�D%y1�B�T6>�Ak�/|��_0�wm3$���NG��=N��Mx�ݘ�!��:��diP��U.n<))�S�M�$9O
�瞁ppe�%�x�ɖ�$Tv�^#��q"�s�<�H�@��B��&�S�H�a�#c����#�|s&�ǀ5������N���p���~A�m�4ȿva��h����O��;����I'�L\;б���:��q�(�U &��*͚!\q:C|d~��f���&�V�8�ߡmj���[�?q���X�5��������@(sr�Cj>���O�l;�J�r��.�O������ӍY��em2�yO֠ɂ�6����s��� �Rޡeyi3~SL/W�y��Aw��~{�tJ\��4+��4�s�T�8����܎�x�]v�RQ�5T�D�V+���z�kp��m��1�=m�ܛ7���V��X���Sl=���7��N������[�z�%M������L��-g��@�s	8C�`�p�Ѳ�Wz+���z��m�t���vN?��m�Nu�����p�X%�����^P��GAk�>.��X�)4?g"��~���S�Rȝ�}����5�K���:�D��D�ԄF��Ȁ2_�Z���b���O��>7�*XfWš��� J}3�/��O���M
�q���P��iT�;��QXu9��3�"�����d>&�Yr[젴�@xՎ'b
�����re�(���4�W�=F��,�֛��T�d34�Z�B5a��<3�{�R��7#~�(6Z�pHZ����MB�pX���tiq�R����tqׇA/���v�Ě��:9T��3��=p4&�{�1���m!�Dfl�єy>psd��r����������.��ꗼ:+f�BTb/�n�z0s�֔xM�Y�'�r���u��9��� �����JrȞE��HGw��5N�1'��9jgͺ��L��z͆�ې7<��C�.�������;#�
�8˔�����-G��?Q}���'��ǴπDr9��x\�u@3�rz�8m���<��Xq�]��X�+O�J[���$�w�:�8��ML��>�I�����D Y��/��N�0�3:.�W
����k��PwK�,[_M\��gtG�2q���0M�����vf�.1U�7�B���r��EY�#���Q�5�a���(i
���'�$��f���'�b����� �,����� ����m��3�Ľ5j��G�/��h�4�-_W�جnېJ/��=�|k`xf��``���T~/��WF5�yY(=��z
�
!��X|�ŕ�f�%_�C��`=���;��R�d������l#�_��h��Ë_R�����T	^�b�"T1��c�.ۥ�
�]��H�u���
or����:��qLP��U�@Z:�l�&�{�,�����	$�L���1}�C"#�ī��-���zN��rt�%�k�y�)��Z�^��gLD�ڱl��`hE�����A�L�:��{�U�����A�4���u�A�$�ֈ����ϊZ��E3���z�§ϭ�r��LNF#��܎!~�ϗ��H���6H���O؆��?�G��d�p��j�:�C�ٱP�3,���='�bX����9Gu�毼n
�O�L�~c�/޾�W�y(���]ތfLUAz})�C����L��|]��x8F׳�����x_u-uZd�����@E�m�D!TQ���I�'�^4N�P�"�"�Sz����	�LXY{w�H߳�S�ݡ�6.��� �\����;���
��ۮ���O�Rx�Au4��ԌZJoc"�y`[xq�:�8K�Q���=��h�PZ�"Y�7�G���-��jߧ�8�#����
�Q�bF�Ca����ݗ�p�8o �l-	Uӗctm
_b���5��72׶�T��Mm�����hk	�	2�"�߶$��>-��A���S��[ $����L~{
�斸�Eq�[�^%o�W�|�*�+qW��+�PO��\�]�H뵚h�!���)3�đa�߭�5gd�t�k��{���+|t�c�sM���Yڎ���4��n]X����˭zL�B��u݉�S �6��E|H�1���O�l��M���eez��D���D��G���|�Z��^���Gwb-�f�v��Є�Հ��H���������:-�S��'���D
H� ��Z\9�z�c�¿��ާ_���~� �tDi��zǊ�$�Ne^g�B?J�+��#E�Xm�M����%����Ƭ�e�Urլ�����3���<V�?l<�k����O�e<��G��8�Ҍ����i� _]=B�$���
�}Wy���K��飦X�{9�7����C�UpO��߷�H!���������ϋ�=+ڱ�����t�í����'tS����(:�!��C�Mދ�;�ŅH;��]|e�?b���"��YB��`��������=���ݸ�a�;�]����6'�5���,��G�\6��)0w��Ԗ�Y%��}&)�%���4L\�f��۸Xaʐߢ���w��U���^���W�u���3����~_��n�]/V��!�Rk(��/<"6C3JYN�;�b����B���������5w �P|���_�E�U�H�r�1�"K4����%�J5���Ȩ�4�;�ڪ�^�����s�HT��0��YM�q3d&8#%o!:�� D\3-m�ݵ�v��Ħ�D���i���b�p-	O_�SH�{i�<���b�)��4�N�z��S��u`J��\x��?����a�,���S�/����L�y��p��ZS��j+�A�y��@N�)���/?��7�W�
{z�U%#�&B�Z�;�<oZ��u�� H ���V�0[�%�}�hG����̔J��a�GV$��,�#/w�j���@ͩu���h�֩,a�L����HǬ��� ��m���M���`PiD9�Ħ�J��r�&��0�i���
���f���a8ʴi� Z{�J����{��ZgS��Q��f�򷢤�?C\[�3���[6���9'���@�	�gnEח5��'�v�_~�l��4e&��('�#$ľ0u��6Tf M�
�\zx}�R� $�vd���J����:TBt�H��;�U��/���hA�/�4k���
ɯ�\]�>5���\y�3lߟ0^\̆*��iq>]�6�WJT/����%mM#�ߏ_��������Β�x
�������ߞW8��{�sw6�e�ތ�/��>�Yl٦��(;��lX�вQ�ߧO�xf�)���
Ք�"�~a��j� ���`�2���g��.<��cvc1��i⠴�(���쵐
"~���M������ks��,ad波������%�}壓R_���.�o��e�8>�ѿ�$�G&�=r����#D1�S��0
Pok�X�Iq�$�*}��0���}ɑ7�%��v(�3:�B�.QN���
����3NB����+̆��E
����9�C�'��T��ѳDlU%9�:��Y�
�q��Ng�ƖULǬJ�D�o�<y<�Cќ��R�-��ؓˌ���c豁'G���z��Q��S^($N��	)���v!f�a���	и�Ws��aQ1�FZn�@V9�	�Ɠ����7wiq߃G��a
���N����#ۊ\��d+��1�
�C����4V��M*wF>��nr;�?9G��(�����WH��^��V���^D��	o�5��v�{��z��Wq�L r�A�)�{���=�))J��V��A�q�0EuQ���?%��D�0N�ءu��H�&�8g�*�4��Ukr]�"l߇���O[���l�d��M�5tF�u:�Y�.[:ub$\l1��i5���a`�C�5Y~h-Ň��WW�*����
+W8���-l�Y�f%t���xa���,�Y3f��D����O������K~`BF�ֽ� }�X��'�Q�T��7�H�PQ���-�8��"�aOd,Rߪ{�u�����N�9Eۙ��+�����%���%��{[�S&.,�2��pi&�Ӊ�I�����$5�z%��ӻ�o�>Y��ER���%�YdP�sU�����FdĂ��)*��6V����K���)� ��x�Ky\md��ޟ`�UxQ
�?fSq�O5{�[a�o��q��O"I��@��4VWN G��dL
U��ŉx���yIG�Xii~7bt$؍�|���~Q��P�]�7�}I�'I*f=z�!Oֹd�zу�Z�`y�^Uڷ|���NRW�vYm�N��m�Xj��|fV��K6���A�/E(gt��	�`�E��`>#�6�xFڱ��6+@3��2�K�A՛SW����ܹ�ԃ*���Pw�W%O���'x�<z�$�UъR�������q,�O�~'I胚���0�`6ݵ�Hq��(����X j�7fI���ua�9��@�g"�t�nŽe�/��4|�x�����xm{��&��%�kh9��Һ�1#P�v�O4��H`
�h 7�@bZC��p�e}p�T[Y����68��Y�� �7���x��c��||9����]�� v�STa�I��l�~�$}�)�3X�9���\p!,ʋ�~�Đ/�sY�
n��i��(�������i�����^?�J���b�\'�Fj�y���M�Gی��]�����9��k;B�8�о��oS���>�] !� r��[��[ռk��O1��ݬ\���ӌ�ق��
��l��V�R#�Eeu�0��c^�L���:�e��)wS�86����v܈����
W�J�?���qF�#�V ����ﱚ:����:�ӳ�b�N9Fo�(6�񞂾�^���r�K4�_�N��'�����*���a��Y��$��G�{њ�/-�s5M����ܼ�V�HAz�A�G`M�>�1w��f:~u�$�߹��>-o���
-�
�ݴ�BÛ�z����/jCNMؐ�[姏v�� �B))��^��-�q�Z%�u����S����,�(A*	�;�
۾��|,?|Hy�k�'�3�ڼ���n�I2p���)Ľ�`���\��;<��Qx�m�)�}��c�|�˒rWk��m�=��8�
h���#�gO"�ܸ��PX����� �ӟo $C����p���L�~�~�����˻b�#�H\�F��xo��n���ߡeb�]Ł��@�7�B�;%y;�PQ`T��5'��KpRNQ�ʣ�,E�yé!�7!NU�}�6'�� K�q͵���`H���yKβ�n ����I[Iր�'g*��*=	�	�k#�3({p���5h�
)i
Oʃ���4f��{K֍~����iF`NgO�8�m�EF�q����@�7�͹tT FQ>��FW���ї`P��r��/��!�n��*C���L柎'�|�2n]���K���B���wap�@.^��\�/!��x3�i(b����>&C�.{�P�uZ}(���<� 2l<^	=���F9���
�d����,��C4���v%<�ZI��z˄�
����D�}]q�#~E������	M���w�|3�f��-�5e׀"�=n�2[m�H���#�th۪K�FTOD�,��s��;-}0k(��] ��}���˿%͍�Oͼ����YL^��/���ت�l
\*��Ų��J~�8��
tc�x&}�(0����(�a��y�?z�y�Z)�-�f�� �a��"j-zz�P��j^yt�*���x P�
��SǪ{�yy��VT��pdR�C/�9�\�G(��31`�f?���{�tlF12?���e��A�S� �Aޔ�.3��,����<6�QK��3d�=V�x�3LNK�-&M��`R��_���������!fWyz�t4��[���*��vO$�AR3y�1��1cM������/��w&+�SP���tj�&l�يZ��14�E(�3pW�y���p�O����!�	H"�� >]�����&/�p���<����ɪ�C7(��<P�Z��p ���>��t�sp�_l�����[a:u.�7��w�X«�BW9'KI�j�Cc����0�ޡT��*��>.W�5Y6q�o?�-�|5:�I�DO�I�i�(F�ա:Զ�V,�ȫ�8`�B���-��TR��M�	]�4z�	����pKr�C��H��F�z̾���X�n��雁B賔A�4����� %�_�c��%���>������Ge���i̖Yk�����6k�Iܫ7�z*[� ��S!߹���H��M0��Z�
^����V�U@l����d�y���e�Kc��5���HqC��C��3�ɗ���v�ΩEr��6��V���"z�
ܯl`�xظ.[�v�}3c#Q||W�ՆNc��K�O#��)l�+:"�fK��a���N�aܵ�����;͌~C�]�xA��Цإ��L����"���eX�������ˈoa���1̖���4U)�����g����+��\_��^��Q�z&0lQCt���}|@��4��R��-.�~ZA��5l|�t��4�������fy<�BQ�K7��)��jZ����yDyF�l8�e�z����]�^�a��6'��3���%��d8.0	�K��I�����,/U�lUJ���'���3��t��,�(<�Ƙ#a�V5e��N������z�t01ծK%��C����_��T��F�^�{!�
�R��N���8f�6DLu�+���)_Qs��1cYi,B��ޯ/���i�	�9&�\�y�������.}=���I���G��j�偞�w]�M�\BV��t������0�z;j\k��nW��\'Z#=fg�O��t�����b%��]Ǽ��q�#����p�u�,��G^i[-:�>#��
V빱�D���gQY�z��#k����t���ߎ/�cé�r�f������έ7�x*6�<�<���@�q׾����7�и_G�$@݁�y���xuu�C�X�f&H�12����X��d\G�`b���������P�2�j��~��%�n����!s�7�pv&�5r;��h�vg���
b�z�cҶ��aV[� =>n�~�H��Y��x�k���?H
�tŤ3bD83����R:bW|���{��S��*����颲�0Ĭ�M�������W��l���u�� 3��u([���\wFώ��=1s��}�#w�}��4��yj�  ����ܸ���?�x5��$@��~8 -~�@���@���Vjp��nZ$�OÁ�ϝ�Q�d�m���A�bj�3shu=��d� [Ca��/��%�|Zs}	���ɞv��pp~�t=&���;L?5 c���]qd�՞g����ձ��;������������-m��S~���i!��ݓ��!57
�}�!�?�6�únԗ�2��|1��,/����y�q�;zY9�L�A���/z0��|����"��d�<ݬ�V�ivz��@���������q��l�o�4ʾ�e-�R���*K!T
�ciS�}���)���O���;�ݹ��]���#Eߵm�jp�Xv�]���P��#��q�9ڳjk����!T���x��QblU
:�|+ֻ��cL�ci�n�^����˻n���i(�-�wE��u�X���(��Nd{���F������uiM���F�-����^�W�`L1@� �ZH��ϔ"��	���8��4.T���s�+&��x��!x�aJt9@F�BDg@%w��+W�>ꜿaE�//���+��3��/��Z�h<������EL��bl�	C����ާV�ٖT�`6��D�<ӠS���Ц�_�d ��O'5;'U��@5�5����E5ޜݷ��Q��[�p��I�F�e��^�Լ'��j��jO���D�_�#|��4�S'�w]�ZF`0���� �ZF�W�o3���.�S� �d�S�ZP~�rR�;��p��x�C.���d֬�4���7R�� �g?��B���r�b�T�l�9;�n1�[��
�����o��c~�g���Mt�r��/٨��LB��#qQ��uR������4�q���9���l �C��
���Q��I��mem!F�2���!�[m�����F�Q�^Q�
Y&(�i��;����
<���
?��r<�y�B��
J�vSC�D2��1 Y����.��yC�L>�v��E�L,���
�ٿdP��\�7��7t�x ��M a\ˏ:��#��e��f������w�T���#F� ��v^%�P<J���|�Ԝo���M��|�9wh��+ɋ����3��+	�c�(�g��NO��˅��/ 7�it��t�zdQe��2{���f���PDW�?�|�k]�J�f6�~�9p��v��_hEZ}��m}��û��W.�+���74�N�_ZTu,m��������WH�R׸���w�r�eA`���,}}�Uun�L����cO��|_A{��y�eܑ�|k�v9t;���|�_ߚp�5�fw-�1߁2���tuU!�{?Cn��^oc�UtȤ�n靍�O-�R~���x�
է���s����H�c"�2IW,))��<��WT��˸$A؟1�S�"$�5)C�9��F�<R8ۈK� 
�D�؟%.��z3�+�^m|"����v|c�ǭ���u2�M�M��}]���K@)�!�Q�:^�_��DS��J:oOmf�
k�9�9Qy{(Q=1�+���A�+�٦��3r$G>f�y��T�(�n5ξ�Ʈ���h�68��r��bs��y�XA�xG�׈9$���dq�J�L���d����u˅�L�iY��F��I��҇�����0�S�eNN��&�A.EUZ���'��o|���7�z
���0�br��
��@3�3HM�������N�]��Wܤp�^�m�}�m�u�Xu9�r�I��UnJ	�)���|�P,q�&��
~"�(,�_���αbE�L9��0čոc{��]*��M��L�3�k�p�pfvS;�>�=��"԰P���~�oڭ$r��Cg�uj����,�`Ƭ#�tL���m����~�`�� hqL�E��8ۖ�]�$
�h��?�}��<#T�� k�p/'�DƔ��߮���a#^����ǪЖ����~F�\��~�{"v�����	p��A�o;���s��v��)$m����������av�,u?ěWk֢t ����G�9ޫ� �}?��O#����rRIͯ%�|r
�z�`"Fz8�9���5��*rS�a��1^&2`�f��w�@�R�����@�4H��Q3m8a�jK�0Y�i�X&kc����샿����E���.����u0�a%d�ue`<��)S������.H?�%���0��C�����!��~�ߊ�8�T'o���������{9��u�W#@|���%��Ŭ�g.S��Q����S�GP7�\vݷ-_�����au�
��1}m�b_œ�CO5C��I�/��嵨�}��o`�8�M���v }
)�
��k����]#D�����E(K�ڗ^���W��F�e�^"������Wp6�5� &�b��Qm��Q���y��qL� #\�`�3U��=���n�T>�f٢[���-��w�OY�(�h���]�|(�Wzc�"�f�`��a�����%�62↉�3�76Pʄ�,ǭe��[g��y)e�q:)ʜP�ɕZA��3�G�u����D�UZ,�ˑ`�,�H�8��<>�k�ީ�B]]V�|��Q4!�J��_�AR[
�u�;g'���/���ϑ�4��5��v�&c��V����������}�>?�!yG��mq��7HUדǥSF�T3�?G��L7�KR���
z�W��"�jHh��(�%�Z��[���؅����&��ٳ��fT�)��T�l%=��s�|2�*�I�ӡ��K�Ο�C�8^�*?�r�=�~��G�<�W��E�m=�&��Te�'w3���r�8\$3z���
��x��&k�k<��:(���֠��/d�E��e�i��r��%EF}�dO`��$w�OX�z����O�wEe�N�9�����(Mmwܥ��J�o!��<�*�
�^H��s��s�и���Tu�3���ۭ�N�~�_"�+g/�3�N%���@\8��JH�mm�"f���ƾ@��Ǜ��6/g�v����-jؐƧ��=%dAْM�n��<���4d�,�=s?-�I�9�\y������X7$C"E����%5�þ�z�իo�^U��Ж�U|&$�t��֟�����E-����㝭
�����mmQ�����h8Ay6Z�M �yZe��;�@���R�k^7���Z�N���-�ݫ}�I���O�O�_�Q�H��A�`���z����Q����[���I�@(�����՛�����sT�	,ۏ׫����vi��>�ys,&�7 �͔TY��M�Ā�F����Q  ANMF        ? �  }  VP8 �  4v �*@� >�@�JcY�  �P����-�o�`��Gy�:��%~���]�e�Oky�u���X�_���������w���<v���?�����������7����_��=t��������������e�a�����/mߤ�������'������=��t~���.�T���s��:v�A*q�m�ET�����?e>B�$
c���8�ܱ59����}��?�~��gY��>; ?^[�R��I���νe"��9����9h�_��I��g��#z�.��f�1����$
���7Es4X��z��\
��~üR[Di�B+=X0��#��`�+h8�ʠ���%��r��ഏ�A�p����N�;#l�Fl����w��$�"�v�p�m�t���d�l�^f3�+!S��k�Cx&;��&�X��?��]�F���<b���=9����$0纪�ë� �t]��	���'~i{N��ׇ�Z6�����Zv���
�D�0��w���������<Z�?����MT��8I�` 4\:|3��9d�)���Fi|�*p���vF�b�����4�g~-��:�V
�Br�آ�hv��%�rNS���F^�romɁ���ӏ����5�<�OID���NТ+S&��%���ROv����[���;0>٤z)Ƕ!t<�c��^�*����~[V��BK+鼷bޜ���t�tw5��f�������d4͓"q=}AQ�+ֲ�*qؖ�0Ҽ�8�u�yw�׽�2����\�#�<��$.��eu�y2����^玁��P��
�' 3�+�OȔH�2��!<	���m���y	�&��U��t���3��Z$��G��
pDhxgp��ɤ|���EQ��:ާ*[GA/fk�!"Gi����<�
^��^Sỽ���pgzi�͵z��o�/�H��&��
���ڧ�:���z��\?U��`-����er�Uݎ*���>��l�y0g���Ɋ}���n?R�r���4
�C
�a�Ԡ>�Y�c�uẹ�%;��_K�U�'^�g� ���E�d����z�S�0���N����JTū^7�N4� �2�M��o��6/���m�����q��ί��{O���)fL2q�F�� ��w�p%pf9�8�R��>��Z�w�W8K.����8 ���wý2o^�����3m"�<�w
aw���K�N�
6��I�;�9���9'�ތI#x�������WM �}����Œ��|�@�3�����~-��gY��v����BR�
�{|����%�;��{���6��W:���	�2g�'!Y����&��U&����f�Sl����؝fߢo�)V���ב�o��w\a�)��v�O��Q1�Za��3�i�iI}�Y�������d0��h��?
�W�;^�Z���;uTs��9�b��2�$�f�[�ܣ��7YP��RoP�������s���jR쬇�ZY;RT�<W_uؕ�[1�i�u���K�ܹ�I��T^ԽF��e�7'�����k���|��+D���_��!M� ��X�E]D.~S
�Ye��� OѶ�q��IA�9ddLD8W�|{�����wV��='b�v_Wq�HY�F���{�,���%�LP�B�b؀%���ퟰ⌈~
6�QC�D������N�=|�����/?�&G0��(�w��� ��o����,~�ސ�K@��]�M#?�f�b�͌}�u�B����F��)��Q��<��m0"T�Y,���k�i[-ѵ��^mu�20�N|�Wn�᫳��d��l*R"T0P���E���
���E�-ܦCb��`��i��9a�����h���Bp+�4kOe	�v���H
��{�������QJ�'�6ϳ��C��hd��i:�vh6Y��C	kHާ�gx�K;7�0����V�˯jYKT��"K7@��
���Sj���� hz�D�m�(�$��1o��n}1��[�26�q��h7�p��ԛa[�w��� /?VH�'��"���gեe�?�k��1���7�sׇ�E��k�>�;��m�ц�>Y�eK�Z��X�<
Kbp�u��0%�4��1��8����b�=i����}��ߨ���0�2z04�_�Q(��+��*d<Fvxf���RG}ʹou\���,"g���7^R��gM^�b�v�;��ԍ�e��7�~�bv$�O�J���.y���\��MY�[�,?p��"��~�ه�N'�n}�<�!h%���Q�G<��1Sk��ǎ�v�(y��uݸ�g�Ǐ��r����PMvzy%�H�y�k!�����|�7^6�6��yUH��:��[�P��ږ�<y�/N��JG��Y�����N��?�tF�d�
�[y RF8�!̈́	�~��:�<.2��������i�U$���T�:�G�S���%ad�{,�#���uؓ��������i��T��]�N��:�{�S�X%�S�!zfܪy)!A�G�G�F5�������W�9 �[���`V��v\dH`H�'���g���x��iG�6��Ɏ�ŏ?5z��)�T���Q�#ɉ��"��"dt��HfF/�S3�Ѓvk�<a\��j"��$<w���^E�	�m���'���+1�
w�L����'{�S�d��b>HA��ե��ϭ0ƕ.��}�xl�H�9��)���_�ҙWq��ټvֆ����^i] ��p*0BI�F<��F�C��W�uP����$<��9���.lG��i�7���T �q��W����۪5b�CI"���rac?�
���di���A5�݈-��.�N��ڳ�q���#jV<cz��޿@����J�:06)��40�1��vͿ ރ�|%�uM���V�<|c�P����I���%^2�: @7��I�Q�7�	HC9�V?/�Ҝ%��2��H��y̭q彐@�PW?�����Q���p��+�
^�}�l��m{=Ss�4��~m�t���O�Z}YWY�C�d<r#�t4��!�mi������,A���EC�afegg�B#u��4s<4ֈظu���UҚ�T���_����B����^���k�@k~��g-�_v<3	���n�)"&��e=�/�wj�����%?���m�Wؼ*���v �
�W����D�����/���i��s�Ԯ~�:�;�.�#G�ƣ��T�6�? �sʯ{�2
{�{�y_�9HW��z�|  F�f�f[�nBk���F�"���j,��!�R�1�,�*(a��E._�UƯP9 8����r/A\�?ƵLs/���/FQ�ȉ��B���D��F9RA�&�p}�S���/(�ˣnw.��ԏV,hj�K�$���΁���? �������S�f�n�|���i~�g�_W|"R�!����u��x(?�A\P�.;��64_��Lh�]�l6J��v���&<�.Kr,|YY��])i��PQ�'�����#M&�SYMH<A�Q�v�ԧ2��f'<e��:ua�H���C������/�Z�
Q�^6�;�r��᫛�Sx��Y ��l}@ ANMF,        ? �  }  VP8   Ty �*@� >�@�J�qH�� �V��D�ރ�5 	�b7�y��ӣޠ�\�_��s��/5�����W�?��m��������@�i������g����G�?�����<�<=>��;��7����⽋��/�����o���?�~Q���2���_�'��y����p����~���/���APU9�E������z;��P� ����9�_RV��-ȱЈ),�8�XF� `�3��jp�H��6`����ꫮ���iz?c�џ!\�u����R�F��:|�����l��c��OUUeof�u�f�Ɇp�<r\��5�
^�?O�D�L�:m¤�|�q!�n�D����i�D�˦}����z	���0.9���8�UW������Ŭ5�&�x�ޯ��o�����#|t��.�#��D��
���&���m'c>Ǣl��Dt��C;�
D.ֹ�(Է�����Oh@�{x[�?/*u���r�]mT|��13����N
��|�m;�ƻ���ߎۉ�����F*P�����F��v�K�{T�L�]���-��SX�A��$�e<�h�M1vc`��q���USW��������-!%���'&��� ��_��XDv�E/��p�$Q�$��~9GA�%
�6g�Ԙ�����e'�|Y��#���.S
���B��mdIJ�O��{��
����G�{���[���S���4�??��^B��15��_ ��ԇC =�  ���"�!��1'��$�V�/�E�To�B�Y������w�\��g�吆�zx3٥q���e��3̼����1��+.�x;����[���vE�'Fz��ܺi"$�v�����G�B�g�Q��>eg`�f�6(�br�F+ܺ
!t�~��c�1W!G[z�2\V�0>�뢵��g��8m50ݤ$�I�ӗRGJt���z��HN�~��3�)SG��?#Ch.���t֏�$�r�uU�d��cpy�nǝ ��G�
z�

^V �'�S��`��)����럈�(����G��в�*�=+��n,J���Պ˞�����I��ȵ��I�}��3+������H��Y��S-�aoeG;:��T�N��^j��":��T+ʓ4���ϲ#Å��d�S��"Ղ�U٤��/�3�J�(����=Au>ª�֜��E�rR�w?ft�>p�����6L�g+�!�
H�T�LJ(����1&�`��H���f�S�u]��#@�2VC48�cV����R�6�i�k|_Y��� 7 읶
��9bL�mdר^p.��.�S��p���A�d%���]�%t�##�+��
Mp%�vo���pW�l�Q��X2�5!����#n��h�]Ӯx�J�X��$��L�[R�Bq��/VQ����hŻ��
QT�8�O�p�*t���_g+{�y�6�~�L�1�p���]��;:�����\�~Ρ&g�7�}xnPk�4kP��fA5K�鸧[f�'�2�z�e�����P	�{����NgOj��uy�RK�mG;ټ��-E�a��NMI0�W���rW|/��ʊyi{�_N<F<șA�Q��#b=�~�����}��4];��4��!��Wq���.��F��=��de|"�����!vq��Ȱ�!�*fKZ��<��{	�P G-K�&VƛDo�
�~��{b�Uh�V���$1�߿IL��`<�ж+�zz�8��?KeBֺx.R��E�8L`�
�����Ƈ�MĭE���"�2�
��A?��҉ZR�m���E~���CV�s��;/B k�����	hbۆa�;PB7�"�1��Ujg�y�W�OJ�����Й���i�7.7�
��H��;c�V���7H�ݻ=�����WQ1I�P�5���L`I��R�(����0ņϽ�
@�Z�e�*(.���i�6%f�i��g�r��b�0xsG�����l�)��j�f�ӞǱ#�dc�X(o�&87Y�@��f�k�`<��F�_�����-CrwE��(�Y�w�`�C�����/��8�����Q������-��s�=��E�f����'(�U.�M"mF�I�� "�7|���<�n�K��d�.ԩ	��i\�]�&]�e����Y+��C�(�R��Ś�5��!��t��m�7v�������q��9z^�,������o)
 N1��	yπ���-i
�c��>�����N�,ڻ���]K��ֿ����}u��Av �>�)�����ۃ���,��]Z��j���˞��.���c?�Y��,��]�/�O���þf�����E�M�YZ"���\-���
"�A[+�Iڲ��j㚳�s�c8q��&ɣD���$a�A??��j�`�QZ��Z��H8�h
\����a�яT�$ШSD<p�T�S�b?��|X��	Zc+ ��0(?G
L��j-��wb��eE��  ��
�s_Yϋ7?����	���L����V��5�~�����Ŵ����u��D����n�Z�sc� �a$�6ǖh���J��WĖu����!�&�P�G�hN���!c�a����Q�.��}���]7[V~���	�ǘ��ΉP(����x�x���O��.^6>(��������3J%�nfi5h��;���[ �0 ����O�um�	.`Ir�Wfa�Ts����B�����dp���'P��vز4+�n&f7�����br9M-\�n�ʷC&�Ƚ���K��l=�+2Ucf/튄a��kϛ��+�U}w�D��\����
�=���|1W?!n�L���]hӶ�6N�a�����؀b�׼%�E,~Z�tΩ؝�������������w6u�2�y��[�a�_�%`��A��G�J�|��#�����M��o�#����&u%���I�_Po=#�Ι�+�����V���b��jGTJ	�|
5K��u���s�f��0µ�x?�6��0�����Ǉ��d���6b0"G��:,��9��ះ�E?��#�.�&�!ö�kD�OU�y��o%�r#���|��z�V�Kyn���j
	͓؁�5&����{mrk���X���V|��j��"�@�����t��zW�͡pZC�m)�J����|�����Wb����p9�b��ϋ�_�I3�b$=C��* %(f	����gW4����xs]�]�Ԙ�p���۪��n�O�ѳ�`3��mz@�\&d'a�J�\D�JJ�����2cR"@��;I�M���880�QG���|s���z�cH�0t�zBv��עx�/�MI�ѝ��p"T�QPc}N��a����zC��=��ɪ
� Ĵ�YR���vX���u#{'��)���'␮x4~ᡈ������FKg����R��q�ݬ� Ƕ���4�i��ӏ1�D�8���qg[H���o9
n��ϣ�]IMØ�4Z���a�3lo��-���(��i�-�盘+yna��}D
E�I��l�c�-����7H�u�(Bgū`����#`�e�2�u'x�t�=_�Z.q�\�r{xs-�^���LiA��E#���_U�]�؁E�>�6�F�Am��-�Ly���Y�:�e���7 OM�;8��V1=�u4 ��?vq��C��CB�1E8��P*�:mO�̠�r�*5�����'K{�'o�\��
��9�"9f���|���*��
�}
^�?�(ڕ%�-�ؕO7�w�	�|��Wq��-�k�*�]sv�
1��N/��ߟ�\r�Gb��1H#�w�͕[-q��]&�oD���S��9g��n^��ǩ
��W[4��Ǜf\�ݓ�����3�(�4�lI��#�4��<�
J�p 9.tѕ"��ҷ���=��o�3�F���/�Sț��Ħ�R�zs�hԊK�s
z��+u�C��n-��.�u�,��G��ҳ(Ұ�閶�pn�U�Tٌ��d��"��X���ђ\�%�=�^�P?��h� �[��w��kC��b9�J��o�#�ڡ[�y6�P�M��=�:�,�ޣV�%�eD�{fB���Z9���<�Ź�����xZ��x�;n��M�i�nO�9_�����5��e��DO.$S�����g���]c��G�²�F��6��v�W�,W����T�I�h����h@}�W�@U03�)��XT�dҿq^ �+�3E��_T��N�� 9y��,���"��k�T+A�؄���$��d�j�Q�|JH�!�I��!�1��#
>)&�6}�'�?��>L�Z<P�� �G<����
_����D5\�O�	�5���M��k��J����^��Ò]^�']��VES���c���w��#���hx&n/��|���
d{����6ᠯ��-4��wJH�ܱ`�)��
��PlPmZ�קwm�c�I�T��N��}���f�	�\a[34o�K-q�����`\;7b�P����1�|g2����?�o�(�&h5|̰�O��&��|�����������gx-ݎ��`�x{�v��?�!����w�F�7�Gw
�3S[.%���>үm<5vgd
�:����3S�b4�׬�3W/�rX��?2dҎ@���v#5J_�ڸ�)�%����m�G9��M��6���¬"�|�/�o�r�R��۲g��c�8����R�/د=u��c�kj��xl�	��Ato^+�"�o&Fѿڝ�2��W�n	c3m�{G��;��{�
�T+��F1�#��7����1����a�uf�Ώ�� ��tu1�7�=G��erlayTransformAbsolute)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, char * pchComponentName);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformOverlayRelative)(VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, struct HmdMatrix34_t * pmatParentOverlayToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformOverlayRelative)(VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, struct HmdMatrix34_t * pmatParentOverlayToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *HideOverlay)(VROverlayHandle_t ulOverlayHandle);
	bool (OPENVR_FNTABLE_CALLTYPE *IsOverlayVisible)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetTransformForOverlayCoordinates)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, struct HmdVector2_t coordinatesInOverlay, struct HmdMatrix34_t * pmatTransform);
	bool (OPENVR_FNTABLE_CALLTYPE *PollNextOverlayEvent)(VROverlayHandle_t ulOverlayHandle, struct VREvent_t * pEvent, uint32_t uncbVREvent);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	bool (OPENVR_FNTABLE_CALLTYPE *ComputeOverlayIntersection)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionParams_t * pParams, struct VROverlayIntersectionResults_t * pResults);
	bool (OPENVR_FNTABLE_CALLTYPE *HandleControllerOverlayInteractionAsMouse)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex);
	bool (OPENVR_FNTABLE_CALLTYPE *IsHoverTargetOverlay)(VROverlayHandle_t ulOverlayHandle);
	VROverlayHandle_t (OPENVR_FNTABLE_CALLTYPE *GetGamepadFocusOverlay)();
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetGamepadFocusOverlay)(VROverlayHandle_t ulNewFocusOverlay);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *MoveGamepadFocusToNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, struct Texture_t * pTexture);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ClearOverlayTexture)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayRaw)(VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayFromFile)(VROverlayHandle_t ulOverlayHandle, char * pchFilePath);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, struct VRTextureBounds_t * pTextureBounds);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ReleaseNativeOverlayHandle)(VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTextureSize)(VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *CreateDashboardOverlay)(char * pchOverlayKey, char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle);
	bool (OPENVR_FNTABLE_CALLTYPE *IsDashboardVisible)();
	bool (OPENVR_FNTABLE_CALLTYPE *IsActiveDashboardOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId);
	void (OPENVR_FNTABLE_CALLTYPE *ShowDashboard)(char * pchOverlayToShow);
	TrackedDeviceIndex_t (OPENVR_FNTABLE_CALLTYPE *GetPrimaryDashboardDevice)();
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowKeyboard)(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowKeyboardForOverlay)(VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetKeyboardText)(char * pchText, uint32_t cchText);
	void (OPENVR_FNTABLE_CALLTYPE *HideKeyboard)();
	void (OPENVR_FNTABLE_CALLTYPE *SetKeyboardTransformAbsolute)(ETrackingUniverseOrigin eTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform);
	void (OPENVR_FNTABLE_CALLTYPE *SetKeyboardPositionForOverlay)(VROverlayHandle_t ulOverlayHandle, struct HmdRect2_t avoidRect);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayIntersectionMask)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayFlags)(VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags);
	VRMessageOverlayResponse (OPENVR_FNTABLE_CALLTYPE *ShowMessageOverlay)(char * pchText, char * pchCaption, char * pchButton0Text, char * pchButton1Text, char * pchButton2Text, char * pchButton3Text);
	void (OPENVR_FNTABLE_CALLTYPE *CloseMessageOverlay)();
};

struct VR_IVRRenderModels_FnTable
{
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadRenderModel_Async)(char * pchRenderModelName, struct RenderModel_t ** ppRenderModel);
	void (OPENVR_FNTABLE_CALLTYPE *FreeRenderModel)(struct RenderModel_t * pRenderModel);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadTexture_Async)(TextureID_t textureId, struct RenderModel_TextureMap_t ** ppTexture);
	void (OPENVR_FNTABLE_CALLTYPE *FreeTexture)(struct RenderModel_TextureMap_t * pTexture);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadTextureD3D11_Async)(TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadIntoTextureD3D11_Async)(TextureID_t textureId, void * pDstTexture);
	void (OPENVR_FNTABLE_CALLTYPE *FreeTextureD3D11)(void * pD3D11Texture2D);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelName)(uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelCount)();
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentCount)(char * pchRenderModelName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentName)(char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen);
	uint64_t (OPENVR_FNTABLE_CALLTYPE *GetComponentButtonMask)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentRenderModelName)(char * pchRenderModelName, char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);
	bool (OPENVR_FNTABLE_CALLTYPE *GetComponentState)(char * pchRenderModelName, char * pchComponentName, VRControllerState_t * pControllerState, struct RenderModel_ControllerMode_State_t * pState, struct RenderModel_ComponentState_t * pComponentState);
	bool (OPENVR_FNTABLE_CALLTYPE *RenderModelHasComponent)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelThumbnailURL)(char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelOriginalPath)(char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError);
	char * (OPENVR_FNTABLE_CALLTYPE *GetRenderModelErrorNameFromEnum)(EVRRenderModelError error);
};

struct VR_IVRNotifications_FnTable
{
	EVRNotificationError (OPENVR_FNTABLE_CALLTYPE *CreateNotification)(VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, char * pchText, EVRNotificationStyle style, struct NotificationBitmap_t * pImage, VRNotificationId * pNotificationId);
	EVRNotificationError (OPENVR_FNTABLE_CALLTYPE *RemoveNotification)(VRNotificationId notificationId);
};

struct VR_IVRSettings_FnTable
{
	char * (OPENVR_FNTABLE_CALLTYPE *GetSettingsErrorNameFromEnum)(EVRSettingsError eError);
	bool (OPENVR_FNTABLE_CALLTYPE *Sync)(bool bForce, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetBool)(char * pchSection, char * pchSettingsKey, bool bValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetInt32)(char * pchSection, char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetFloat)(char * pchSection, char * pchSettingsKey, float flValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetString)(char * pchSection, char * pchSettingsKey, char * pchValue, EVRSettingsError * peError);
	bool (OPENVR_FNTABLE_CALLTYPE *GetBool)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	int32_t (OPENVR_FNTABLE_CALLTYPE *GetInt32)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	float (OPENVR_FNTABLE_CALLTYPE *GetFloat)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *GetString)(char * pchSection, char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *RemoveSection)(char * pchSection, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *RemoveKeyInSection)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
};

struct VR_IVRScreenshots_FnTable
{
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *RequestScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, EVRScreenshotType type, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *HookScreenshot)(EVRScreenshotType * pSupportedTypes, int numTypes);
	EVRScreenshotType (OPENVR_FNTABLE_CALLTYPE *GetScreenshotPropertyType)(ScreenshotHandle_t screenshotHandle, EVRScreenshotError * pError);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetScreenshotPropertyFilename)(ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, EVRScreenshotError * pError);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *UpdateScreenshotProgress)(ScreenshotHandle_t screenshotHandle, float flProgress);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *TakeStereoScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *SubmitScreenshot)(ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, char * pchSourcePreviewFilename, char * pchSourceVRFilename);
};

struct VR_IVRResources_FnTable
{
	uint32_t (OPENVR_FNTABLE_CALLTYPE *LoadSharedResource)(char * pchResourceName, char * pchBuffer, uint32_t unBufferLen);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetResourceFullPath)(char * pchResourceName, char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen);
};

struct VR_IVRDriverManager_FnTable
{
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetDriverCount)();
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetDriverName)(DriverId_t nDriver, char * pchValue, uint32_t unBufferSize);
};


#if 0
// Global entry points
S_API intptr_t VR_InitInternal( EVRInitError *peError, EVRApplicationType eType );
S_API void VR_ShutdownInternal();
S_API bool VR_IsHmdPresent();
S_API intptr_t VR_GetGenericInterface( const char *pchInterfaceVersion, EVRInitError *peError );
S_API bool VR_IsRuntimeInstalled();
S_API const char * VR_GetVRInitErrorAsSymbol( EVRInitError error );
S_API const char * VR_GetVRInitErrorAsEnglishDescription( EVRInitError error );
#endif

#endif // __OPENVR_API_FLAT_H__

