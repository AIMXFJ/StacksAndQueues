##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=StacksAndQueues
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\AIMX\Desktop\1stAssignment Data\StacksAndQueues"
ProjectPath            := "C:\Users\AIMX\Desktop\1stAssignment Data\StacksAndQueues\StacksAndQueues"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=AIMX
Date                   :=20/10/2015
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="StacksAndQueues.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cell.cpp$(ObjectSuffix) $(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IntermediateDirectory)/FileIO.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/AIMX/Desktop/1stAssignment Data/StacksAndQueues/StacksAndQueues/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Cell.cpp$(ObjectSuffix): Cell.cpp $(IntermediateDirectory)/Cell.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/AIMX/Desktop/1stAssignment Data/StacksAndQueues/StacksAndQueues/Cell.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cell.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cell.cpp$(DependSuffix): Cell.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cell.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cell.cpp$(DependSuffix) -MM "Cell.cpp"

$(IntermediateDirectory)/Cell.cpp$(PreprocessSuffix): Cell.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cell.cpp$(PreprocessSuffix) "Cell.cpp"

$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix): Queue.cpp $(IntermediateDirectory)/Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/AIMX/Desktop/1stAssignment Data/StacksAndQueues/StacksAndQueues/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Queue.cpp$(DependSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Queue.cpp$(DependSuffix) -MM "Queue.cpp"

$(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix) "Queue.cpp"

$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix): Stack.cpp $(IntermediateDirectory)/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/AIMX/Desktop/1stAssignment Data/StacksAndQueues/StacksAndQueues/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Stack.cpp$(DependSuffix) -MM "Stack.cpp"

$(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix) "Stack.cpp"

$(IntermediateDirectory)/FileIO.cpp$(ObjectSuffix): FileIO.cpp $(IntermediateDirectory)/FileIO.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/AIMX/Desktop/1stAssignment Data/StacksAndQueues/StacksAndQueues/FileIO.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FileIO.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FileIO.cpp$(DependSuffix): FileIO.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FileIO.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FileIO.cpp$(DependSuffix) -MM "FileIO.cpp"

$(IntermediateDirectory)/FileIO.cpp$(PreprocessSuffix): FileIO.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FileIO.cpp$(PreprocessSuffix) "FileIO.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/

