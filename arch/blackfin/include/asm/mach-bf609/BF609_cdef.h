/* DO NOT EDIT THIS FILE
 * Automatically generated by generate-cdef-headers.xsl
 * DO NOT EDIT THIS FILE
 */

#ifndef __BFIN_CDEF_ADSP_BF609_proc__
#define __BFIN_CDEF_ADSP_BF609_proc__

#include "../mach-common/ADSP-EDN-core_cdef.h"

#define bfin_read_CGU_STAT() bfin_read32(CGU_STAT)
#define bfin_read_CGU_CLKOUTSEL() bfin_read32(CGU_CLKOUTSEL)
#define bfin_read_CGU_CTL() bfin_read32(CGU_CTL)
#define bfin_write_CGU_CTL(val) bfin_write32(CGU_CTL, val)
#define bfin_read_CGU_DIV() bfin_read32(CGU_DIV)
#define bfin_write_CGU_DIV(val) bfin_write32(CGU_DIV, val)

#define bfin_read_RCU0_CTL() bfin_read32(RCU0_CTL)
#define bfin_write_RCU0_CTL(val) bfin_write32(RCU0_CTL, val)

#define bfin_read_CHIPID()		bfin_read32(CHIPID)
#define bfin_write_CHIPID(val)		bfin_write32(CHIPID, val)

#define bfin_read_DMC0_CFG() bfin_read32(DMC0_CFG)
#define bfin_write_DMC0_CFG(val) bfin_write32(DMC0_CFG, val)
#define bfin_read_DMC0_TR0() bfin_read32(DMC0_TR0)
#define bfin_write_DMC0_TR0(val) bfin_write32(DMC0_TR0, val)
#define bfin_read_DMC0_TR1() bfin_read32(DMC0_TR1)
#define bfin_write_DMC0_TR1(val) bfin_write32(DMC0_TR1, val)
#define bfin_read_DMC0_TR2() bfin_read32(DMC0_TR2)
#define bfin_write_DMC0_TR2(val) bfin_write32(DMC0_TR2, val)
#define bfin_read_DMC0_MR() bfin_read32(DMC0_MR)
#define bfin_write_DMC0_MR(val) bfin_write32(DMC0_MR, val)
#define bfin_read_DMC0_EMR1() bfin_read32(DMC0_EMR1)
#define bfin_write_DMC0_EMR1(val) bfin_write32(DMC0_EMR1, val)
#define bfin_read_DMC0_CTL() bfin_read32(DMC0_CTL)
#define bfin_write_DMC0_CTL(val) bfin_write32(DMC0_CTL, val)
#define bfin_read_DMC0_STAT() bfin_read32(DMC0_STAT)
#define bfin_write_DMC0_STAT(val) bfin_write32(DMC0_STAT, val)
#define bfin_read_DMC0_DLLCTL() bfin_read32(DMC0_DLLCTL)
#define bfin_write_DMC0_DLLCTL(val) bfin_write32(DMC0_DLLCTL, val)

#define bfin_read_SEC_CCTL()		bfin_read32(SEC0_CCTL0)
#define bfin_write_SEC_CCTL(val)	bfin_write32(SEC0_CCTL0, val)
#define bfin_read_SEC_GCTL()		bfin_read32(SEC0_GCTL)
#define bfin_write_SEC_GCTL(val)	bfin_write32(SEC0_GCTL, val)

#define bfin_read_SEC_FCTL()		bfin_read32(SEC0_FCTL)
#define bfin_write_SEC_FCTL(val)	bfin_write32(SEC0_FCTL, val)
#define bfin_read_SEC_SCTL(sid)		bfin_read32((SEC0_SCTL0 + (sid) * 8))
#define bfin_write_SEC_SCTL(sid, val)	bfin_write32((SEC0_SCTL0 \
	+ (sid) * 8), val)

#define bfin_read_SMC_GCTL() bfin_read32(SMC_GCTL)
#define bfin_write_SMC_GCTL(val) bfin_write32(SMC_GCTL, val)
#define bfin_read_SMC_GSTAT() bfin_read32(SMC_GSTAT)
#define bfin_read_SMC_B0CTL() bfin_read32(SMC_B0CTL)
#define bfin_write_SMC_B0CTL(val) bfin_write32(SMC_B0CTL, val)
#define bfin_read_SMC_B0TIM() bfin_read32(SMC_B0TIM)
#define bfin_write_SMC_B0TIM(val) bfin_write32(SMC_B0TIM, val)
#define bfin_read_SMC_B0ETIM() bfin_read32(SMC_B0ETIM)
#define bfin_write_SMC_B0ETIM(val) bfin_write32(SMC_B0ETIM, val)
#define bfin_read_SMC_B1CTL() bfin_read32(SMC_B1CTL)
#define bfin_write_SMC_B1CTL(val) bfin_write32(SMC_B1CTL, val)
#define bfin_read_SMC_B1TIM() bfin_read32(SMC_B1TIM)
#define bfin_write_SMC_B1TIM(val) bfin_write32(SMC_B1TIM, val)
#define bfin_read_SMC_B1ETIM() bfin_read32(SMC_B1ETIM)
#define bfin_write_SMC_B1ETIM(val) bfin_write32(SMC_B1ETIM, val)
#define bfin_read_SMC_B2CTL() bfin_read32(SMC_B2CTL)
#define bfin_write_SMC_B2CTL(val) bfin_write32(SMC_B2CTL, val)
#define bfin_read_SMC_B2TIM() bfin_read32(SMC_B2TIM)
#define bfin_write_SMC_B2TIM(val) bfin_write32(SMC_B2TIM, val)
#define bfin_read_SMC_B2ETIM() bfin_read32(SMC_B2ETIM)
#define bfin_write_SMC_B2ETIM(val) bfin_write32(SMC_B2ETIM, val)
#define bfin_read_SMC_B3CTL() bfin_read32(SMC_B3CTL)
#define bfin_write_SMC_B3CTL(val) bfin_write32(SMC_B3CTL, val)
#define bfin_read_SMC_B3TIM() bfin_read32(SMC_B3TIM)
#define bfin_write_SMC_B3TIM(val) bfin_write32(SMC_B3TIM, val)
#define bfin_read_SMC_B3ETIM() bfin_read32(SMC_B3ETIM)
#define bfin_write_SMC_B3ETIM(val) bfin_write32(SMC_B3ETIM, val)

#define bfin_read_USB_PLLOSC_CTRL()    bfin_read16(USB_PLL_OSC)
#define bfin_write_USB_PLLOSC_CTRL(val) bfin_write16(USB_PLL_OSC, val)
#define bfin_write_USB_VBUS_CTL(val) bfin_write8(USB_VBUS_CTL, val)
#define bfin_read_USB_DMA_INTERRUPT()  bfin_read8(USB_DMA_IRQ)
#define bfin_write_USB_DMA_INTERRUPT(val) bfin_write8(USB_DMA_IRQ, val)
#define bfin_write_USB_APHY_CNTRL(val) bfin_write8(USB_PHY_CTL, val)
#define bfin_read_USB_APHY_CNTRL() bfin_read8(USB_PHY_CTL)

#define bfin_read_DMA10_NEXT_DESC_PTR() bfin_readPTR(DMA10_DSCPTR_NXT)
#define bfin_write_DMA10_NEXT_DESC_PTR(val) bfin_writePTR(DMA10_DSCPTR_NXT, val)
#define bfin_read_DMA10_START_ADDR() bfin_readPTR(DMA10_ADDRSTART)
#define bfin_write_DMA10_START_ADDR(val) bfin_writePTR(DMA10_ADDRSTART, val)
#define bfin_read_DMA10_CONFIG() bfin_read32(DMA10_CFG)
#define bfin_write_DMA10_CONFIG(val) bfin_write32(DMA10_CFG, val)
#define bfin_read_DMA10_X_COUNT() bfin_read32(DMA10_XCNT)
#define bfin_write_DMA10_X_COUNT(val) bfin_write32(DMA10_XCNT, val)
#define bfin_read_DMA10_X_MODIFY() bfin_read32(DMA10_XMOD)
#define bfin_write_DMA10_X_MODIFY(val) bfin_write32(DMA10_XMOD, val)
#define bfin_read_DMA10_Y_COUNT() bfin_read32(DMA10_YCNT)
#define bfin_write_DMA10_Y_COUNT(val) bfin_write32(DMA10_YCNT, val)
#define bfin_read_DMA10_Y_MODIFY() bfin_read32(DMA10_YMOD)
#define bfin_write_DMA10_Y_MODIFY(val) bfin_write32(DMA10_YMOD, val)
#define bfin_read_DMA10_CURR_DESC_PTR() bfin_readPTR(DMA10_DSCPTR_CUR)
#define bfin_write_DMA10_CURR_DESC_PTR(val) bfin_writePTR(DMA10_DSCPTR_CUR, val)
#define bfin_read_DMA10_CURR_ADDR() bfin_readPTR(DMA10_ADDR_CUR)
#define bfin_write_DMA10_CURR_ADDR(val) bfin_writePTR(DMA10_ADDR_CUR, val)
#define bfin_read_DMA10_IRQ_STATUS() bfin_read32(DMA10_STAT)
#define bfin_write_DMA10_IRQ_STATUS(val) bfin_write32(DMA10_STAT, val)
#define bfin_read_DMA10_CURR_X_COUNT() bfin_read32(DMA10_XCNT_CUR)
#define bfin_write_DMA10_CURR_X_COUNT(val) bfin_write32(DMA10_XCNT_CUR, val)
#define bfin_read_DMA10_CURR_Y_COUNT() bfin_read32(DMA10_YCNT_CUR)
#define bfin_write_DMA10_CURR_Y_COUNT(val) bfin_write32(DMA10_YCNT_CUR, val)

#define bfin_read_WDOG_CNT() bfin_read32(WDOG_CNT)
#define bfin_write_WDOG_CNT(val) bfin_write32(WDOG_CNT, val)
#define bfin_read_WDOG_CTL() bfin_read32(WDOG_CTL)
#define bfin_write_WDOG_CTL(val) bfin_write32(WDOG_CTL, val)
#define bfin_read_WDOG_STAT() bfin_read32(WDOG_STAT)
#define bfin_write_WDOG_STAT(val) bfin_write32(WDOG_STAT, val)
#define bfin_read_SPI_BAUD() bfin_read32(SPI0_CLK)
#define bfin_write_SPI_BAUD(val) bfin_write32(SPI0_CLK, val)

#define bfin_read_PORTD_FER() bfin_read32(PORTD_FER)
#define bfin_write_PORTD_FER_SET(val) bfin_write32(PORTD_FER_SET, val)
#define bfin_write_PORTD_FER_CLR(val) bfin_write32(PORTD_FER_CLR, val)
#define bfin_read_PORTD_MUX() bfin_read32(PORTD_MUX)
#define bfin_write_PORTD_MUX(val) bfin_write32(PORTD_MUX, val)
#define bfin_read_PORTG_FER() bfin_read32(PORTG_FER)
#define bfin_write_PORTG_FER_SET(val) bfin_write32(PORTG_FER_SET, val)
#define bfin_write_PORTG_FER_CLR(val) bfin_write32(PORTG_FER_CLR, val)
#define bfin_read_PORTG_MUX() bfin_read32(PORTG_MUX)
#define bfin_write_PORTG_MUX(val) bfin_write32(PORTG_MUX, val)

#define bfin_read_RSI_CLK_CONTROL()    bfin_read16(RSI_CLK_CONTROL)
#define bfin_write_RSI_CLK_CONTROL(val) bfin_write16(RSI_CLK_CONTROL, val)
#define bfin_read_RSI_ARGUMENT()       bfin_read32(RSI_ARGUMENT)
#define bfin_write_RSI_ARGUMENT(val)   bfin_write32(RSI_ARGUMENT, val)
#define bfin_read_RSI_COMMAND()        bfin_read16(RSI_COMMAND)
#define bfin_write_RSI_COMMAND(val)    bfin_write16(RSI_COMMAND, val)
#define bfin_read_RSI_RESP_CMD()       bfin_read16(RSI_RESP_CMD)
#define bfin_write_RSI_RESP_CMD(val)   bfin_write16(RSI_RESP_CMD, val)
#define bfin_read_RSI_RESPONSE0()      bfin_read32(RSI_RESPONSE0)
#define bfin_write_RSI_RESPONSE0(val)  bfin_write32(RSI_RESPONSE0, val)
#define bfin_read_RSI_RESPONSE1()      bfin_read32(RSI_RESPONSE1)
#define bfin_write_RSI_RESPONSE1(val)  bfin_write32(RSI_RESPONSE1, val)
#define bfin_read_RSI_RESPONSE2()      bfin_read32(RSI_RESPONSE2)
#define bfin_write_RSI_RESPONSE2(val)  bfin_write32(RSI_RESPONSE2, val)
#define bfin_read_RSI_RESPONSE3()      bfin_read32(RSI_RESPONSE3)
#define bfin_write_RSI_RESPONSE3(val)  bfin_write32(RSI_RESPONSE3, val)
#define bfin_read_RSI_DATA_TIMER()     bfin_read32(RSI_DATA_TIMER)
#define bfin_write_RSI_DATA_TIMER(val) bfin_write32(RSI_DATA_TIMER, val)
#define bfin_read_RSI_DATA_LGTH()      bfin_read16(RSI_DATA_LGTH)
#define bfin_write_RSI_DATA_LGTH(val)  bfin_write16(RSI_DATA_LGTH, val)
#define bfin_read_RSI_DATA_CONTROL()   bfin_read16(RSI_DATA_CONTROL)
#define bfin_write_RSI_DATA_CONTROL(val) bfin_write16(RSI_DATA_CONTROL, val)
#define bfin_read_RSI_DATA_CNT()       bfin_read16(RSI_DATA_CNT)
#define bfin_write_RSI_DATA_CNT(val)   bfin_write16(RSI_DATA_CNT, val)
#define bfin_read_RSI_STATUS()         bfin_read32(RSI_STATUS)
#define bfin_write_RSI_STATUS(val)     bfin_write32(RSI_STATUS, val)
#define bfin_read_RSI_STATUSCL()       bfin_read16(RSI_STATUSCL)
#define bfin_write_RSI_STATUSCL(val)   bfin_write16(RSI_STATUSCL, val)
#define bfin_read_RSI_MASK0()          bfin_read32(RSI_MASK0)
#define bfin_write_RSI_MASK0(val)      bfin_write32(RSI_MASK0, val)
#define bfin_read_RSI_MASK1()          bfin_read32(RSI_MASK1)
#define bfin_write_RSI_MASK1(val)      bfin_write32(RSI_MASK1, val)
#define bfin_read_RSI_FIFO_CNT()       bfin_read16(RSI_FIFO_CNT)
#define bfin_write_RSI_FIFO_CNT(val)   bfin_write16(RSI_FIFO_CNT, val)
#define bfin_read_RSI_CEATA_CONTROL()  bfin_read16(RSI_CEATA_CONTROL)
#define bfin_write_RSI_CEATA_CONTROL(val) bfin_write16(RSI_CEATA_CONTROL, val)
#define bfin_read_RSI_BLKSZ()          bfin_read16(RSI_BLKSZ)
#define bfin_write_RSI_BLKSZ(val)      bfin_write16(RSI_BLKSZ, val)
#define bfin_read_RSI_FIFO()           bfin_read32(RSI_FIFO)
#define bfin_write_RSI_FIFO(val)       bfin_write32(RSI_FIFO, val)
#define bfin_read_RSI_ESTAT()          bfin_read32(RSI_ESTAT)
#define bfin_write_RSI_ESTAT(val)      bfin_write32(RSI_ESTAT, val)
#define bfin_read_RSI_EMASK()          bfin_read32(RSI_EMASK)
#define bfin_write_RSI_EMASK(val)      bfin_write32(RSI_EMASK, val)
#define bfin_read_RSI_CONFIG()         bfin_read16(RSI_CONFIG)
#define bfin_write_RSI_CONFIG(val)     bfin_write16(RSI_CONFIG, val)
#define bfin_read_RSI_RD_WAIT_EN()     bfin_read16(RSI_RD_WAIT_EN)
#define bfin_write_RSI_RD_WAIT_EN(val) bfin_write16(RSI_RD_WAIT_EN, val)
#define bfin_read_RSI_PID0()           bfin_read16(RSI_PID0)
#define bfin_write_RSI_PID0(val)       bfin_write16(RSI_PID0, val)
#define bfin_read_RSI_PID1()           bfin_read16(RSI_PID1)
#define bfin_write_RSI_PID1(val)       bfin_write16(RSI_PID1, val)
#define bfin_read_RSI_PID2()           bfin_read16(RSI_PID2)
#define bfin_write_RSI_PID2(val)       bfin_write16(RSI_PID2, val)
#define bfin_read_RSI_PID3()           bfin_read16(RSI_PID3)
#define bfin_write_RSI_PID3(val)       bfin_write16(RSI_PID3, val)

#endif /* __BFIN_CDEF_ADSP_BF609_proc__ */
