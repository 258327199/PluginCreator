#include "PluginCreatorPrivatePCH.h"
#include "PluginDescriptorObject.h"


UPluginDescriptorObject::UPluginDescriptorObject(const FObjectInitializer& ObjectInitializer)
{
	FileVersion = 3;
	Version = 1;
	VersionName = TEXT("1.0");
	Category = TEXT("Other");
	bEnabledByDefault = true;
}

void UPluginDescriptorObject::FillDescriptor(FPluginDescriptor& OutDescriptor)
{
	OutDescriptor.bCanContainContent = bCanContainContent;
	OutDescriptor.bEnabledByDefault = bEnabledByDefault;
	OutDescriptor.bIsBetaVersion = bIsBetaVersion;
	OutDescriptor.Category = Category;
	OutDescriptor.CreatedBy = CreatedBy;
	OutDescriptor.CreatedByURL = CreatedByURL;
	OutDescriptor.Description = Description;
	OutDescriptor.DocsURL = DocsURL;
	OutDescriptor.FileVersion = FileVersion;
	OutDescriptor.FriendlyName = FriendlyName;
	OutDescriptor.Version = Version;
	OutDescriptor.VersionName = VersionName;
}
