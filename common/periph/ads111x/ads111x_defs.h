/**
 * ADS111x definitions.
 */

#pragma once

/*
 * ADS Data Registers.
 */
#define ADS_REG_CONVERSION_PTR		0x0U
#define ADS_REG_CONFIG_PTR			0x1U
#define ADS_REG_LO_THRESH_PTR		0x2U
#define ADS_REG_HI_THRESH_PTR		0x3U

/*
 * Config reg bits.
 */
#define ADS_CONFIG_OS				(0x1U << 7U)
#define ADS_CONFIG_MODE				(0x1U << 0U)
#define ADS_CONFIG_MODE_CONT		(0x0U << 0U)
#define ADS_CONFIG_MODE_SS			ADS_CONFIG_MODE
#define ADS_CONFIG_MUX_Pos			4U
#define ADS_CONFIG_PGA_Pos			1U
#define ADS_CONFIG_DR_Pos			5U
#define ADS_CONFIG_COMP_MODE		(0x1U << 4U)
#define ADS_CONFIG_COMP_POL			(0x1U << 3U)
#define ADS_CONFIG_COMP_LAT			(0x1U << 2U)
#define ADS_CONFIG_COMP_QUE_1_CONV  (0x0 << 0U)
#define ADS_CONFIG_COMP_QUE_2_CONV  (0x1 << 0U)
#define ADS_CONFIG_COMP_QUE_4_CONV  (0x2 << 0U)
#define ADS_CONFIG_COMP_QUE_DISABLE (0x3 << 0U)

/*
 * Channel Mux selection.
 */
#define ADS_MUX_DIFF_P0_N1			(0b000U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_DIFF_P0_N3			(0b001U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_DIFF_P1_N3			(0b010U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_DIFF_P2_N3			(0b011U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_SING_P0				(0b100U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_SING_P1				(0b101U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_SING_P2				(0b110U << ADS_CONFIG_MUX_Pos)
#define ADS_MUX_SING_P3				(0b111U << ADS_CONFIG_MUX_Pos)

/*
 * Gain amplifier.
 */
#define ADS_PGA_6_144V				(0b000U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_4_096V				(0b001U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_2_048V				(0b010U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_1_024V				(0b011U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_0_512V				(0b100U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_0_256V_1			(0b101U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_0_256V_2			(0b110U << ADS_CONFIG_PGA_Pos)
#define ADS_PGA_0_256V_3			(0b111U << ADS_CONFIG_PGA_Pos)

/*
 * Datarate.
 */
#define ADS_DR_8_SPS				(0b000U << ADS_CONFIG_DR_Pos)
#define ADS_DR_16_SPS				(0b001U << ADS_CONFIG_DR_Pos)
#define ADS_DR_32_SPS				(0b010U << ADS_CONFIG_DR_Pos)
#define ADS_DR_64_SPS				(0b011U << ADS_CONFIG_DR_Pos)
#define ADS_DR_128_SPS				(0b100U << ADS_CONFIG_DR_Pos)
#define ADS_DR_250_SPS				(0b101U << ADS_CONFIG_DR_Pos)
#define ADS_DR_475_SPS				(0b110U << ADS_CONFIG_DR_Pos)
#define ADS_DR_860_SPS				(0b111U << ADS_CONFIG_DR_Pos)

/*
 * Quickstart.
 */
#define ADS_CONFIG_UPPER_DEFAULT	0b10000100U
#define ADS_CONFIG_LOWER_DEFAULT	0b10000011U

#define ADS_CONFIG_UPPER_BASE		0b10000000U
#define ADS_CONFIG_LOWER_BASE		0b00000011U

#define ADS_CONFIG_BUFFER_SIZE		2U
