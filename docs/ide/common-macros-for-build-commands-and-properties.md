---
title: "Macro per comandi e propriet&#224; di compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles"
  - "VC.Project.VCCLCompilerTool.XMLDocumentationFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "$(ConfigurationName) (macro)"
  - "$(DevEnvDir) (macro)"
  - "$(FrameworkDir) (macro)"
  - "$(FrameworkSDKDir) (macro)"
  - "$(FrameworkVersion) (macro)"
  - "$(FxCopDir) (macro)"
  - "$(Inherit) (macro)"
  - "$(InputDir) (macro)"
  - "$(InputExt) (macro)"
  - "$(InputFileName) (macro)"
  - "$(InputName) (macro)"
  - "$(InputPath) (macro)"
  - "$(IntDir) (macro)"
  - "$(NoInherit) (macro)"
  - "$(OutDir) (macro)"
  - "$(ParentName) macro"
  - "$(PlatformName) (macro)"
  - "$(ProjectDir) (macro)"
  - "$(ProjectExt) (macro)"
  - "$(ProjectFileName) (macro)"
  - "$(ProjectName) (macro)"
  - "$(ProjectPath) (macro)"
  - "$(References) (macro)"
  - "$(RemoteMachine) (macro)"
  - "$(RootNamespace) macro"
  - "$(SafeRootNamespace) (macro)"
  - "$(SolutionDir) (macro)"
  - "$(SolutionExt) (macro)"
  - "$(SolutionFileName) (macro)"
  - "$(SolutionName) (macro)"
  - "$(SolutionPath) (macro)"
  - "$(StopEvaluating) (macro)"
  - "$(TargetDir) (macro)"
  - "$(TargetExt) (macro)"
  - "$(TargetFileName) (macro)"
  - "$(TargetName) (macro)"
  - "$(TargetPath) (macro)"
  - "$(VCInstallDir) (macro)"
  - "$(VSInstallDir) (macro)"
  - "$(WebDeployPath) (macro)"
  - "$(WebDeployRoot) (macro)"
  - "macro di compilazione [C++]"
  - "compilazioni [C++], macro"
  - "ConfigurationName (macro), $(ConfigurationName)"
  - "DevEnvDir (macro), $(DevEnvDir)"
  - "FrameworkDir (macro), $(FrameworkDir)"
  - "FrameworkSDKDir (macro), $(FrameworkSDKDir)"
  - "FrameworkVersion (macro), $(FrameworkVersion)"
  - "FxCopDir (macro), $(FxCopDir)"
  - "Inherit (macro), $(Inherit)"
  - "InputDir (macro), $(InputDir)"
  - "InputExt (macro), $(InputExt)"
  - "InputFileName (macro), $(InputFileName)"
  - "InputName (macro), $(InputName)"
  - "InputPath (macro), $(InputPath)"
  - "IntDir (macro), $(IntDir)"
  - "macro [C++], macro di compilazione"
  - "NoInherit (macro), $(NoInherit)"
  - "OutDir (macro), $(OutDir)"
  - "ParentName (macro), $(ParentName)"
  - "PlatformName (macro), $(PlatformName)"
  - "ProjectDir (macro), $(ProjectDir)"
  - "ProjectExt (macro), $(ProjectExt)"
  - "ProjectFileName (macro), $(ProjectFileName)"
  - "ProjectName (macro), $(ProjectName)"
  - "ProjectPath (macro), $(ProjectPath)"
  - "proprietà [C++], macro di compilazione proprietà"
  - "References (macro), $(References)"
  - "RemoteMachine (macro), $(RemoteMachine)"
  - "RootNamespace (macro), $(RootNamespace)"
  - "SafeRootNamespace (macro), $(SafeRootNamespace)"
  - "SolutionDir (macro), $(SolutionDir)"
  - "SolutionExt (macro), $(SolutionExt)"
  - "SolutionFileName (macro), $(SolutionFileName)"
  - "SolutionName (macro), $(SolutionName)"
  - "SolutionPath (macro), $(SolutionPath)"
  - "StopEvaluating (macro), $(StopEvaluating)"
  - "TargetDir (macro), $(TargetDir)"
  - "TargetExt (macro), $(TargetExt)"
  - "TargetFileName (macro), $(TargetFileName)"
  - "TargetName (macro), $(TargetName)"
  - "TargetPath (macro), $(TargetPath)"
  - "VCInstallDir (macro), $(VCInstallDir)"
  - "VSInstallDir (macro), $(VSInstallDir)"
  - "WebDeployPath (macro), $(WebDeployPath)"
  - "WebDeployRoot (macro), $(WebDeployRoot)"
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Macro per comandi e propriet&#224; di compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare queste macro in qualsiasi punto della finestra di dialogo **Pagine delle proprietà** di un progetto in cui sono accettate le stringhe. Le macro non fanno distinzione tra maiuscole e minuscole.  
  
 Per visualizzare le macro attualmente disponibili, fare clic sulla freccia giù nella colonna a destra di un nome di proprietà. Se **Modifica** è disponibile, fare clic su di esso, quindi scegliere **Macro** nella finestra di dialogo di modifica. Per altre informazioni, vedere la sezione **Specifying User\-Defined Values** di [Pagine delle proprietà](../ide/property-pages-visual-cpp.md).  
  
 Le macro contrassegnate come deprecate non vengono più usate o sono state sostituite da una [macro dei metadati degli elementi](../Topic/ItemMetadata%20Element%20\(MSBuild\).md) \(**%\(***name***\)**\). Anche le macro contrassegnate "Deprecata; migrata" sono deprecate. Inoltre, se per il progetto che contiene la macro viene eseguita la migrazione da Visual Studio 2008, Visual Studio converte la macro nella corrente macro equivalente.  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|**$\(RemoteMachine\)**|Impostare sul valore della proprietà **Remote Machine**  nella pagina delle proprietà Debug. Per altre informazioni, vedere [Modifica delle impostazioni del progetto per una configurazione di debug C\/C\+\+](../Topic/Project%20Settings%20for%20a%20C++%20Debug%20Configuration.md).|  
|**$\(Configuration\)**|Nome della configurazione di progetto corrente, ad esempio, "Debug".|  
|**$\(Platform\)**|Nome della piattaforma del progetto corrente, ad esempio, "Win32".|  
|**$\(ParentName\)**|\(Deprecata\) Nome dell'elemento contenente questo elemento del progetto. Sarà il nome della cartella padre o il nome del progetto.|  
|**$\(RootNameSpace\)**|Eventuale spazio dei nomi contenente l'applicazione.|  
|**$\(IntDir\)**|Percorso della directory specificata dei file intermedi. Se si tratta di un percorso relativo, i file intermedi vengono inviati a questo percorso aggiunti alla directory di progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Intermediate Directory**. Non usare **$\(OutDir\)** per definire questa proprietà.|  
|**$\(OutDir\)**|Percorso della directory dei file di output. Se si tratta di un percorso relativo, i file di output vengono inviati a questo percorso aggiunti alla directory di progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Output Directory**. Non usare **$\(IntDir\)** per definire questa proprietà.|  
|**$\(DevEnvDir\)**|Directory di installazione di Visual Studio \(definita come unità \+ percorso\); include la barra rovesciata finale '\\'.|  
|**$\(InputDir\)**|\(Deprecata; migrata\) Directory del file di input \(definita come unità \+ percorso\); include la barra rovesciata finale '\\'. Se il progetto costituisce l'input, questa macro equivale a **$\(ProjectDir\)**.|  
|**$\(InputPath\)**|\(Deprecata; migrata\) Nome del percorso assoluto del file di input \(definito da unità \+ percorso \+ nome di base \+ estensione di file\). Se il progetto costituisce l'input, questa macro equivale a **$\(ProjectPath\)**.|  
|**$\(InputName\)**|\(Deprecata; migrata\) Nome base del file di input. Se il progetto costituisce l'input, questa macro equivale a **$\(ProjectName\)**.|  
|**$\(InputFileName\)**|\(Deprecata; migrata\) Nome file del file di input \(definito da nome di base \+ estensione di file\). Se il progetto costituisce l'input, questa macro equivale a **$\(ProjectFileName\)**.|  
|**$\(InputExt\)**|\(Deprecata; migrata\) Estensione di file del file di input. È incluso il punto '.' prima dell'estensione. Se il progetto costituisce l'input, questa macro equivale a **$\(ProjectExt\)**.|  
|**$\(ProjectDir\)**|Directory del progetto \(definita come unità \+ percorso\); include la barra rovesciata finale '\\'.|  
|**$\(ProjectPath\)**|Nome del percorso assoluto del progetto \(definito da unità \+ percorso \+ nome di base \+ estensione di file\).|  
|**$\(ProjectName\)**|Nome base del progetto.|  
|**$\(ProjectFileName\)**|Nome file del progetto \(definito da nome di base \+ estensione di file\).|  
|**$\(ProjectExt\)**|Estensione di file del progetto. È incluso il punto '.' prima dell'estensione.|  
|**$\(SolutionDir\)**|Directory della soluzione \(definita come unità \+ percorso\); include la barra rovesciata finale '\\'.|  
|**$\(SolutionPath\)**|Nome del percorso assoluto della soluzione \(definito da unità \+ percorso \+ nome di base \+ estensione di file\).|  
|**$\(SolutionName\)**|Nome base della soluzione.|  
|**$\(SolutionFileName\)**|Nome file della soluzione \(definito da nome di base \+ estensione di file\).|  
|**$\(SolutionExt\)**|Estensione di file della soluzione. È incluso il punto '.' prima dell'estensione.|  
|**$\(TargetDir\)**|Directory del file di output principale per la compilazione \(definita come unità \+ percorso\). Include la barra rovesciata '\\' finale.|  
|**$\(TargetPath\)**|Nome del percorso assoluto del file di output principale per la compilazione \(definito come unità \+ percorso \+ nome di base \+ estensione di file\).|  
|**$\(TargetName\)**|Nome di base del file di output principale per la compilazione.|  
|**$\(TargetFileName\)**|Nome file del file di output principale per la compilazione \(definito da nome di base \+ estensione di file\).|  
|**$\(TargetExt\)**|Estensione di file del file di output principale per la compilazione. È incluso il punto '.' prima dell'estensione.|  
|**$\(VSInstallDir\)**|Directory nella quale è stato installato Visual Studio.<br /><br /> Questa proprietà contiene la versione di Visual Studio di destinazione che potrebbe essere diversa dalla versione di Visual Studio host. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v110`, **$\(VSInstallDir\)** contiene il percorso dell'installazione di Visual Studio 2012.|  
|**$\(VCInstallDir\)**|Directory nella quale è stato installato Visual C\+\+.<br /><br /> Questa proprietà contiene la versione di Visual C\+\+ di destinazione che potrebbe essere diversa dalla versione di Visual Studio host. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v90`, **$\(VCInstallDir\)** contiene il percorso dell'installazione di Visual C\+\+ 2008.|  
|**$\(FrameworkDir\)**|Directory nella quale è stato installato .NET Framework.|  
|**$\(FrameworkVersion\)**|Versione di .NET Framework usata da Visual Studio. Combinata con **$\(FrameworkDir\)**, il percorso completo della versione di .NET Framework usata da Visual Studio.|  
|**$\(FrameworkSDKDir\)**|Directory nella quale è stato installato .NET Framework.  .NET Framework potrebbe essere stato installato come parte di Visual Studio oppure separatamente.|  
|**$\(WebDeployPath\)**|Percorso relativo dalla radice di distribuzione Web alla posizione degli output del progetto. Restituisce lo stesso valore di <xref:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath%2A>.|  
|**$\(WebDeployRoot\)**|Percorso assoluto della posizione di **\<localhost\>**. Ad esempio, c:\\inetpub\\wwwroot.|  
|**$\(SafeParentName\)**|\(Deprecata\) Nome del padre diretto in un formato di nome valido. Ad esempio, un modulo è l'elemento padre di un file RESX.|  
|**$\(SafeInputName\)**|\(Deprecata\) Nome file come nome di classe valido, meno l'estensione di file.|  
|**$\(SafeRootNamespace\)**|\(Deprecata\) Nome dello spazio dei nomi in cui le creazioni guidate progetto aggiungono il codice. Questo spazio dei nomi contiene solo caratteri che sarebbero consentiti in un identificatore C\+\+ valido.|  
|**$\(FxCopDir\)**|Percorso del file fxcop.cmd. Il file fxcop.cmd non è installato in tutte le edizioni di Visual C\+\+.|  
  
## Vedere anche  
 [Compilazione di progetti C\+\+ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)