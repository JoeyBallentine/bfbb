.include "macros.inc"

.if 0

.section .text  # 0x8001FDBC - 0x8001FFB0

.global xFogClearFog__Fv
xFogClearFog__Fv:
/* 8001FDBC 0001CBBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FDC0 0001CBC0  7C 08 02 A6 */	mflr r0
/* 8001FDC4 0001CBC4  38 60 00 00 */	li r3, 0
/* 8001FDC8 0001CBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FDCC 0001CBCC  C0 22 82 D0 */	lfs f1, lbl_803CCC50-_SDA2_BASE_(r2)
/* 8001FDD0 0001CBD0  48 0A 09 35 */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FDD4 0001CBD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FDD8 0001CBD8  7C 08 03 A6 */	mtlr r0
/* 8001FDDC 0001CBDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FDE0 0001CBE0  4E 80 00 20 */	blr 
/* 8001FDE4 0001CBE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FDE8 0001CBE8  7C 08 02 A6 */	mflr r0
/* 8001FDEC 0001CBEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FDF0 0001CBF0  48 00 00 15 */	bl xFogInit__FP5xBaseP9xFogAsset
/* 8001FDF4 0001CBF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FDF8 0001CBF8  7C 08 03 A6 */	mtlr r0
/* 8001FDFC 0001CBFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE00 0001CC00  4E 80 00 20 */	blr 

.global xFogInit__FP5xBaseP9xFogAsset
xFogInit__FP5xBaseP9xFogAsset:
/* 8001FE04 0001CC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE08 0001CC08  7C 08 02 A6 */	mflr r0
/* 8001FE0C 0001CC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FE10 0001CC10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001FE14 0001CC14  7C 9F 23 78 */	mr r31, r4
/* 8001FE18 0001CC18  93 C1 00 08 */	stw r30, 8(r1)
/* 8001FE1C 0001CC1C  7C 7E 1B 78 */	mr r30, r3
/* 8001FE20 0001CC20  4B FE 95 E1 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8001FE24 0001CC24  3C 60 80 02 */	lis r3, lbl_8001FED4@ha
/* 8001FE28 0001CC28  38 03 FE D4 */	addi r0, r3, lbl_8001FED4@l
/* 8001FE2C 0001CC2C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8001FE30 0001CC30  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8001FE34 0001CC34  88 1E 00 05 */	lbz r0, 5(r30)
/* 8001FE38 0001CC38  28 00 00 00 */	cmplwi r0, 0
/* 8001FE3C 0001CC3C  41 82 00 14 */	beq lbl_8001FE50
/* 8001FE40 0001CC40  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8001FE44 0001CC44  38 03 00 24 */	addi r0, r3, 0x24
/* 8001FE48 0001CC48  90 1E 00 08 */	stw r0, 8(r30)
/* 8001FE4C 0001CC4C  48 00 00 0C */	b lbl_8001FE58
lbl_8001FE50:
/* 8001FE50 0001CC50  38 00 00 00 */	li r0, 0
/* 8001FE54 0001CC54  90 1E 00 08 */	stw r0, 8(r30)
lbl_8001FE58:
/* 8001FE58 0001CC58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FE5C 0001CC5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001FE60 0001CC60  83 C1 00 08 */	lwz r30, 8(r1)
/* 8001FE64 0001CC64  7C 08 03 A6 */	mtlr r0
/* 8001FE68 0001CC68  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE6C 0001CC6C  4E 80 00 20 */	blr 

.global xFogReset__FP5_xFog
xFogReset__FP5_xFog:
/* 8001FE70 0001CC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE74 0001CC74  7C 08 02 A6 */	mflr r0
/* 8001FE78 0001CC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FE7C 0001CC7C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8001FE80 0001CC80  4B FE 96 79 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 8001FE84 0001CC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FE88 0001CC88  7C 08 03 A6 */	mtlr r0
/* 8001FE8C 0001CC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE90 0001CC90  4E 80 00 20 */	blr 

.global xFogSave__FP5_xFogP7xSerial
xFogSave__FP5_xFogP7xSerial:
/* 8001FE94 0001CC94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE98 0001CC98  7C 08 02 A6 */	mflr r0
/* 8001FE9C 0001CC9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FEA0 0001CCA0  4B FE 95 AD */	bl xBaseSave__FP5xBaseP7xSerial
/* 8001FEA4 0001CCA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FEA8 0001CCA8  7C 08 03 A6 */	mtlr r0
/* 8001FEAC 0001CCAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FEB0 0001CCB0  4E 80 00 20 */	blr 

.global xFogLoad__FP5_xFogP7xSerial
xFogLoad__FP5_xFogP7xSerial:
/* 8001FEB4 0001CCB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FEB8 0001CCB8  7C 08 02 A6 */	mflr r0
/* 8001FEBC 0001CCBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FEC0 0001CCC0  4B FE 95 DD */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8001FEC4 0001CCC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FEC8 0001CCC8  7C 08 03 A6 */	mtlr r0
/* 8001FECC 0001CCCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FED0 0001CCD0  4E 80 00 20 */	blr 
lbl_8001FED4:
/* 8001FED4 0001CCD4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8001FED8 0001CCD8  7C 08 02 A6 */	mflr r0
/* 8001FEDC 0001CCDC  2C 05 00 26 */	cmpwi r5, 0x26
/* 8001FEE0 0001CCE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001FEE4 0001CCE4  41 82 00 20 */	beq lbl_8001FF04
/* 8001FEE8 0001CCE8  40 80 00 10 */	bge lbl_8001FEF8
/* 8001FEEC 0001CCEC  2C 05 00 0A */	cmpwi r5, 0xa
/* 8001FEF0 0001CCF0  41 82 00 A0 */	beq lbl_8001FF90
/* 8001FEF4 0001CCF4  48 00 00 A4 */	b lbl_8001FF98
lbl_8001FEF8:
/* 8001FEF8 0001CCF8  2C 05 00 28 */	cmpwi r5, 0x28
/* 8001FEFC 0001CCFC  40 80 00 9C */	bge lbl_8001FF98
/* 8001FF00 0001CD00  48 00 00 80 */	b lbl_8001FF80
lbl_8001FF04:
/* 8001FF04 0001CD04  38 60 00 01 */	li r3, 1
/* 8001FF08 0001CD08  38 00 00 00 */	li r0, 0
/* 8001FF0C 0001CD0C  90 61 00 08 */	stw r3, 8(r1)
/* 8001FF10 0001CD10  38 61 00 08 */	addi r3, r1, 8
/* 8001FF14 0001CD14  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 8001FF18 0001CD18  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 8001FF1C 0001CD1C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FF20 0001CD20  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 8001FF24 0001CD24  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FF28 0001CD28  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8001FF2C 0001CD2C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8001FF30 0001CD30  88 85 00 0C */	lbz r4, 0xc(r5)
/* 8001FF34 0001CD34  98 81 00 18 */	stb r4, 0x18(r1)
/* 8001FF38 0001CD38  88 85 00 0D */	lbz r4, 0xd(r5)
/* 8001FF3C 0001CD3C  98 81 00 19 */	stb r4, 0x19(r1)
/* 8001FF40 0001CD40  88 85 00 0E */	lbz r4, 0xe(r5)
/* 8001FF44 0001CD44  98 81 00 1A */	stb r4, 0x1a(r1)
/* 8001FF48 0001CD48  88 85 00 0F */	lbz r4, 0xf(r5)
/* 8001FF4C 0001CD4C  98 81 00 1B */	stb r4, 0x1b(r1)
/* 8001FF50 0001CD50  88 85 00 08 */	lbz r4, 8(r5)
/* 8001FF54 0001CD54  98 81 00 1C */	stb r4, 0x1c(r1)
/* 8001FF58 0001CD58  88 85 00 09 */	lbz r4, 9(r5)
/* 8001FF5C 0001CD5C  98 81 00 1D */	stb r4, 0x1d(r1)
/* 8001FF60 0001CD60  88 85 00 0A */	lbz r4, 0xa(r5)
/* 8001FF64 0001CD64  98 81 00 1E */	stb r4, 0x1e(r1)
/* 8001FF68 0001CD68  88 85 00 0B */	lbz r4, 0xb(r5)
/* 8001FF6C 0001CD6C  98 81 00 1F */	stb r4, 0x1f(r1)
/* 8001FF70 0001CD70  90 01 00 20 */	stw r0, 0x20(r1)
/* 8001FF74 0001CD74  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 8001FF78 0001CD78  48 0A 07 8D */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FF7C 0001CD7C  48 00 00 1C */	b lbl_8001FF98
lbl_8001FF80:
/* 8001FF80 0001CD80  C0 22 82 D0 */	lfs f1, lbl_803CCC50-_SDA2_BASE_(r2)
/* 8001FF84 0001CD84  38 60 00 00 */	li r3, 0
/* 8001FF88 0001CD88  48 0A 07 7D */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FF8C 0001CD8C  48 00 00 0C */	b lbl_8001FF98
lbl_8001FF90:
/* 8001FF90 0001CD90  7C 83 23 78 */	mr r3, r4
/* 8001FF94 0001CD94  4B FF FE DD */	bl xFogReset__FP5_xFog
lbl_8001FF98:
/* 8001FF98 0001CD98  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8001FF9C 0001CD9C  38 60 00 01 */	li r3, 1
/* 8001FFA0 0001CDA0  7C 08 03 A6 */	mtlr r0
/* 8001FFA4 0001CDA4  38 21 00 30 */	addi r1, r1, 0x30
/* 8001FFA8 0001CDA8  4E 80 00 20 */	blr 

.global xFogUpdate__FP5xBaseP6xScenef
xFogUpdate__FP5xBaseP6xScenef:
/* 8001FFAC 0001CDAC  4E 80 00 20 */	blr 

.endif

.section .sdata2
lbl_803CCC50:
	.incbin "baserom.dol", 0x2B64F0, 0x8
