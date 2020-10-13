typedef struct zLasso;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xEnt;
typedef struct xAnimTransition;
typedef struct RwObjectHasFrame;
typedef struct xModelPool;
typedef struct RpMaterial;
typedef struct xModelInstance;
typedef struct xClumpCollBSPTree;
typedef struct xLightKitLight;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimSingle;
typedef struct xCollis;
typedef enum _tagRumbleType;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntOrbitData;
typedef enum _zPlayerType;
typedef struct RwV2d;
typedef struct xUpdateCullGroup;
typedef struct RxNodeDefinition;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpClump;
typedef struct xClumpCollBSPBranchNode;
typedef struct zPlatFMRunTime;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpGeometry;
typedef struct xEntShadow;
typedef struct xCoef3;
typedef struct RpWorldSector;
typedef struct analog_data;
typedef struct RxPipeline;
typedef struct xEntMotion;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineCluster;
typedef struct xVec3;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct st_XSAVEGAME_DATA;
typedef struct RxPipelineNodeParam;
typedef struct anim_coll_data;
typedef struct xPlatformAsset;
typedef struct _zEnv;
typedef struct xEntMotionAsset;
typedef struct xGroup;
typedef struct RxHeap;
typedef struct RpMorphTarget;
typedef struct xAnimPlay;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xMovePointAsset;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xQuat;
typedef struct xEnvAsset;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct xQCData;
typedef enum eGameMode;
typedef struct zCheckPoint;
typedef struct RwTexCoords;
typedef struct zPlayerGlobals;
typedef struct RpVertexNormal;
typedef struct rxHeapBlockHeader;
typedef struct _zPortal;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct _tagiTRCPadInfo;
typedef struct xUpdateCullMgr;
typedef struct RpMeshHeader;
typedef struct xCamera;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlayerSettings;
typedef struct xBase;
typedef struct xEntMotionPenData;
typedef union _class_0;
typedef struct zEnt;
typedef struct RwCamera;
typedef struct xVec4;
typedef struct xUpdateCullEnt;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct xEntMPData;
typedef struct rxReq;
typedef enum RxClusterValidityReq;
typedef struct iEnv;
typedef struct xLinkAsset;
typedef struct xMovePoint;
typedef struct iFogParams;
typedef struct xAnimFile;
typedef struct xBound;
typedef struct _tagxRumble;
typedef enum _tagPadInit;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct xSpline3;
typedef struct xScene;
typedef struct xAnimTransitionList;
typedef struct xEntMotionERData;
typedef enum RxNodeDefEditable;
typedef enum _tagTRCState;
typedef enum RxClusterValid;
typedef struct xModelTag;
typedef struct xRot;
typedef struct xPortalAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xJSPHeader;
typedef struct xCylinder;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct xVec2;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xBox;
typedef struct _tagxPad;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct xEntDrive;
typedef struct xEntMotionOrbitData;
typedef struct RwSphere;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RpLight;
typedef struct RwTexDictionary;
typedef struct _tagiPad;
typedef struct RpWorld;
typedef struct zJumpParam;
typedef struct RxOutputSpec;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct xEntMechData;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xEntMotionSplineData;
typedef struct zPlatform;
typedef struct _tagTRCPadInfo;
typedef struct RxIoSpec;
typedef struct xShadowSimplePoly;
typedef struct zCutsceneMgr;
typedef struct xAnimMultiFileEntry;
typedef struct RxNodeMethods;
typedef struct xAnimActiveEffect;
typedef struct RwFrame;
typedef struct zAssetPickupTable;
typedef struct tri_data_0;
typedef struct RwFrustumPlane;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct zGlobals;
typedef struct RwPlane;
typedef struct zGlobalSettings;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct zPlayerLassoInfo;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xEntMotionMechData;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xCoef;
typedef struct RwLinkList;
typedef struct RpMaterialList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef void(*type_1)(xEnt*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef uint32(*type_22)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_25)(xAnimPlay*, xAnimState*);
typedef int32(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_30)(xEnt*, xScene*, float32, xEntCollis*);
typedef int32(*type_32)(RxNodeDefinition*);
typedef uint32(*type_33)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_34)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_35)(RxNodeDefinition*);
typedef int32(*type_36)(RxPipelineNode*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_42)(uint32);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef int8*(*type_48)(xBase*);
typedef void(*type_50)(void*);
typedef int8*(*type_52)(uint32);
typedef uint32(*type_54)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef RwCamera*(*type_78)(RwCamera*);
typedef uint32(*type_80)(void*, void*);
typedef void(*type_81)(xMemPool*, void*);
typedef void(*type_85)(xEnt*, xScene*, float32);
typedef void(*type_90)(RwResEntry*);
typedef void(*type_92)(xEnt*, xScene*, float32, xEntFrame*);

typedef uint8 type_3[2];
typedef xVec3 type_4[4];
typedef float32 type_5[22];
typedef xAnimMultiFileEntry type_7[1];
typedef float32 type_8[22];
typedef uint32 type_11[15];
typedef float32 type_13[4];
typedef float32 type_14[12];
typedef uint32 type_15[15];
typedef float32 type_16[12];
typedef float32 type_18[12];
typedef RwFrustumPlane type_19[6];
typedef uint32 type_20[15];
typedef float32 type_21[12];
typedef RwTexCoords* type_23[8];
typedef float32 type_24[12];
typedef xCollis type_26[18];
typedef float32 type_28[12];
typedef analog_data type_29[2];
typedef RwV3d type_31[8];
typedef uint8 type_39[2];
typedef uint16 type_41[3];
typedef uint8 type_44[2];
typedef xVec4 type_45[12];
typedef uint32 type_46[2];
typedef uint8 type_47[2];
typedef float32 type_49[6];
typedef float32 type_51[3];
typedef float32 type_53[3];
typedef xModelTag type_55[2];
typedef float32 type_56[3];
typedef float32 type_57[2];
typedef uint32 type_58[72];
typedef xEnt* type_59[111];
typedef int8 type_60[4];
typedef int8 type_61[64];
typedef int8 type_62[16];
typedef type_61 type_63[3];
typedef RwTexCoords* type_64[8];
typedef xBase* type_65[72];
typedef float32 type_66[4];
typedef uint32 type_67[4];
typedef int8 type_68[16];
typedef int8 type_69[128];
typedef type_69 type_70[6];
typedef uint8 type_72[14];
typedef xModelTag type_73[4];
typedef int8 type_74[32];
typedef xModelInstance* type_75[14];
typedef uint8 type_76[2];
typedef uint8 type_77[4];
typedef xVec3 type_79[3];
typedef uint8 type_82[22];
typedef RpLight* type_83[2];
typedef uint8 type_84[22];
typedef int8 type_86[32];
typedef RwFrame* type_87[2];
typedef int8 type_88[32];
typedef float32 type_89[16];
typedef uint8 type_91[3];
typedef float32 type_93[2];
typedef xVec3 type_94[5];
typedef _tagxPad type_95[4];
typedef uint8 type_96[3];
typedef uint8 type_97[5];
typedef _tagTRCPadInfo type_98[4];
typedef xVec3 type_99[60];
typedef RxCluster type_100[1];
typedef float32 type_101[4];
typedef uint16 type_102[3];

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	type_94 lastRefs;
	type_97 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_25 BeforeEnter;
	type_9 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	uint16 idx;
	uint16 num_updates;
	uint8 flags;
	uint8 miscflags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 isCulled;
	uint8 driving_count;
	uint8 num_ffx;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_85 update;
	type_85 endUpdate;
	type_12 bupdate;
	type_92 move;
	type_1 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_38 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_54 Conditional;
	type_54 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	uint32 PipeFlags;
	float32 RedMultiplier;
	float32 GreenMultiplier;
	float32 BlueMultiplier;
	float32 Alpha;
	float32 FadeStart;
	float32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	uint32 modelID;
	uint32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_1 anim_coll;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_89 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_93 BilinearLerp;
	xAnimEffect* Effect;
	uint32 ActiveCount;
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	uint32 pad;
};

struct xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	float32 dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_2 tuv;
		tri_data_1 tri;
	};
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xShadowSimpleCache
{
	uint16 flags;
	uint8 alpha;
	uint8 pad;
	uint32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float32 envHeight;
	float32 shadowHeight;
	uint32 raster;
	float32 dydx;
	float32 dydz;
	type_4 corner;
};

struct xEntCollis
{
	uint8 chk;
	uint8 pen;
	uint8 env_sidx;
	uint8 env_eidx;
	uint8 npc_sidx;
	uint8 npc_eidx;
	uint8 dyn_sidx;
	uint8 dyn_eidx;
	uint8 stat_sidx;
	uint8 stat_eidx;
	uint8 idx;
	type_26 colls;
	type_30 post;
	type_34 depenq;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_14 tmrs;
	type_16 ttms;
	type_18 atms;
	type_21 dtms;
	type_24 vms;
	type_28 dss;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	type_64 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_57 radius;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_23 texCoords;
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	type_91 pad;
	void* moprops;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct st_XSAVEGAME_DATA
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct anim_coll_data
{
};

struct xPlatformAsset
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RxHeap
{
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_37 BeforeAnimMatrices;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct RpPolygon
{
	uint16 matIndex;
	type_102 vertIndex;
};

struct xFFX
{
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_33 Callback;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_55 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	type_73 HangPawTag;
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	type_11 Inv_PatsSock;
	type_15 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_20 Inv_LevelPickups;
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_46 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_59 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_72 sb_model_indices;
	type_75 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_67 pad;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct xEntSplineData
{
	int32 unknown;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_50 activateCB;
	type_50 deactivateCB;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	type_45 frustplane;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_81 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_49 MoveSpeed;
	type_51 AnimSneak;
	type_53 AnimWalk;
	type_56 AnimRun;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	type_77 talk_filter;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_39 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_78 beginUpdate;
	type_0 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_19 frustumPlanes;
	RwBBox frustumBoundBox;
	type_31 frustumCorners;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_80 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	type_41 vertIndex;
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_43 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct rxReq
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_83 light;
	type_87 light_frame;
	int32 memlvl;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_13 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_76 pad;
	float32 delay;
	xSpline3* spl;
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_3 NumAnims;
	void** RawData;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_96 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct xScene
{
	uint32 sceneID;
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_42 resolvID;
	type_48 base2Name;
	type_52 id2Name;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_66 wt;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEntBoulder
{
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPHeader
{
	type_60 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_70 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_74 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
};

struct zEntHangable
{
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpSector
{
	int32 type;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _tagxPad
{
	type_82 value;
	type_84 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_5 up_tmr;
	type_8 down_tmr;
	type_29 analog;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntAsset : xBaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad;
	uint32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagiPad
{
	int32 port;
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	type_71 renderCallBack;
	RxPipeline* pipeline;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	uint32 mode;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xGridBound
{
	void* data;
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xShadowSimplePoly
{
	type_79 vert;
	xVec3 norm;
};

struct zCutsceneMgr
{
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxNodeMethods
{
	type_27 nodeBody;
	type_32 nodeInit;
	type_35 nodeTerm;
	type_36 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_22 configMsgHandler;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct zAssetPickupTable
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_1
{
	xVec3* verts;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	type_44 PowerUp;
	type_47 InitialPowerUp;
};

struct RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_100 clusters;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	type_58 baseCount;
	type_65 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_99 tranTable;
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct xCoef
{
	type_101 a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

type_62 buffer;
type_68 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
uint8 menu_fmv_played;
int32 sFirstBoot;
int32 logoTmr;
float32 time_elapsed;
float32 time_last;
float32 time_current;
long32 t1;
uint32 sPlayerMarkerStartID;
uint32 sPlayerMarkerStartCamID;
uint32 s_dbloop_elaptick;
float32 s_dbloop_elapsec;
float32 s_dbloop_fps;
float32 sAttractMode_timer;
int32 promptSel;
int32 card;
int32 var;
int32 fullCard;
int32 sInMenu;
float32 holdTmr;
type_63 corruptFiles;
int32 corruptFileCount;
zGlobals globals;
eGameMode gGameMode;
type_98 gTrcPad;
uint32 gFrameCount;
type_95 mPad;
_zEnv* gCurEnv;

int32 zMenuIsFirstBoot();
uint32 zMenuGetBadCard();
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles);
uint32 zMenuUpdateMode();
uint32 zMenuLoop();
void zMenuSetup();
void zMenuExit();
void zMenuInit(uint32 theSceneID);
int32 zMenuRunning();

// zMenuIsFirstBoot__Fv
// Start address: 0x18a310
int32 zMenuIsFirstBoot()
{
}

// zMenuGetBadCard__Fv
// Start address: 0x18a320
uint32 zMenuGetBadCard()
{
}

// zMenuCardCheckStartup__FPiPiPi
// Start address: 0x18a330
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zMenuUpdateMode__Fv
// Start address: 0x18a640
uint32 zMenuUpdateMode()
{
	uint32 retVal;
	float32 elapsed1;
}

// zMenuLoop__Fv
// Start address: 0x18a710
uint32 zMenuLoop()
{
	uint32 s;
	iColor_tag black;
	iColor_tag clear;
	int32 ostrich_delay;
	int32 draw_black;
	int32 ss;
	xEnt* title1;
	xEnt* title2;
	int8* src;
	int8* tgt;
}

// zMenuSetup__Fv
// Start address: 0x18ae00
void zMenuSetup()
{
}

// zMenuExit__Fv
// Start address: 0x18aeb0
void zMenuExit()
{
}

// zMenuInit__FUi
// Start address: 0x18aef0
void zMenuInit(uint32 theSceneID)
{
}

// zMenuRunning__Fv
// Start address: 0x18af80
int32 zMenuRunning()
{
}
