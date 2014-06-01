#pragma once

typedef enum {
    FEATURE_RX_PPM = 1 << 0,
    FEATURE_VBAT = 1 << 1,
    FEATURE_INFLIGHT_ACC_CAL = 1 << 2,
    FEATURE_RX_SERIAL = 1 << 3,
    FEATURE_MOTOR_STOP = 1 << 4,
    FEATURE_SERVO_TILT = 1 << 5,
    FEATURE_SOFTSERIAL = 1 << 6,
    FEATURE_LED_RING = 1 << 7,
    FEATURE_GPS = 1 << 8,
    FEATURE_FAILSAFE = 1 << 9,
    FEATURE_SONAR = 1 << 10,
    FEATURE_TELEMETRY = 1 << 11,
    FEATURE_CURRENT_METER = 1 << 12,
    FEATURE_3D = 1 << 13,
    FEATURE_RX_PARALLEL_PWM = 1 << 14,
    FEATURE_RX_MSP = 1 << 15,
    FEATURE_RSSI_ADC = 1 << 16
} AvailableFeatures;

bool feature(uint32_t mask);
void featureSet(uint32_t mask);
void featureClear(uint32_t mask);
void featureClearAll(void);
uint32_t featureMask(void);

void copyCurrentProfileToProfileSlot(uint8_t profileSlotIndex);

void resetEEPROM(void);
void readEEPROM(void);
void readEEPROMAndNotify(void);
void writeEEPROM();
void ensureEEPROMContainsValidData(void);
void saveAndReloadCurrentProfileToCurrentProfileSlot(void);

bool canSoftwareSerialBeUsed(void);
