using System.IO;
using UnrealBuildTool;

public class ProtobufCore : ModuleRules
{
    public ProtobufCore(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        string IncludePath = Path.Combine(ModuleDirectory, "include");
        string LibPath = Path.Combine(ModuleDirectory, "libprotobuf.lib");

        PublicSystemIncludePaths.Add(IncludePath);
        PublicIncludePaths.Add(IncludePath);
        PublicAdditionalLibraries.Add(LibPath);


        // 정적 결합 필수 매크로 전파
        PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI");
        PublicDefinitions.Add("ABSL_CONSUME_DLL=0");
        PublicDefinitions.Add("ABSL_DLL=0");
    }
}