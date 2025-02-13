/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#import <Foundation/Foundation.h>

#import "MTRBaseClusters.h"
#import "MTRBaseDevice.h"

#include <controller-clusters/zap-generated/CHIPClusters.h>

@interface MTRBaseClusterIdentify ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::IdentifyCluster * cppCluster;
- (chip::Controller::IdentifyCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterGroups ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::GroupsCluster * cppCluster;
- (chip::Controller::GroupsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterScenes ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ScenesCluster * cppCluster;
- (chip::Controller::ScenesCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOnOff ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OnOffCluster * cppCluster;
- (chip::Controller::OnOffCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOnOffSwitchConfiguration ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OnOffSwitchConfigurationCluster * cppCluster;
- (chip::Controller::OnOffSwitchConfigurationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterLevelControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::LevelControlCluster * cppCluster;
- (chip::Controller::LevelControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBinaryInputBasic ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BinaryInputBasicCluster * cppCluster;
- (chip::Controller::BinaryInputBasicCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterDescriptor ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::DescriptorCluster * cppCluster;
- (chip::Controller::DescriptorCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBinding ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BindingCluster * cppCluster;
- (chip::Controller::BindingCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterAccessControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::AccessControlCluster * cppCluster;
- (chip::Controller::AccessControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBridgedActions ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BridgedActionsCluster * cppCluster;
- (chip::Controller::BridgedActionsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBasic ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BasicCluster * cppCluster;
- (chip::Controller::BasicCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOtaSoftwareUpdateProvider ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OtaSoftwareUpdateProviderCluster * cppCluster;
- (chip::Controller::OtaSoftwareUpdateProviderCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOtaSoftwareUpdateRequestor ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OtaSoftwareUpdateRequestorCluster * cppCluster;
- (chip::Controller::OtaSoftwareUpdateRequestorCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterLocalizationConfiguration ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::LocalizationConfigurationCluster * cppCluster;
- (chip::Controller::LocalizationConfigurationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterTimeFormatLocalization ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::TimeFormatLocalizationCluster * cppCluster;
- (chip::Controller::TimeFormatLocalizationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterUnitLocalization ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::UnitLocalizationCluster * cppCluster;
- (chip::Controller::UnitLocalizationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterPowerSourceConfiguration ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::PowerSourceConfigurationCluster * cppCluster;
- (chip::Controller::PowerSourceConfigurationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterPowerSource ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::PowerSourceCluster * cppCluster;
- (chip::Controller::PowerSourceCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterGeneralCommissioning ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::GeneralCommissioningCluster * cppCluster;
- (chip::Controller::GeneralCommissioningCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterNetworkCommissioning ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::NetworkCommissioningCluster * cppCluster;
- (chip::Controller::NetworkCommissioningCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterDiagnosticLogs ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::DiagnosticLogsCluster * cppCluster;
- (chip::Controller::DiagnosticLogsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterGeneralDiagnostics ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::GeneralDiagnosticsCluster * cppCluster;
- (chip::Controller::GeneralDiagnosticsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterSoftwareDiagnostics ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::SoftwareDiagnosticsCluster * cppCluster;
- (chip::Controller::SoftwareDiagnosticsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterThreadNetworkDiagnostics ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ThreadNetworkDiagnosticsCluster * cppCluster;
- (chip::Controller::ThreadNetworkDiagnosticsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterWiFiNetworkDiagnostics ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::WiFiNetworkDiagnosticsCluster * cppCluster;
- (chip::Controller::WiFiNetworkDiagnosticsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterEthernetNetworkDiagnostics ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::EthernetNetworkDiagnosticsCluster * cppCluster;
- (chip::Controller::EthernetNetworkDiagnosticsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBridgedDeviceBasic ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BridgedDeviceBasicCluster * cppCluster;
- (chip::Controller::BridgedDeviceBasicCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterSwitch ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::SwitchCluster * cppCluster;
- (chip::Controller::SwitchCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterAdministratorCommissioning ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::AdministratorCommissioningCluster * cppCluster;
- (chip::Controller::AdministratorCommissioningCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOperationalCredentials ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OperationalCredentialsCluster * cppCluster;
- (chip::Controller::OperationalCredentialsCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterGroupKeyManagement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::GroupKeyManagementCluster * cppCluster;
- (chip::Controller::GroupKeyManagementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterFixedLabel ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::FixedLabelCluster * cppCluster;
- (chip::Controller::FixedLabelCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterUserLabel ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::UserLabelCluster * cppCluster;
- (chip::Controller::UserLabelCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBooleanState ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BooleanStateCluster * cppCluster;
- (chip::Controller::BooleanStateCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterModeSelect ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ModeSelectCluster * cppCluster;
- (chip::Controller::ModeSelectCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterDoorLock ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::DoorLockCluster * cppCluster;
- (chip::Controller::DoorLockCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterWindowCovering ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::WindowCoveringCluster * cppCluster;
- (chip::Controller::WindowCoveringCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterBarrierControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::BarrierControlCluster * cppCluster;
- (chip::Controller::BarrierControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterPumpConfigurationAndControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::PumpConfigurationAndControlCluster * cppCluster;
- (chip::Controller::PumpConfigurationAndControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterThermostat ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ThermostatCluster * cppCluster;
- (chip::Controller::ThermostatCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterFanControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::FanControlCluster * cppCluster;
- (chip::Controller::FanControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterThermostatUserInterfaceConfiguration ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ThermostatUserInterfaceConfigurationCluster * cppCluster;
- (chip::Controller::ThermostatUserInterfaceConfigurationCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterColorControl ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ColorControlCluster * cppCluster;
- (chip::Controller::ColorControlCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterIlluminanceMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::IlluminanceMeasurementCluster * cppCluster;
- (chip::Controller::IlluminanceMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterTemperatureMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::TemperatureMeasurementCluster * cppCluster;
- (chip::Controller::TemperatureMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterPressureMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::PressureMeasurementCluster * cppCluster;
- (chip::Controller::PressureMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterFlowMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::FlowMeasurementCluster * cppCluster;
- (chip::Controller::FlowMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterRelativeHumidityMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::RelativeHumidityMeasurementCluster * cppCluster;
- (chip::Controller::RelativeHumidityMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterOccupancySensing ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::OccupancySensingCluster * cppCluster;
- (chip::Controller::OccupancySensingCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterWakeOnLan ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::WakeOnLanCluster * cppCluster;
- (chip::Controller::WakeOnLanCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterChannel ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ChannelCluster * cppCluster;
- (chip::Controller::ChannelCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterTargetNavigator ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::TargetNavigatorCluster * cppCluster;
- (chip::Controller::TargetNavigatorCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterMediaPlayback ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::MediaPlaybackCluster * cppCluster;
- (chip::Controller::MediaPlaybackCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterMediaInput ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::MediaInputCluster * cppCluster;
- (chip::Controller::MediaInputCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterLowPower ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::LowPowerCluster * cppCluster;
- (chip::Controller::LowPowerCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterKeypadInput ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::KeypadInputCluster * cppCluster;
- (chip::Controller::KeypadInputCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterContentLauncher ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ContentLauncherCluster * cppCluster;
- (chip::Controller::ContentLauncherCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterAudioOutput ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::AudioOutputCluster * cppCluster;
- (chip::Controller::AudioOutputCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterApplicationLauncher ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ApplicationLauncherCluster * cppCluster;
- (chip::Controller::ApplicationLauncherCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterApplicationBasic ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ApplicationBasicCluster * cppCluster;
- (chip::Controller::ApplicationBasicCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterAccountLogin ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::AccountLoginCluster * cppCluster;
- (chip::Controller::AccountLoginCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterElectricalMeasurement ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::ElectricalMeasurementCluster * cppCluster;
- (chip::Controller::ElectricalMeasurementCluster **)cppClusterSlot;
@end

@interface MTRBaseClusterTestCluster ()
// Must only touch cppCluster on the Matter queue.
@property (readonly) chip::Controller::TestClusterCluster * cppCluster;
- (chip::Controller::TestClusterCluster **)cppClusterSlot;
@end
