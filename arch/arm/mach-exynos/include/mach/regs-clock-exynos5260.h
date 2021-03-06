/* linux/arch/arm/mach-exynos/include/mach/regs-clock-exynos5260.h
 *
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS5260 - Clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_REGS_CLOCK_EXYNOS5260_H
#define __ASM_ARCH_REGS_CLOCK_EXYNOS5260_H __FILE__

#include <plat/cpu.h>
#include <mach/map.h>

#define EXYNOS_CLKREG_TOP(x)			(EXYNOS5260_VA_CMU_TOP + (x))	/* PA : 0x10010000 */
#define EXYNOS_CLKREG_PERI(x)			(EXYNOS5260_VA_CMU_PERI + (x))	/* PA : 0x10200000 */
#define EXYNOS_CLKREG_EGL(x)			(EXYNOS5260_VA_CMU_EGL + (x))	/* PA : 0x10600000 */
#define EXYNOS_CLKREG_KFC(x)			(EXYNOS5260_VA_CMU_KFC + (x))	/* PA : 0x10700000 */
#define EXYNOS_CLKREG_G2D(x)			(EXYNOS5260_VA_CMU_G2D + (x))	/* PA : 0x10A00000 */
#define EXYNOS_CLKREG_MIF(x)			(EXYNOS5260_VA_CMU_MIF + (x))	/* PA : 0x10CE0000 */
#define EXYNOS_CLKREG_MFC(x)			(EXYNOS5260_VA_CMU_MFC + (x))	/* PA : 0x11090000 */
#define EXYNOS_CLKREG_G3D(x)			(EXYNOS5260_VA_CMU_G3D + (x))	/* PA : 0x11830000 */
#define EXYNOS_CLKREG_FSYS(x)			(EXYNOS5260_VA_CMU_FSYS + (x))	/* PA : 0x122E0000 */
#define EXYNOS_CLKREG_AUDIO(x)			(EXYNOS5260_VA_CMU_AUDIO + (x))	/* PA : 0x128C0000 */
#define EXYNOS_CLKREG_ISP(x)			(EXYNOS5260_VA_CMU_ISP + (x))	/* PA : 0x133C0000 */
#define EXYNOS_CLKREG_GSCL(x)			(EXYNOS5260_VA_CMU_GSCL + (x))	/* PA : 0x13F00000 */
#define EXYNOS_CLKREG_SYSCON(x)			(EXYNOS5260_PA_SYSCON_DISP + (x)) /* PA : 0x14540000 */
#define EXYNOS_CLKREG_DISP(x)			(EXYNOS5260_VA_CMU_DISP + (x))	/* PA : 0x14550000 */

#define EXYNOS5260_PLL_ENABLE_SHIFT		(31)
#define EXYNOS5260_PLLCON0_LOCKED_SHIFT		(21)

#define EXYNOS5260_APLL_LOCK					EXYNOS_CLKREG_EGL(0x0000)
#define EXYNOS5260_APLL_CON0					EXYNOS_CLKREG_EGL(0x0100)
#define EXYNOS5260_APLL_CON1					EXYNOS_CLKREG_EGL(0x0104)
#define EXYNOS5260_EGL_DPLL_CON0				EXYNOS_CLKREG_EGL(0x0110)
#define EXYNOS5260_EGL_DPLL_CON1				EXYNOS_CLKREG_EGL(0x0114)
#define EXYNOS5260_EGL_DPLL_FREQ_DET				EXYNOS_CLKREG_EGL(0x011C)
#define EXYNOS5260_KPLL_LOCK					EXYNOS_CLKREG_KFC(0x0000)
#define EXYNOS5260_KPLL_CON0					EXYNOS_CLKREG_KFC(0x0100)
#define EXYNOS5260_KPLL_CON1					EXYNOS_CLKREG_KFC(0x0104)
#define EXYNOS5260_KPLL_FREQ_DET				EXYNOS_CLKREG_KFC(0x010C)
#define EXYNOS5260_VPLL_LOCK					EXYNOS_CLKREG_G3D(0x0000)
#define EXYNOS5260_VPLL_CON0					EXYNOS_CLKREG_G3D(0x0100)
#define EXYNOS5260_VPLL_CON1					EXYNOS_CLKREG_G3D(0x0104)
#define EXYNOS5260_VPLL_FREQ_DET				EXYNOS_CLKREG_G3D(0x010C)
#define EXYNOS5260_BPLL_LOCK					EXYNOS_CLKREG_MIF(0x0000)
#define EXYNOS5260_BPLL_CON0					EXYNOS_CLKREG_MIF(0x0100)
#define EXYNOS5260_BPLL_CON1					EXYNOS_CLKREG_MIF(0x0104)
#define EXYNOS5260_BPLL_FREQ_DET				EXYNOS_CLKREG_MIF(0x010C)
#define EXYNOS5260_MPLL_LOCK					EXYNOS_CLKREG_MIF(0x0004)
#define EXYNOS5260_MPLL_CON0					EXYNOS_CLKREG_MIF(0x0110)
#define EXYNOS5260_MPLL_CON1					EXYNOS_CLKREG_MIF(0x0114)
#define EXYNOS5260_MPLL_FREQ_DET				EXYNOS_CLKREG_MIF(0x011C)
#define EXYNOS5260_CPLL_LOCK					EXYNOS_CLKREG_MIF(0x0008)
#define EXYNOS5260_CPLL_CON0					EXYNOS_CLKREG_MIF(0x0120)
#define EXYNOS5260_CPLL_CON1					EXYNOS_CLKREG_MIF(0x0124)
#define EXYNOS5260_CPLL_FREQ_DET				EXYNOS_CLKREG_MIF(0x012C)
#define EXYNOS5260_DPLL_LOCK					EXYNOS_CLKREG_TOP(0x0000)
#define EXYNOS5260_DPLL_CON0					EXYNOS_CLKREG_TOP(0x0100)
#define EXYNOS5260_DPLL_CON1					EXYNOS_CLKREG_TOP(0x0104)
#define EXYNOS5260_DPLL_FREQ_DET				EXYNOS_CLKREG_TOP(0x0108)
#define EXYNOS5260_EPLL_LOCK					EXYNOS_CLKREG_TOP(0x0004)
#define EXYNOS5260_EPLL_CON0					EXYNOS_CLKREG_TOP(0x0110)
#define EXYNOS5260_EPLL_CON1					EXYNOS_CLKREG_TOP(0x0114)
#define EXYNOS5260_EPLL_CON2					EXYNOS_CLKREG_TOP(0x0118)
#define EXYNOS5260_EPLL_FREQ_DET				EXYNOS_CLKREG_TOP(0x011C)
#define EXYNOS5260_CLKSRC_SEL_AUD				EXYNOS_CLKREG_AUDIO(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_AUD				EXYNOS_CLKREG_AUDIO(0x0300)
#define EXYNOS5260_CLKSRC_STAT_AUD				EXYNOS_CLKREG_AUDIO(0x0400)
#define EXYNOS5260_CLKSRC_IGNORE_AUD				EXYNOS_CLKREG_AUDIO(0x0500)
#define EXYNOS5260_CLKSRC_SYSCON_DISP			EXYNOS_CLKREG_SYSCON(0x0000)
#define EXYNOS5260_CLKSRC_SEL_DISP0				EXYNOS_CLKREG_DISP(0x0200)
#define EXYNOS5260_CLKSRC_SEL_DISP1				EXYNOS_CLKREG_DISP(0x0204)
#define EXYNOS5260_CLKSRC_SEL_DISP2				EXYNOS_CLKREG_DISP(0x0208)
#define EXYNOS5260_CLKSRC_SEL_DISP3				EXYNOS_CLKREG_DISP(0x020C)
#define EXYNOS5260_CLKSRC_SEL_DISP4				EXYNOS_CLKREG_DISP(0x0210)
#define EXYNOS5260_CLKSRC_ENABLE_DISP0				EXYNOS_CLKREG_DISP(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_DISP1				EXYNOS_CLKREG_DISP(0x0304)
#define EXYNOS5260_CLKSRC_ENABLE_DISP2				EXYNOS_CLKREG_DISP(0x0308)
#define EXYNOS5260_CLKSRC_ENABLE_DISP3				EXYNOS_CLKREG_DISP(0x030C)
#define EXYNOS5260_CLKSRC_ENABLE_DISP4				EXYNOS_CLKREG_DISP(0x0310)
#define EXYNOS5260_CLKSRC_STAT_DISP0				EXYNOS_CLKREG_DISP(0x0400)
#define EXYNOS5260_CLKSRC_STAT_DISP1				EXYNOS_CLKREG_DISP(0x0404)
#define EXYNOS5260_CLKSRC_STAT_DISP2				EXYNOS_CLKREG_DISP(0x0408)
#define EXYNOS5260_CLKSRC_STAT_DISP3				EXYNOS_CLKREG_DISP(0x040C)
#define EXYNOS5260_CLKSRC_STAT_DISP4				EXYNOS_CLKREG_DISP(0x0410)
#define EXYNOS5260_CLKSRC_IGNORE_DISP0				EXYNOS_CLKREG_DISP(0x0500)
#define EXYNOS5260_CLKSRC_IGNORE_DISP1				EXYNOS_CLKREG_DISP(0x0504)
#define EXYNOS5260_CLKSRC_IGNORE_DISP2				EXYNOS_CLKREG_DISP(0x0508)
#define EXYNOS5260_CLKSRC_IGNORE_DISP3				EXYNOS_CLKREG_DISP(0x050C)
#define EXYNOS5260_CLKSRC_IGNORE_DISP4				EXYNOS_CLKREG_DISP(0x0510)
#define EXYNOS5260_CLKSRC_SEL_EGL				EXYNOS_CLKREG_EGL(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_EGL				EXYNOS_CLKREG_EGL(0x0300)
#define EXYNOS5260_CLKSRC_STAT_EGL				EXYNOS_CLKREG_EGL(0x0400)
#define EXYNOS5260_CLKSRC_SEL_FSYS0				EXYNOS_CLKREG_FSYS(0x0200)
#define EXYNOS5260_CLKSRC_SEL_FSYS1				EXYNOS_CLKREG_FSYS(0x0204)
#define EXYNOS5260_CLKSRC_ENABLE_FSYS0				EXYNOS_CLKREG_FSYS(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_FSYS1				EXYNOS_CLKREG_FSYS(0x0304)
#define EXYNOS5260_CLKSRC_STAT_FSYS0				EXYNOS_CLKREG_FSYS(0x0400)
#define EXYNOS5260_CLKSRC_STAT_FSYS1				EXYNOS_CLKREG_FSYS(0x0404)
#define EXYNOS5260_CLKSRC_IGNORE_FSYS0				EXYNOS_CLKREG_FSYS(0x0500)
#define EXYNOS5260_CLKSRC_IGNORE_FSYS1				EXYNOS_CLKREG_FSYS(0x0504)
#define EXYNOS5260_CLKSRC_SEL_G2D				EXYNOS_CLKREG_G2D(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_G2D				EXYNOS_CLKREG_G2D(0x0300)
#define EXYNOS5260_CLKSRC_STAT_G2D				EXYNOS_CLKREG_G2D(0x0400)
#define EXYNOS5260_CLKSRC_SEL_G3D				EXYNOS_CLKREG_G3D(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_G3D				EXYNOS_CLKREG_G3D(0x0300)
#define EXYNOS5260_CLKSRC_STAT_G3D				EXYNOS_CLKREG_G3D(0x0400)
#define EXYNOS5260_CLKSRC_IGNORE_G3D				EXYNOS_CLKREG_G3D(0x0500)
#define EXYNOS5260_CLKSRC_SEL_GSCL				EXYNOS_CLKREG_GSCL(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_GSCL				EXYNOS_CLKREG_GSCL(0x0300)
#define EXYNOS5260_CLKSRC_STAT_GSCL				EXYNOS_CLKREG_GSCL(0x0400)
#define EXYNOS5260_CLKSRC_IGNORE_GSCL				EXYNOS_CLKREG_GSCL(0x0500)
#define EXYNOS5260_CLKSRC_SEL_ISP0				EXYNOS_CLKREG_ISP(0x0200)
#define EXYNOS5260_CLKSRC_SEL_ISP1				EXYNOS_CLKREG_ISP(0x0204)
#define EXYNOS5260_CLKSRC_ENABLE_ISP0				EXYNOS_CLKREG_ISP(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_ISP1				EXYNOS_CLKREG_ISP(0x0304)
#define EXYNOS5260_CLKSRC_STAT_ISP0				EXYNOS_CLKREG_ISP(0x0400)
#define EXYNOS5260_CLKSRC_STAT_ISP1				EXYNOS_CLKREG_ISP(0x0404)
#define EXYNOS5260_CLKSRC_IGNORE_ISP0				EXYNOS_CLKREG_ISP(0x0500)
#define EXYNOS5260_CLKSRC_IGNORE_ISP1				EXYNOS_CLKREG_ISP(0x0504)
#define EXYNOS5260_CLKSRC_SEL_KFC0				EXYNOS_CLKREG_KFC(0x0200)
#define EXYNOS5260_CLKSRC_SEL_KFC2				EXYNOS_CLKREG_KFC(0x0208)
#define EXYNOS5260_CLKSRC_ENABLE_KFC0				EXYNOS_CLKREG_KFC(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_KFC2				EXYNOS_CLKREG_KFC(0x0308)
#define EXYNOS5260_CLKSRC_STAT_KFC0				EXYNOS_CLKREG_KFC(0x0400)
#define EXYNOS5260_CLKSRC_STAT_KFC2				EXYNOS_CLKREG_KFC(0x0408)
#define EXYNOS5260_CLKSRC_SEL_MFC				EXYNOS_CLKREG_MFC(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_MFC				EXYNOS_CLKREG_MFC(0x0300)
#define EXYNOS5260_CLKSRC_STAT_MFC				EXYNOS_CLKREG_MFC(0x0400)
#define EXYNOS5260_CLKSRC_SEL_MIF				EXYNOS_CLKREG_MIF(0x0200)
#define EXYNOS5260_CLKSRC_ENABLE_MIF				EXYNOS_CLKREG_MIF(0x0300)
#define EXYNOS5260_CLKSRC_STAT_MIF				EXYNOS_CLKREG_MIF(0x0400)
#define EXYNOS5260_CLKSRC_IGNORE_MIF				EXYNOS_CLKREG_MIF(0x0500)
#define EXYNOS5260_CLKSRC_SEL_PERI				EXYNOS_CLKREG_PERI(0x0200)
#define EXYNOS5260_CLKSRC_SEL_PERI1				EXYNOS_CLKREG_PERI(0x0204)
#define EXYNOS5260_CLKSRC_ENABLE_PERI				EXYNOS_CLKREG_PERI(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_PERI1				EXYNOS_CLKREG_PERI(0x0304)
#define EXYNOS5260_CLKSRC_STAT_PERI				EXYNOS_CLKREG_PERI(0x0400)
#define EXYNOS5260_CLKSRC_STAT_PERI1				EXYNOS_CLKREG_PERI(0x0404)
#define EXYNOS5260_CLKSRC_IGNORE_PERI				EXYNOS_CLKREG_PERI(0x0500)
#define EXYNOS5260_CLKSRC_IGNORE_PERI1				EXYNOS_CLKREG_PERI(0x0504)
#define EXYNOS5260_CLKSRC_SEL_TOP_PLL0				EXYNOS_CLKREG_TOP(0x0200)
#define EXYNOS5260_CLKSRC_SEL_TOP_MFC				EXYNOS_CLKREG_TOP(0x0204)
#define EXYNOS5260_CLKSRC_SEL_TOP_G2D				EXYNOS_CLKREG_TOP(0x0208)
#define EXYNOS5260_CLKSRC_SEL_TOP_GSCL				EXYNOS_CLKREG_TOP(0x020C)
#define EXYNOS5260_CLKSRC_SEL_TOP_ISP10				EXYNOS_CLKREG_TOP(0x0214)
#define EXYNOS5260_CLKSRC_SEL_TOP_ISP11				EXYNOS_CLKREG_TOP(0x0218)
#define EXYNOS5260_CLKSRC_SEL_TOP_DISP0				EXYNOS_CLKREG_TOP(0x021C)
#define EXYNOS5260_CLKSRC_SEL_TOP_DISP1				EXYNOS_CLKREG_TOP(0x0220)
#define EXYNOS5260_CLKSRC_SEL_TOP_BUS				EXYNOS_CLKREG_TOP(0x0224)
#define EXYNOS5260_CLKSRC_SEL_TOP_PERI0				EXYNOS_CLKREG_TOP(0x0228)
#define EXYNOS5260_CLKSRC_SEL_TOP_PERI1				EXYNOS_CLKREG_TOP(0x022C)
#define EXYNOS5260_CLKSRC_SEL_TOP_FSYS				EXYNOS_CLKREG_TOP(0x0230)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_PLL0			EXYNOS_CLKREG_TOP(0x0300)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_MFC			EXYNOS_CLKREG_TOP(0x0304)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_G2D			EXYNOS_CLKREG_TOP(0x0308)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_GSCL			EXYNOS_CLKREG_TOP(0x030C)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_ISP10			EXYNOS_CLKREG_TOP(0x0314)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_ISP11			EXYNOS_CLKREG_TOP(0x0318)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_DISP0			EXYNOS_CLKREG_TOP(0x031C)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_DISP1			EXYNOS_CLKREG_TOP(0x0320)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_BUS			EXYNOS_CLKREG_TOP(0x0324)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_PERI0			EXYNOS_CLKREG_TOP(0x0328)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_PERI1			EXYNOS_CLKREG_TOP(0x032C)
#define EXYNOS5260_CLKSRC_ENABLE_TOP_FSYS			EXYNOS_CLKREG_TOP(0x0330)
#define EXYNOS5260_CLKSRC_STAT_TOP_PLL0				EXYNOS_CLKREG_TOP(0x0400)
#define EXYNOS5260_CLKSRC_STAT_TOP_MFC				EXYNOS_CLKREG_TOP(0x0404)
#define EXYNOS5260_CLKSRC_STAT_TOP_G2D				EXYNOS_CLKREG_TOP(0x0408)
#define EXYNOS5260_CLKSRC_STAT_TOP_GSCL				EXYNOS_CLKREG_TOP(0x040C)
#define EXYNOS5260_CLKSRC_STAT_TOP_ISP10			EXYNOS_CLKREG_TOP(0x0414)
#define EXYNOS5260_CLKSRC_STAT_TOP_ISP11			EXYNOS_CLKREG_TOP(0x0418)
#define EXYNOS5260_CLKSRC_STAT_TOP_DISP0			EXYNOS_CLKREG_TOP(0x041C)
#define EXYNOS5260_CLKSRC_STAT_TOP_DISP1			EXYNOS_CLKREG_TOP(0x0420)
#define EXYNOS5260_CLKSRC_STAT_TOP_BUS				EXYNOS_CLKREG_TOP(0x0424)
#define EXYNOS5260_CLKSRC_STAT_TOP_PERI0			EXYNOS_CLKREG_TOP(0x0428)
#define EXYNOS5260_CLKSRC_STAT_TOP_PERI1			EXYNOS_CLKREG_TOP(0x042C)
#define EXYNOS5260_CLKSRC_STAT_TOP_FSYS				EXYNOS_CLKREG_TOP(0x0430)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_PLL0			EXYNOS_CLKREG_TOP(0x0500)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_MFC			EXYNOS_CLKREG_TOP(0x0504)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_G2D			EXYNOS_CLKREG_TOP(0x0508)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_GSCL			EXYNOS_CLKREG_TOP(0x050C)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_ISP10			EXYNOS_CLKREG_TOP(0x0514)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_ISP11			EXYNOS_CLKREG_TOP(0x0518)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_DISP0			EXYNOS_CLKREG_TOP(0x051C)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_DISP1			EXYNOS_CLKREG_TOP(0x0520)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_BUS			EXYNOS_CLKREG_TOP(0x0524)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_PERI0			EXYNOS_CLKREG_TOP(0x0528)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_PERI1			EXYNOS_CLKREG_TOP(0x052C)
#define EXYNOS5260_CLKSRC_IGNORE_TOP_FSYS			EXYNOS_CLKREG_TOP(0x0530)
#define EXYNOS5260_CLKDIV_AUD0					EXYNOS_CLKREG_AUDIO(0x0600)
#define EXYNOS5260_CLKDIV_AUD1					EXYNOS_CLKREG_AUDIO(0x0604)
#define EXYNOS5260_CLKDIV_STAT_AUD0				EXYNOS_CLKREG_AUDIO(0x0700)
#define EXYNOS5260_CLKDIV_STAT_AUD1				EXYNOS_CLKREG_AUDIO(0x0704)
#define EXYNOS5260_CLKDIV_DISP					EXYNOS_CLKREG_DISP(0x0600)
#define EXYNOS5260_CLKDIV_STAT_DISP				EXYNOS_CLKREG_DISP(0x0700)
#define EXYNOS5260_CLKDIV_EGL					EXYNOS_CLKREG_EGL(0x0600)
#define EXYNOS5260_CLKDIV_EGL_PLL_FREQ_DET			EXYNOS_CLKREG_EGL(0x0604)
#define EXYNOS5260_CLKDIV_STAT_EGL				EXYNOS_CLKREG_EGL(0x0700)
#define EXYNOS5260_CLKDIV_STAT_EGL_PLL_FREQ_DET			EXYNOS_CLKREG_EGL(0x0704)
#define EXYNOS5260_CLKDIV_G2D					EXYNOS_CLKREG_G2D(0x0600)
#define EXYNOS5260_CLKDIV_STAT_G2D				EXYNOS_CLKREG_G2D(0x0700)
#define EXYNOS5260_CLKDIV_G3D					EXYNOS_CLKREG_G3D(0x0600)
#define EXYNOS5260_CLKDIV_G3D_PLL_FREQ_DET			EXYNOS_CLKREG_G3D(0x0604)
#define EXYNOS5260_CLKDIV_STAT_G3D				EXYNOS_CLKREG_G3D(0x0700)
#define EXYNOS5260_CLKDIV_STAT_G3D_PLL_FREQ_DET			EXYNOS_CLKREG_G3D(0x0704)
#define EXYNOS5260_CLKDIV_GSCL					EXYNOS_CLKREG_GSCL(0x0600)
#define EXYNOS5260_CLKDIV_STAT_GSCL				EXYNOS_CLKREG_GSCL(0x0700)
#define EXYNOS5260_CLKDIV_ISP					EXYNOS_CLKREG_ISP(0x0600)
#define EXYNOS5260_CLKDIV_STAT_ISP				EXYNOS_CLKREG_ISP(0x0700)
#define EXYNOS5260_CLKDIV_KFC					EXYNOS_CLKREG_KFC(0x0600)
#define EXYNOS5260_CLKDIV_KFC_PLL_FREQ_DET			EXYNOS_CLKREG_KFC(0x0604)
#define EXYNOS5260_CLKDIV_STAT_KFC				EXYNOS_CLKREG_KFC(0x0700)
#define EXYNOS5260_CLKDIV_STAT_KFC_PLL_FREQ_DET			EXYNOS_CLKREG_KFC(0x0704)
#define EXYNOS5260_CLKDIV_MFC					EXYNOS_CLKREG_MFC(0x0600)
#define EXYNOS5260_CLKDIV_STAT_MFC				EXYNOS_CLKREG_MFC(0x0700)
#define EXYNOS5260_CLKDIV_MIF					EXYNOS_CLKREG_MIF(0x0600)
#define EXYNOS5260_CLKDIV_MIF_PLL_FREQ_DET			EXYNOS_CLKREG_MIF(0x0604)
#define EXYNOS5260_CLKDIV_STAT_MIF				EXYNOS_CLKREG_MIF(0x0700)
#define EXYNOS5260_CLKDIV_STAT_MIF_PLL_FREQ_DET			EXYNOS_CLKREG_MIF(0x0704)
#define EXYNOS5260_CLKDIV_PERI					EXYNOS_CLKREG_PERI(0x0600)
#define EXYNOS5260_CLKDIV_STAT_PERI				EXYNOS_CLKREG_PERI(0x0700)
#define EXYNOS5260_CLKDIV_TOP_G2D_MFC				EXYNOS_CLKREG_TOP(0x0600)
#define EXYNOS5260_CLKDIV_TOP_GSCL_ISP0				EXYNOS_CLKREG_TOP(0x0604)
#define EXYNOS5260_CLKDIV_TOP_ISP10				EXYNOS_CLKREG_TOP(0x0608)
#define EXYNOS5260_CLKDIV_TOP_ISP11				EXYNOS_CLKREG_TOP(0x060C)
#define EXYNOS5260_CLKDIV_TOP_DISP				EXYNOS_CLKREG_TOP(0x0610)
#define EXYNOS5260_CLKDIV_TOP_BUS				EXYNOS_CLKREG_TOP(0x0614)
#define EXYNOS5260_CLKDIV_TOP_PERI0				EXYNOS_CLKREG_TOP(0x0618)
#define EXYNOS5260_CLKDIV_TOP_PERI1				EXYNOS_CLKREG_TOP(0x061C)
#define EXYNOS5260_CLKDIV_TOP_PERI2				EXYNOS_CLKREG_TOP(0x0620)
#define EXYNOS5260_CLKDIV_TOP_FSYS0				EXYNOS_CLKREG_TOP(0x0624)
#define EXYNOS5260_CLKDIV_TOP_FSYS1				EXYNOS_CLKREG_TOP(0x0628)
#define EXYNOS5260_CLKDIV_TOP_HPM				EXYNOS_CLKREG_TOP(0x062C)
#define EXYNOS5260_CLKDIV_TOP_PLL_FREQ_DET			EXYNOS_CLKREG_TOP(0x0630)
#define EXYNOS5260_CLKDIV_STAT_TOP_G2D_MFC			EXYNOS_CLKREG_TOP(0x0700)
#define EXYNOS5260_CLKDIV_STAT_TOP_GSCL_ISP0			EXYNOS_CLKREG_TOP(0x0704)
#define EXYNOS5260_CLKDIV_STAT_TOP_ISP10			EXYNOS_CLKREG_TOP(0x0708)
#define EXYNOS5260_CLKDIV_STAT_TOP_ISP11			EXYNOS_CLKREG_TOP(0x070C)
#define EXYNOS5260_CLKDIV_STAT_TOP_DISP				EXYNOS_CLKREG_TOP(0x0710)
#define EXYNOS5260_CLKDIV_STAT_TOP_BUS				EXYNOS_CLKREG_TOP(0x0714)
#define EXYNOS5260_CLKDIV_STAT_TOP_PERI0			EXYNOS_CLKREG_TOP(0x0718)
#define EXYNOS5260_CLKDIV_STAT_TOP_PERI1			EXYNOS_CLKREG_TOP(0x071C)
#define EXYNOS5260_CLKDIV_STAT_TOP_PERI2			EXYNOS_CLKREG_TOP(0x0720)
#define EXYNOS5260_CLKDIV_STAT_TOP_FSYS0			EXYNOS_CLKREG_TOP(0x0724)
#define EXYNOS5260_CLKDIV_STAT_TOP_FSYS1			EXYNOS_CLKREG_TOP(0x0728)
#define EXYNOS5260_CLKDIV_STAT_TOP_HPM				EXYNOS_CLKREG_TOP(0x072C)
#define EXYNOS5260_CLKDIV_STAT_TOP_PLL_FREQ_DET			EXYNOS_CLKREG_TOP(0x0730)
#define EXYNOS5260_CLKGATE_ACLK_AUD				EXYNOS_CLKREG_AUDIO(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_AUD				EXYNOS_CLKREG_AUDIO(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_AUD				EXYNOS_CLKREG_AUDIO(0x0A00)
#define EXYNOS5260_CLKGATE_IP_AUD				EXYNOS_CLKREG_AUDIO(0x0B00)
#define EXYNOS5260_CLKGATE_ACLK_DISP				EXYNOS_CLKREG_DISP(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_DISP				EXYNOS_CLKREG_DISP(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_DISP0				EXYNOS_CLKREG_DISP(0x0A00)
#define EXYNOS5260_CLKGATE_SCLK_DISP1				EXYNOS_CLKREG_DISP(0x0A04)
#define EXYNOS5260_CLKGATE_IP_DISP				EXYNOS_CLKREG_DISP(0x0B00)
#define EXYNOS5260_CLKGATE_IP_DISP_BUS				EXYNOS_CLKREG_DISP(0x0B04)
#define EXYNOS5260_CLKGATE_ACLK_EGL				EXYNOS_CLKREG_EGL(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_EGL				EXYNOS_CLKREG_EGL(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_EGL				EXYNOS_CLKREG_EGL(0x0A00)
#define EXYNOS5260_CLKGATE_IP_EGL				EXYNOS_CLKREG_EGL(0x0B00)
#define EXYNOS5260_CLKGATE_ACLK_FSYS				EXYNOS_CLKREG_FSYS(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_FSYS_SECURE_RTIC		EXYNOS_CLKREG_FSYS(0x0804)
#define EXYNOS5260_CLKGATE_ACLK_FSYS_SECURE_SMMU_RTIC		EXYNOS_CLKREG_FSYS(0x0808)
#define EXYNOS5260_CLKGATE_PCLK_FSYS				EXYNOS_CLKREG_FSYS(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_FSYS				EXYNOS_CLKREG_FSYS(0x0A00)
#define EXYNOS5260_CLKGATE_IP_FSYS				EXYNOS_CLKREG_FSYS(0x0B00)
#define EXYNOS5260_CLKGATE_IP_FSYS_SECURE_RTIC			EXYNOS_CLKREG_FSYS(0x0B04)
#define EXYNOS5260_CLKGATE_IP_FSYS_SECURE_SMMU_RTIC		EXYNOS_CLKREG_FSYS(0x0B08)
#define EXYNOS5260_CLKGATE_ACLK_G2D				EXYNOS_CLKREG_G2D(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SSS_G2D		EXYNOS_CLKREG_G2D(0x0804)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SLIM_SSS_G2D		EXYNOS_CLKREG_G2D(0x0808)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SMMU_SLIM_SSS_G2D	EXYNOS_CLKREG_G2D(0x080C)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SMMU_SSS_G2D		EXYNOS_CLKREG_G2D(0x0810)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SMMU_MDMA_G2D	EXYNOS_CLKREG_G2D(0x0814)
#define EXYNOS5260_CLKGATE_ACLK_G2D_SECURE_SMMU_G2D_G2D		EXYNOS_CLKREG_G2D(0x0818)
#define EXYNOS5260_CLKGATE_PCLK_G2D				EXYNOS_CLKREG_G2D(0x0900)
#define EXYNOS5260_CLKGATE_PCLK_G2D_SECURE_SMMU_SLIM_SSS_G2D	EXYNOS_CLKREG_G2D(0x0904)
#define EXYNOS5260_CLKGATE_PCLK_G2D_SECURE_SMMU_SSS_G2D		EXYNOS_CLKREG_G2D(0x0908)
#define EXYNOS5260_CLKGATE_PCLK_G2D_SECURE_SMMU_MDMA_G2D	EXYNOS_CLKREG_G2D(0x090C)
#define EXYNOS5260_CLKGATE_PCLK_G2D_SECURE_SMMU_G2D_G2D		EXYNOS_CLKREG_G2D(0x0910)
#define EXYNOS5260_CLKGATE_IP_G2D				EXYNOS_CLKREG_G2D(0x0B00)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SSS_G2D		EXYNOS_CLKREG_G2D(0x0B04)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SLIM_SSS_G2D		EXYNOS_CLKREG_G2D(0x0B08)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SMMU_SLIM_SSS_G2D	EXYNOS_CLKREG_G2D(0x0B0C)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SMMU_SSS_G2D		EXYNOS_CLKREG_G2D(0x0B10)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SMMU_MDMA_G2D		EXYNOS_CLKREG_G2D(0x0B14)
#define EXYNOS5260_CLKGATE_IP_G2D_SECURE_SMMU_G2D_G2D		EXYNOS_CLKREG_G2D(0x0B18)
#define EXYNOS5260_CLKGATE_ACLK_G3D				EXYNOS_CLKREG_G3D(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_G3D				EXYNOS_CLKREG_G3D(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_G3D				EXYNOS_CLKREG_G3D(0x0A00)
#define EXYNOS5260_CLKGATE_IP_G3D				EXYNOS_CLKREG_G3D(0x0B00)
#define EXYNOS5260_CLKGATE_ACLK_GSCL				EXYNOS_CLKREG_GSCL(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_GSCL_FIMC			EXYNOS_CLKREG_GSCL(0x0804)
#define EXYNOS5260_CLKGATE_ACLK_GSCL_SECURE_SMMU_GSCL0		EXYNOS_CLKREG_GSCL(0x0808)
#define EXYNOS5260_CLKGATE_ACLK_GSCL_SECURE_SMMU_GSCL1		EXYNOS_CLKREG_GSCL(0x080C)
#define EXYNOS5260_CLKGATE_ACLK_GSCL_SECURE_SMMU_MSCL0		EXYNOS_CLKREG_GSCL(0x0810)
#define EXYNOS5260_CLKGATE_ACLK_GSCL_SECURE_SMMU_MSCL1		EXYNOS_CLKREG_GSCL(0x0814)
#define EXYNOS5260_CLKGATE_PCLK_GSCL				EXYNOS_CLKREG_GSCL(0x0900)
#define EXYNOS5260_CLKGATE_PCLK_GSCL_FIMC			EXYNOS_CLKREG_GSCL(0x0904)
#define EXYNOS5260_CLKGATE_PCLK_GSCL_SECURE_SMMU_GSCL0		EXYNOS_CLKREG_GSCL(0x0908)
#define EXYNOS5260_CLKGATE_PCLK_GSCL_SECURE_SMMU_GSCL1		EXYNOS_CLKREG_GSCL(0x090C)
#define EXYNOS5260_CLKGATE_PCLK_GSCL_SECURE_SMMU_MSCL0		EXYNOS_CLKREG_GSCL(0x0910)
#define EXYNOS5260_CLKGATE_PCLK_GSCL_SECURE_SMMU_MSCL1		EXYNOS_CLKREG_GSCL(0x0914)
#define EXYNOS5260_CLKGATE_SCLK_GSCL				EXYNOS_CLKREG_GSCL(0x0A00)
#define EXYNOS5260_CLKGATE_SCLK_GSCL_FIMC			EXYNOS_CLKREG_GSCL(0x0A04)
#define EXYNOS5260_CLKGATE_IP_GSCL				EXYNOS_CLKREG_GSCL(0x0B00)
#define EXYNOS5260_CLKGATE_IP_GSCL_FIMC				EXYNOS_CLKREG_GSCL(0x0B04)
#define EXYNOS5260_CLKGATE_IP_GSCL_SECURE_SMMU_GSCL0		EXYNOS_CLKREG_GSCL(0x0B08)
#define EXYNOS5260_CLKGATE_IP_GSCL_SECURE_SMMU_GSCL1		EXYNOS_CLKREG_GSCL(0x0B0C)
#define EXYNOS5260_CLKGATE_IP_GSCL_SECURE_SMMU_MSCL0		EXYNOS_CLKREG_GSCL(0x0B10)
#define EXYNOS5260_CLKGATE_IP_GSCL_SECURE_SMMU_MSCL1		EXYNOS_CLKREG_GSCL(0x0B14)
#define EXYNOS5260_CLKGATE_ACLK_ISP0				EXYNOS_CLKREG_ISP(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_ISP1				EXYNOS_CLKREG_ISP(0x0804)
#define EXYNOS5260_CLKGATE_PCLK_ISP0				EXYNOS_CLKREG_ISP(0x0900)
#define EXYNOS5260_CLKGATE_PCLK_ISP1				EXYNOS_CLKREG_ISP(0x0904)
#define EXYNOS5260_CLKGATE_SCLK_ISP				EXYNOS_CLKREG_ISP(0x0A00)
#define EXYNOS5260_CLKGATE_IP_ISP0				EXYNOS_CLKREG_ISP(0x0B00)
#define EXYNOS5260_CLKGATE_IP_ISP1				EXYNOS_CLKREG_ISP(0x0B04)
#define EXYNOS5260_CLKGATE_ACLK_KFC				EXYNOS_CLKREG_KFC(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_KFC				EXYNOS_CLKREG_KFC(0x0900)
#define EXYNOS5260_CLKGATE_SCLK_KFC				EXYNOS_CLKREG_KFC(0x0A00)
#define EXYNOS5260_CLKGATE_IP_KFC				EXYNOS_CLKREG_KFC(0x0B00)
#define EXYNOS5260_CLKGATE_ACLK_MFC				EXYNOS_CLKREG_MFC(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_MFC_SECURE_SMMU2_MFC		EXYNOS_CLKREG_MFC(0x0804)
#define EXYNOS5260_CLKGATE_PCLK_MFC				EXYNOS_CLKREG_MFC(0x0900)
#define EXYNOS5260_CLKGATE_PCLK_MFC_SECURE_SMMU2_MFC		EXYNOS_CLKREG_MFC(0x0904)
#define EXYNOS5260_CLKGATE_IP_MFC				EXYNOS_CLKREG_MFC(0x0B00)
#define EXYNOS5260_CLKGATE_IP_MFC_SECURE_SMMU2_MFC		EXYNOS_CLKREG_MFC(0x0B04)
#define EXYNOS5260_CLKGATE_ACLK_MIF				EXYNOS_CLKREG_MIF(0x0800)
#define EXYNOS5260_CLKGATE_ACLK_MIF_SECURE_DREX1_TZ		EXYNOS_CLKREG_MIF(0x0804)
#define EXYNOS5260_CLKGATE_ACLK_MIF_SECURE_DREX0_TZ		EXYNOS_CLKREG_MIF(0x0808)
#define EXYNOS5260_CLKGATE_ACLK_MIF_SECURE_INTMEM		EXYNOS_CLKREG_MIF(0x080C)
#define EXYNOS5260_CLKGATE_PCLK_MIF				EXYNOS_CLKREG_MIF(0x0900)
#define EXYNOS5260_CLKGATE_PCLK_MIF_SECURE_MONOCNT		EXYNOS_CLKREG_MIF(0x0904)
#define EXYNOS5260_CLKGATE_PCLK_MIF_SECURE_RTC_APBIF		EXYNOS_CLKREG_MIF(0x0908)
#define EXYNOS5260_CLKGATE_PCLK_MIF_SECURE_DREX1_TZ		EXYNOS_CLKREG_MIF(0x090C)
#define EXYNOS5260_CLKGATE_PCLK_MIF_SECURE_DREX0_TZ		EXYNOS_CLKREG_MIF(0x0910)
#define EXYNOS5260_CLKGATE_SCLK_MIF				EXYNOS_CLKREG_MIF(0x0A00)
#define EXYNOS5260_CLKGATE_IP_MIF				EXYNOS_CLKREG_MIF(0x0B00)
#define EXYNOS5260_CLKGATE_IP_MIF_SECURE_MONOCNT		EXYNOS_CLKREG_MIF(0x0B04)
#define EXYNOS5260_CLKGATE_IP_MIF_SECURE_RTC_APBIF		EXYNOS_CLKREG_MIF(0x0B08)
#define EXYNOS5260_CLKGATE_IP_MIF_SECURE_DREX1_TZ		EXYNOS_CLKREG_MIF(0x0B0C)
#define EXYNOS5260_CLKGATE_IP_MIF_SECURE_DREX0_TZ		EXYNOS_CLKREG_MIF(0x0B10)
#define EXYNOS5260_CLKGATE_IP_MIF_SECURE_INTMEM			EXYNOS_CLKREG_MIF(0x0B14)
#define EXYNOS5260_CLKGATE_PCLK_PERI0				EXYNOS_CLKREG_PERI(0x0800)
#define EXYNOS5260_CLKGATE_PCLK_PERI1				EXYNOS_CLKREG_PERI(0x0804)
#define EXYNOS5260_CLKGATE_PCLK_PERI2				EXYNOS_CLKREG_PERI(0x0808)
#define EXYNOS5260_CLKGATE_PCLK_PERI3				EXYNOS_CLKREG_PERI(0x080C)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_CHIPID		EXYNOS_CLKREG_PERI(0x0810)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_PROVKEY0		EXYNOS_CLKREG_PERI(0x0814)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_PROVKEY1		EXYNOS_CLKREG_PERI(0x0818)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_SECKEY		EXYNOS_CLKREG_PERI(0x081C)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_ANTIRBKCNT		EXYNOS_CLKREG_PERI(0x0820)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_TOP_RTC		EXYNOS_CLKREG_PERI(0x0824)
#define EXYNOS5260_CLKGATE_PCLK_PERI_SECURE_TZPC		EXYNOS_CLKREG_PERI(0x0828)
#define EXYNOS5260_CLKGATE_SCLK_PERI				EXYNOS_CLKREG_PERI(0x0A00)
#define EXYNOS5260_CLKGATE_SCLK_PERI_SECURE_TOP_RTC		EXYNOS_CLKREG_PERI(0x0A04)
#define EXYNOS5260_CLKGATE_IP_PERI0				EXYNOS_CLKREG_PERI(0x0B00)
#define EXYNOS5260_CLKGATE_IP_PERI1				EXYNOS_CLKREG_PERI(0x0B04)
#define EXYNOS5260_CLKGATE_IP_PERI2				EXYNOS_CLKREG_PERI(0x0B08)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_CHIPID		EXYNOS_CLKREG_PERI(0x0B0C)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_PROVKEY0		EXYNOS_CLKREG_PERI(0x0B10)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_PROVKEY1		EXYNOS_CLKREG_PERI(0x0B14)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_SECKEY		EXYNOS_CLKREG_PERI(0x0B18)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_ANTIRBKCNT		EXYNOS_CLKREG_PERI(0x0B1C)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_TOP_RTC		EXYNOS_CLKREG_PERI(0x0B20)
#define EXYNOS5260_CLKGATE_IP_PERI_SECURE_TZPC			EXYNOS_CLKREG_PERI(0x0B24)
#define EXYNOS5260_CLKGATE_ACLK_TOP				EXYNOS_CLKREG_TOP(0x0800)
#define EXYNOS5260_CLKGATE_SCLK_TOP				EXYNOS_CLKREG_TOP(0x0A00)
#define EXYNOS5260_CLKGATE_IP_TOP				EXYNOS_CLKREG_TOP(0x0B00)

#define EXYNOS5260_EGL_EMA_CTRL					EXYNOS_CLKREG_EGL(0x1008)
#define EXYNOS5260_KFC_EMA_CTRL					EXYNOS_CLKREG_KFC(0x1008)
#define EXYNOS5260_PWR_CTRL					EXYNOS_CLKREG_EGL(0x1020)
#define EXYNOS5260_PWR_CTRL2					EXYNOS_CLKREG_EGL(0x1024)
#define EXYNOS5260_PWR_CTRL_KFC					EXYNOS_CLKREG_KFC(0x1020)
#define EXYNOS5260_PWR_CTRL2_KFC				EXYNOS_CLKREG_KFC(0x1024)

#define EXYNOS5260_CLKOUT_CMU_EGL				EXYNOS_CLKREG_EGL(0x0C00)
#define EXYNOS5260_CLKOUT_CMU_KFC				EXYNOS_CLKREG_KFC(0x0C00)

#define PLL2550X_PMS(MDIV, PDIV, SDIV)	\
(	\
	(MDIV << EXYNOS5260_PLL_MDIV_SHIFT) |	\
	(PDIV << EXYNOS5260_PLL_PDIV_SHIFT) |	\
	(SDIV << EXYNOS5260_PLL_SDIV_SHIFT)	\
)

#define EXYNOS5260_PLL_MDIV_SHIFT			(9)
#define EXYNOS5260_PLL_MDIV_MASK			(0x3FF << EXYNOS5260_PLL_MDIV_SHIFT)
#define EXYNOS5260_PLL_PDIV_SHIFT			(3)
#define EXYNOS5260_PLL_PDIV_MASK			(0x3F << EXYNOS5260_PLL_PDIV_SHIFT)
#define EXYNOS5260_PLL_SDIV_SHIFT			(0)
#define EXYNOS5260_PLL_SDIV_MASK			(0x7 << EXYNOS5260_PLL_SDIV_SHIFT)
#define EXYNOS5260_PLL_BYPASS_SHIFT			(29)
#define EXYNOS5260_PLL_BYPASS_MASK			(0x1 << EXYNOS5260_PLL_BYPASS_SHIFT)

#define EXYNOS5260_KPLL_CON0_LOCKED_SHIFT		(21)
#define EXYNOS5260_PLL_KFC_LOCKTIME_SHIFT		(0)
#define EXYNOS5260_PLL_KFC_LOCKTIME_MASK		(0xFFFFF << EXYNOS5260_PLL_KFC_LOCKTIME_SHIFT)
#define EXYNOS5260_SRC_STAT_KFC2_SHIFT			(0)
#define EXYNOS5260_SRC_STAT_KFC2_MASK			(0x7 << EXYNOS5260_SRC_STAT_KFC2_SHIFT)
#define EXYNOS5260_DIV_KFC_KFC1_SHIFT			(0)
#define EXYNOS5260_DIV_KFC_KFC1_MASK			(0x7 << EXYNOS5260_DIV_KFC_KFC1_SHIFT)
#define EXYNOS5260_DIV_KFC_KFC2_SHIFT			(4)
#define EXYNOS5260_DIV_KFC_KFC2_MASK			(0x7 << EXYNOS5260_DIV_KFC_KFC2_SHIFT)
#define EXYNOS5260_DIV_KFC_ATCLK_SHIFT			(8)
#define EXYNOS5260_DIV_KFC_ATCLK_MASK			(0x7 << EXYNOS5260_DIV_KFC_ATCLK_SHIFT)
#define EXYNOS5260_DIV_KFC_PCLK_DBG_SHIFT		(12)
#define EXYNOS5260_DIV_KFC_PCLK_DBG_MASK		(0x7 << EXYNOS5260_DIV_KFC_PCLK_DBG_SHIFT)
#define EXYNOS5260_DIV_KFC_ACLK_KFC_SHIFT		(16)
#define EXYNOS5260_DIV_KFC_ACLK_KFC_MASK		(0x7 << EXYNOS5260_DIV_KFC_ACLK_KFC_SHIFT)
#define EXYNOS5260_DIV_KFC_PCLK_KFC_SHIFT		(20)
#define EXYNOS5260_DIV_KFC_PCLK_KFC_MASK		(0x7 << EXYNOS5260_DIV_KFC_PCLK_KFC_SHIFT)
#define EXYNOS5260_DIV_KFC_KFC_PLL_SHIFT		(24)
#define EXYNOS5260_DIV_KFC_KFC_PLL_MASK			(0x7 << EXYNOS5260_DIV_KFC_KFC_PLL_SHIFT)
#define EXYNOS5260_CLKSRC_STAT_KFC_PLL_SHIFT		(0)
#define EXYNOS5260_CLKSRC_STAT_KFC_PLL_MASK		(0x7 << EXYNOS5260_CLKSRC_STAT_KFC_PLL_SHIFT)

#define EXYNOS5260_APLL_CON0_LOCKED_SHIFT		(21)
#define EXYNOS5260_PLL_EGL_LOCKTIME_SHIFT		(0)
#define EXYNOS5260_PLL_EGL_LOCKTIME_MASK		(0xFFFFF << EXYNOS5260_PLL_KFC_LOCKTIME_SHIFT)
#define EXYNOS5260_SRC_STAT_EGL_EGL_B_SHIFT		(12)
#define EXYNOS5260_SRC_STAT_EGL_EGL_B_MASK		(0x7 << EXYNOS5260_SRC_STAT_EGL_EGL_B_SHIFT)
#define EXYNOS5260_DIV_EGL_EGL1_SHIFT			(0)
#define EXYNOS5260_DIV_EGL_EGL1_MASK			(0x7 << EXYNOS5260_DIV_EGL_EGL1_SHIFT)
#define EXYNOS5260_DIV_EGL_EGL2_SHIFT			(4)
#define EXYNOS5260_DIV_EGL_EGL2_MASK			(0x7 << EXYNOS5260_DIV_EGL_EGL2_SHIFT)
#define EXYNOS5260_DIV_EGL_ACLK_EGL_SHIFT		(8)
#define EXYNOS5260_DIV_EGL_ACLK_EGL_MASK		(0x7 << EXYNOS5260_DIV_EGL_ACLK_EGL_SHIFT)
#define EXYNOS5260_DIV_EGL_PCLK_EGL_SHIFT		(12)
#define EXYNOS5260_DIV_EGL_PCLK_EGL_MASK		(0x7 << EXYNOS5260_DIV_EGL_PCLK_EGL_SHIFT)
#define EXYNOS5260_DIV_EGL_ATCLK_SHIFT			(16)
#define EXYNOS5260_DIV_EGL_ATCLK_MASK			(0x7 << EXYNOS5260_DIV_EGL_ATCLK_SHIFT)
#define EXYNOS5260_DIV_EGL_PCLK_DBG_SHIFT		(20)
#define EXYNOS5260_DIV_EGL_PCLK_DBG_MASK		(0x7 << EXYNOS5260_DIV_EGL_PCLK_DBG_SHIFT)
#define EXYNOS5260_DIV_EGL_EGL_PLL_SHIFT		(24)
#define EXYNOS5260_DIV_EGL_EGL_PLL_MASK			(0x7 << EXYNOS5260_DIV_EGL_EGL_PLL_SHIFT)
#define EXYNOS5260_CLKSRC_STAT_EGL_PLL_SHIFT		(4)
#define EXYNOS5260_CLKSRC_STAT_EGL_PLL_MASK		(0x7 << EXYNOS5260_CLKSRC_STAT_EGL_PLL_SHIFT)

#endif
