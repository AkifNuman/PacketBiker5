// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;
using EpicGames.Core;

public class EasyAds : ModuleRules
{
    private static bool ExtractPath(string Source, out string Path)
    {
        int start = Source.IndexOf('"');
        int end = Source.LastIndexOf('"');
        if (start != 1 && end != -1 && start < end)
        {
            ++start;
            Path = Source.Substring(start, end - start);
            return true;
        }
        else
        {
            Path = "";
        }

        return false;
    }

    public EasyAds(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/EasyAds.h";

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);


        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            //PrivateIncludePaths.Add("Private/Windows");
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            var ProjectPath = Path.GetDirectoryName(Target.ProjectFile.ToString());
            var ProjectFileName = Target.ProjectFile.ToString();
            var Ini = ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, new DirectoryReference(ProjectPath), Target.Platform);
            // check ios appid
            if (!ProjectFileName.Contains("HostProject.uproject"))
            {
                string AndroidAppId;
                Ini.GetString("/Script/EasyAdsEditor.AdmobSetting", "AndroidAppId", out AndroidAppId);
                if (AndroidAppId.Length == 0)
                {
                    Log.TraceError("you must fill appid in EasyAdsPro setting, else the app will crash at startup");
                    throw new BuildException("you must fill appid in EasyAdsPro setting, else the app will crash at startup");
                }

                if ((AndroidAppId.Length != "ca-app-pub-3940256099942544~1458002511".Length) || !AndroidAppId.Contains("~"))
                {
                    Log.TraceError("you must fill valid appid like:ca-app-pub-3940256099942544~1458002511");
                    throw new BuildException("you must fill valid appid like:ca-app-pub-3940256099942544~1458002511");
                }
            }

            ConfigHierarchy configCacheIni = ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, (DirectoryReference)null, BuildHostPlatform.Current.Platform);
            string JavPathConfig;
            configCacheIni.GetString("/Script/AndroidPlatformEditor.AndroidSDKSettings", "JavaPath", out JavPathConfig);

            string JavaPath;
            if(!ProjectFileName.Contains("HostProject.uproject") && ExtractPath(JavPathConfig, out JavaPath) )
            {
                string JavaExePath = Path.Combine(JavaPath, "bin/java.exe");
                if(BuildHostPlatform.Current.Platform != UnrealTargetPlatform.Win64)
                {
                    JavaExePath = Path.Combine(JavaPath, "bin/java");
                }

                if (File.Exists(JavaExePath) )
                {
                    string JavaVersionInfo = Utils.RunLocalProcessAndReturnStdOut(JavaExePath, "-version");
                    string[] version_list = JavaVersionInfo.Split('\n');
                    if (version_list.Length > 0)
                    {
                        string java_version = version_list[0];
                        if (java_version.Contains("version \"11"))
                        {
                            Log.TraceInformation("java version:" + version_list[0]);
                        }
                        else
                        {
                            Log.TraceWarning("java version:" + version_list[0] + " may not compatible with some new ad network sdk(eg:Chartboost), suggest u use java 11 or newer instead");
                        }
                    }
                } 
                else
                {
                    Log.TraceWarning("java may not exist:" + JavaExePath);
                }
            }

            PrivateDependencyModuleNames.Add("Launch");
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "EasyAds_UPL.xml"));
        }
        else if(Target.Platform == UnrealTargetPlatform.IOS)
        {
            // to enable ios 14 support, uncomment this line
            //PublicDefinitions.Add("WITH_IOS14_SUPPORT=1");
            
            // check if there's swift link
            var ProjectPath = Path.GetDirectoryName(Target.ProjectFile.ToString());
            var Ini = ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, new DirectoryReference(ProjectPath), Target.Platform);
            var ProjectFileName = Target.ProjectFile.ToString();

            // check ios nonshipping link, skip plugin build
            if(!ProjectFileName.Contains("HostProject.uproject") )
            {
                
                string IOSAddtionLinkFlags;
                Ini.GetString("/Script/IOSRuntimeSettings.IOSRuntimeSettings", "AdditionalLinkerFlags", out IOSAddtionLinkFlags);
                if (!IOSAddtionLinkFlags.Contains("-rpath /usr/lib/swift"))
                {
                    Log.TraceError("IOS AdditionalLinkerFlags must add -rpath /usr/lib/swift, else will crash at startup");
                    throw new BuildException("Package For IOS, please add -rpath /usr/lib/swift to AdditionalLinkerFlags in project setting");
                }
            }
            // check ios shipping link, skip plugin build
            if (!ProjectFileName.Contains("HostProject.uproject"))
            {
                string IOSAddtionLinkFlags;
                Ini.GetString("/Script/IOSRuntimeSettings.IOSRuntimeSettings", "AdditionalShippingLinkerFlags", out IOSAddtionLinkFlags);
                if (!IOSAddtionLinkFlags.Contains("-rpath /usr/lib/swift"))
                {
                    Log.TraceError("IOS AdditionalShippingLinkerFlags must add -rpath /usr/lib/swift, else will crash at startup");
                    throw new BuildException("Package For IOS, please add -rpath /usr/lib/swift to AdditionalShippingLinkerFlags in project setting");
                }
            }

            // check ios appid
            if (!ProjectFileName.Contains("HostProject.uproject"))
            {
                string IOSAppId;
                Ini.GetString("/Script/EasyAdsEditor.AdmobSetting", "IOSAppId", out IOSAppId);
                if(IOSAppId.Length == 0)
                {
                    Log.TraceError("you must fill appid in EasyAdsPro setting, else the app will crash at startup");
                    throw new BuildException("you must fill appid in EasyAdsPro setting, else the app will crash at startup");
                }

                if( (IOSAppId.Length != "ca-app-pub-3940256099942544~1458002511".Length) || !IOSAppId.Contains("~") )
                {
                    Log.TraceError("you must fill valid appid like:ca-app-pub-3940256099942544~1458002511");
                    throw new BuildException("you must fill valid appid like:ca-app-pub-3940256099942544~1458002511");
                }
            }

            bool IsUnityDisabled = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSUnity", out IsUnityDisabled);

            bool IsVungleDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSVungle", out IsVungleDisable);

            bool IsChartboostDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSChartboost", out IsChartboostDisable);

            bool IsFacebookDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSFacebook", out IsFacebookDisable);

            bool IsApplovinDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSApplovin", out IsApplovinDisable);

            bool IsAdcolonyDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSAdColony", out IsAdcolonyDisable);

            bool IsIronSourceDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSIronSource", out IsIronSourceDisable);

            bool IsInmobiDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSInMobi", out IsInmobiDisable);

            bool IsTapJoyDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSTapJoy", out IsTapJoyDisable);

            bool IsIMobileDisable = false;
            Ini.GetBool("/Script/EasyAdsEditor.AdmobSetting", "DisableIOSIMobile", out IsIMobileDisable);

            ProjectDescriptor projectDescriptor = null;
            if(Target.ProjectFile != null)
            {
                projectDescriptor = ProjectDescriptor.FromFile(Target.ProjectFile);
            }
            
            System.Console.WriteLine("Engine Directory:" + EngineDirectory);
            List<PluginInfo> pluginList = new List<PluginInfo>();
            pluginList.AddRange(global::UnrealBuildTool.Plugins.ReadEnginePlugins(new DirectoryReference(EngineDirectory) ) );

            if (Target.ProjectFile != null)
            {
                System.Console.WriteLine("Project Directory:" + Target.ProjectFile.Directory);
                pluginList.AddRange(global::UnrealBuildTool.Plugins.ReadEnginePlugins(Target.ProjectFile.Directory));
            }
            
            List<string> fbrelationPluginList = new List<string>();
            fbrelationPluginList.AddRange(new string[]{"",
                "EasyFirebasePro",
                "OnlineSubsystemFacebook"
            });
            
            bool exsitEasyFirebase = false;
            bool existOnlineFacebook = false;
            foreach (PluginInfo plugin in pluginList)
            {
                if(!fbrelationPluginList.Contains(plugin.Name) )
                {
                    continue;
                }

                if(global::UnrealBuildTool.Plugins.IsPluginEnabledForTarget(plugin, projectDescriptor, Target.Platform, Target.Configuration, Target.Type) )
                {
                    if(plugin.Name.Contains("EasyFirebasePro") )
                    {
                        exsitEasyFirebase = true;
                    }

                    if (plugin.Name.Contains("OnlineSubsystemFacebook"))
                    {
                        existOnlineFacebook = true;
                    }

                    System.Console.WriteLine("Find Enabled Plugin:" + plugin.Name);
                }
            }

            // admob
            PublicAdditionalFrameworks.Add(
            new Framework(
            "GoogleMobileAds",														// Framework name
            "../ThirdParty/IOSFrameworks/GoogleMobileAds.embeddedframework.zip")
            );

            if (!exsitEasyFirebase)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "GoogleAppMeasurement",                                                      // Framework name
                "../ThirdParty/IOSFrameworks/GoogleAppMeasurement.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "GoogleAppMeasurementIdentitySupport",                                                      // Framework name
                "../ThirdParty/IOSFrameworks/GoogleAppMeasurementIdentitySupport.embeddedframework.zip")
                );
            }

            PublicAdditionalFrameworks.Add(
                new Framework(
                "UserMessagingPlatform",                                                       // Framework name
                "../ThirdParty/IOSFrameworks/UserMessagingPlatform.embeddedframework.zip")
                );



            // unity
            if(!IsUnityDisabled)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "UnityAds",														// Framework name
                "../ThirdParty/IOSFrameworks/UnityAds.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "UnityAdapter",                                                     // Framework name
                "../ThirdParty/IOSFrameworks/UnityAdapter.embeddedframework.zip")
                );
            }
            
            // chartboost
            if(!IsChartboostDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "Chartboost",														// Framework name
                "../ThirdParty/IOSFrameworks/Chartboost.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "ChartboostAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/ChartboostAdapter.embeddedframework.zip")
                );
            }
            

            // vungle
            if(!IsVungleDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "VungleAdapter",														// Framework name
                "../ThirdParty/IOSFrameworks/VungleAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "VungleSDK",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/VungleSDK.embeddedframework.zip")
                );
            }
            
            
            // adcolony
            if(!IsAdcolonyDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "AdColonyAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/AdColonyAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "AdColony",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/AdColony.embeddedframework.zip")
                );
            }
            
            
            // ironsource
            if(!IsIronSourceDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "IronSourceAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/IronSourceAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "IronSource",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/IronSource.embeddedframework.zip")
                );
            }
            
            
            // inmobi
            if(!IsInmobiDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "InMobiAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/InMobiAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "InMobiSDK",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/InMobiSDK.embeddedframework.zip")
                );
            }
            
            
            // i-mobile
            if(!IsIMobileDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "IMobileAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/IMobileAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "ImobileSdkAds",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/ImobileSdkAds.embeddedframework.zip")
                );
            }
            
            
            // tapjoy
            if(!IsTapJoyDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "TapjoyAdapter",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/TapjoyAdapter.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "Tapjoy",                                                        // Framework name
                "../ThirdParty/IOSFrameworks/Tapjoy.embeddedframework.zip")
                );
            }
            

            // facebook
            if (!exsitEasyFirebase)
            {
                if(!existOnlineFacebook)
                {
                    if (!IsFacebookDisable)
                    {
                        PublicAdditionalFrameworks.Add(
                        new Framework(
                        "FacebookAdapter",														// Framework name
                        "../ThirdParty/IOSFrameworks/FacebookAdapter.embeddedframework.zip")
                        );


                        PublicAdditionalFrameworks.Add(
                        new Framework(
                        "FBAudienceNetwork",                                                        // Framework name
                        "../ThirdParty/IOSFrameworks/FBAudienceNetwork.embeddedframework.zip")
                        );
                    }
                }
            }

            // applovin
            if(!IsApplovinDisable)
            {
                PublicAdditionalFrameworks.Add(
                new Framework(
                "AppLovinSDK",														// Framework name
                "../ThirdParty/IOSFrameworks/AppLovinSDK.embeddedframework.zip")
                );

                PublicAdditionalFrameworks.Add(
                new Framework(
                "AppLovinAdapter",                                                      // Framework name
                "../ThirdParty/IOSFrameworks/AppLovinAdapter.embeddedframework.zip")
                );
            }
            

            // test suite
            PublicAdditionalFrameworks.Add(
            new Framework(
            "GoogleMobileAdsMediationTestSuite",														// Framework name
            "../ThirdParty/IOSFrameworks/GoogleMobileAdsMediationTestSuite.embeddedframework.zip")
            );

            PublicFrameworks.AddRange(
            new string[]
            {
            "EventKit",
            "CFNetwork",
            "GLKit",
            "MobileCoreServices",
            "SystemConfiguration",
            "MediaPlayer",
            "AdSupport",
            "CoreLocation",
            "MessageUI",
            "Security",
            "CoreTelephony",
            "AppTrackingTransparency",
            "Security",
            "StoreKit",
            "Foundation",
            "CoreGraphics",
            "WebKit",
            "AVFoundation",
            "UIKit",
            "Accelerate"
            }
            );


            {
            
                string PluginPathForFramework = Utils.MakePathRelativeTo(ModuleDirectory, "./");
                BundleResource source = new BundleResource(PluginPathForFramework + "/../ThirdParty/GoogleMobileAdsMediationTestSuite.bundle", "");
                
                AdditionalBundleResources.Add(source);
                
                source = new BundleResource(PluginPathForFramework + "/../ThirdParty/MaterialIcons_ic_check_circle.bundle", "");
                AdditionalBundleResources.Add(source);

                source = new BundleResource(PluginPathForFramework + "/../ThirdParty/AppLovinSDKResources.bundle", "");
                AdditionalBundleResources.Add(source);

            }
            
            	
            // add static lib
            string strStaticPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty/IOSLib/"));
            string[] StaticLibrariesIOS = new string[] {
                "libMaterialComponents.a",
                "libMDFInternationalization.a",
                "libMDFTextAccessibility.a",
            };
            
            foreach (string Lib in StaticLibrariesIOS)
            {
                PublicAdditionalLibraries.Add(Path.Combine(strStaticPath, Lib) );
            }

            if(!exsitEasyFirebase)
            {
                PublicAdditionalLibraries.Add(Path.Combine(strStaticPath, "libGoogleUtilities.a") );
                PublicAdditionalLibraries.Add(Path.Combine(strStaticPath, "libnanopb.a") );
                PublicAdditionalLibraries.Add(Path.Combine(strStaticPath, "libPromisesObjC.a") );
            }

            string SDKROOT = Utils.RunLocalProcessAndReturnStdOut("/usr/bin/xcrun", "--sdk iphoneos --show-sdk-path");
            PublicSystemLibraryPaths.Add(Path.Combine(SDKROOT, "/usr/lib/swift/"));
            
            PublicSystemLibraries.Add("swiftWebKit");

            string swift_lib_path = Utils.RunLocalProcessAndReturnStdOut("/usr/bin/xcrun", "--find swift");
            swift_lib_path = swift_lib_path.Replace("bin/swift", "lib/swift/iphoneos");
            PublicSystemLibraryPaths.Add(swift_lib_path);
            //PublicSystemLibraryPaths.Add("/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift/iphoneos");

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("IOSPlugin", Path.Combine(PluginPath, "EasyAds_IOS_UPL.xml"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            //PrivateIncludePaths.Add("Private/Mac");
        }
        else
        {
            PrecompileForTargets = PrecompileTargetsType.None;
        }
    }
}
