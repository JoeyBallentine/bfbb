#include "zLasso.h"
#include "../Core/x/xString.h"
#include "../Core/x/xstransvc.h"
#include "../Core/p2/iModel.h"

#include <types.h>

extern RwRaster* sLassoRaster;
extern char zLasso_strings[];
extern int32 lnverts;

// func_8009C000
// #pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Init__FP6zLassoP14xModelInstancefff")
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z)
{
    if (!sLassoRaster)
    {
        RwTexture* tempTexture = (RwTexture*)xSTFindAsset(xStrHash(zLasso_strings), 0);
        if (tempTexture)
        {
          sLassoRaster = tempTexture->raster;
        }
        else
        {
            sLassoRaster = 0;
        }
    }
    iModelTagSetup((xModelTag*)&lasso->tag, (RpAtomic*)&model->Data, x, y, z);
    lasso->anchor.x = x;
    lasso->anchor.y = y;
    lasso->anchor.z = z;
    lnverts = 0x803c3de0;
}

// func_8009C0C0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance")

// func_8009C1EC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_SetGuide__FP4xEntP10xAnimState")

// func_8009C2CC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InterpToGuide__FP6zLasso")

// func_8009C42C
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Render__FP6zLasso")

// func_8009D3FC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Update__FP6zLassoP4xEntf")

// func_8009D794
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InitTimer__FP6zLassof")

// func_8009D8D4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_ResetTimer__FP6zLassof")

// func_8009D944
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalRadius__FP6zLassofP5xVec3")

// func_8009D97C
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalCenter__FP6zLassofP5xVec3")

// func_8009D9DC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalNormal__FP6zLassofP5xVec3")

// func_8009DA7C
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalHonda__FP6zLassofP5xVec3")

// func_8009DBB4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "nonfizzicalHonda__FP6zLassofP5xVec3")

// func_8009DC80
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalSlack__FP6zLassofP5xVec3")

// func_8009DCD4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_scenePrepare__Fv")

// func_8009DCE4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "initVertMap__FP11zLassoGuide")

// func_8009DEB0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "vec2vecMat__FP7xMat4x3P5xVec3P5xVec3")

// func_8009DEFC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "bakeMorphAnim__FP10RpGeometryPv")

// func_8009DFC0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3Rot__FP7xMat4x3PC5xVec3f")

// func_8009DFF0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3RotC__FP7xMat4x3ffff")
