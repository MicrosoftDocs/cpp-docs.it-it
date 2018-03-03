---
title: "Macro comuni per le proprietà e i comandi di compilazione | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles
- VC.Project.VCCLCompilerTool.XMLDocumentationFileName
dev_langs:
- C++
helpviewer_keywords:
- $(FrameworkSDKDir) macro
- ProjectName macro $(ProjectName)
- DevEnvDir macro $(DevEnvDir)
- $(DevEnvDir) macro
- TargetPath macro $(TargetPath)
- VSInstallDir macro $(VSInstallDir)
- $(InputFileName) macro
- $(SolutionFileName) macro
- macros [C++], build macros
- InputFileName macro $(InputFileName)
- $(VCInstallDir) macro
- $(IntDir) macro
- $(ConfigurationName) macro
- SolutionDir macro $(SolutionDir)
- $(TargetPath) macro
- $(Inherit) macro
- $(SolutionPath) macro
- WebDeployRoot macro $(WebDeployRoot)
- WebDeployPath macro $(WebDeployPath)
- StopEvaluating macro $(StopEvaluating)
- $(RootNamespace) macro
- $(WebDeployRoot) macro
- ProjectPath macro $(ProjectPath)
- $(ProjectPath) macro
- $(InputDir) macro
- SolutionName macro $(SolutionName)
- ProjectExt macro $(ProjectExt)
- $(TargetExt) macro
- $(ProjectFileName) macro
- TargetName macro $(TargetName)
- $(References) macro
- References macro $(References)
- TargetExt macro $(TargetExt)
- ProjectDir macro $(ProjectDir)
- $(TargetDir) macro
- SolutionExt macro $(SolutionExt)
- $(SolutionDir) macro
- ProjectFileName macro $(ProjectFileName)
- VCInstallDir macro $(VCInstallDir)
- $(InputExt) macro
- $(TargetFileName) macro
- $(SolutionExt) macro
- PlatformName macro $(PlatformName)
- IntDir macro $(IntDir)
- $(FrameworkVersion) macro
- $(ProjectDir) macro
- build macros [C++]
- InputPath macro $(InputPath)
- $(VSInstallDir) macro
- $(WebDeployPath) macro
- TargetFileName macro $(TargetFileName)
- NoInherit macro $(NoInherit)
- ConfigurationName macro $(ConfigurationName)
- $(ProjectExt) macro
- TargetDir macro $(TargetDir)
- InputName macro $(InputName)
- $(ProjectName) macro
- FrameworkSDKDir macro $(FrameworkSDKDir)
- $(ParentName) macro
- InputExt macro $(InputExt)
- $(SafeRootNamespace) macro
- InputDir macro $(InputDir)
- $(FxCopDir) macro
- $(RemoteMachine) macro
- Inherit macro $(Inherit)
- FrameworkVersion macro $(FrameworkVersion)
- $(StopEvaluating) macro
- $(OutDir) macro
- FrameworkDir macro $(FrameworkDir)
- SolutionFileName macro $(SolutionFileName)
- $(NoInherit) macro
- RemoteMachine macro $(RemoteMachine)
- properties [C++], build property macros
- $(TargetName) macro
- $(SolutionName) macro
- $(InputPath) macro
- ParentName macro $(ParentName)
- OutDir macro $(OutDir)
- SafeRootNamespace macro $(SafeRootNamespace)
- FxCopDir macro $(FxCopDir)
- $(InputName) macro
- RootNamespace macro $(RootNamespace)
- builds [C++], macros
- $(FrameworkDir) macro
- $(PlatformName) macro
- SolutionPath macro $(SolutionPath)
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f96e403516d6f85804fa798d7a0c28575482ff43
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="common-macros-for-build-commands-and-properties"></a>Macro comuni per le proprietà e i comandi di compilazione
A seconda le opzioni di installazione Visual Studio può rendere centinaia di macro disponibili all'utente. Questi corrispondono alle proprietà di MSBuild che vengono impostate per impostazione predefinita, o nei file con estensione props o con estensione targets o per le impostazioni del progetto. È possibile usare queste macro in qualsiasi punto della finestra di dialogo **Pagine delle proprietà** di un progetto in cui sono accettate le stringhe. Le macro non fanno distinzione tra maiuscole e minuscole.  
  
 Per visualizzare le macro attualmente disponibili, fare clic sulla freccia giù nella colonna a destra di un nome di proprietà. Se **Modifica** è disponibile, fare clic su di esso, quindi scegliere **Macro**nella finestra di dialogo di modifica. Per altre informazioni, vedere la sezione **Specifying User-Defined Values** di [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)nella finestra di dialogo di modifica.  
  
 Le macro contrassegnate come deprecate non vengono più usate o sono state sostituite da una [macro dei metadati degli elementi](/visualstudio/msbuild/itemmetadata-element-msbuild) (**%(***name***)**). Anche le macro contrassegnate "Deprecata; migrata" sono deprecate. Inoltre, se per il progetto che contiene la macro viene eseguita la migrazione da Visual Studio 2008, Visual Studio converte la macro nella corrente macro equivalente.  
  
 Nella tabella seguente descrive un sottoinsieme di uso comune delle macro disponibili. Questo elenco non è completo. Per informazioni dettagliate sulla modalità di creazione e utilizzate come macro in file con estensione vcxproj. props e targets definizioni di proprietà MSBuild, vedere [proprietà MSBuild](/visualstudio/msbuild/msbuild-properties).  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|**$ (RemoteMachine)**|Impostare sul valore della proprietà **Remote Machine** nella pagina delle proprietà Debug. Per altre informazioni, vedere [Modifica delle impostazioni del progetto per una configurazione di debug C/C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration) .|  
|**$(Configuration)**|Nome della configurazione di progetto corrente, ad esempio "Debug".|  
|**$(Platform)**|Nome della piattaforma di progetto corrente, ad esempio, "Win32".|  
|**$ (ParentName)**|(Deprecata) Nome dell'elemento contenente questo elemento del progetto. Sarà il nome della cartella padre o il nome del progetto.|  
|**$(RootNameSpace)**|Eventuale spazio dei nomi contenente l'applicazione.|  
|**$(IntDir)**|Percorso della directory specificata dei file intermedi. Se si tratta di un percorso relativo, file intermedi vengono inviati a questo percorso aggiunti alla directory del progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Intermediate Directory** . Non usare **$(OutDir)** per definire questa proprietà.|  
|**$(OutDir)**|Percorso della directory dei file di output. Se si tratta di un percorso relativo, i file di output vengono inviati a questo percorso aggiunti alla directory di progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Output Directory** . Non usare **$(IntDir)** per definire questa proprietà.|  
|**$ (Devenvdir)**|La directory di installazione di Visual Studio (definita come unità + percorso); include la barra rovesciata finale '\\'.|  
|**$ (Inputdir)**|(Deprecata; migrata) La directory del file di input (definita come unità + percorso); include la barra rovesciata finale '\\'. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectDir)**.|  
|**InputPath**|(Deprecata; migrata) Nome del percorso assoluto del file di input (definito da unità + percorso + nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectPath)**.|  
|**$ (InputName)**|(Deprecata; migrata) Nome base del file di input. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectName)**.|  
|**InputFilename**|(Deprecata; migrata) Nome file del file di input (definito da nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectFileName)**.|  
|**Inputext**|(Deprecata; migrata) Estensione di file del file di input. È incluso il punto '.' prima dell'estensione. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectExt)**.|  
|**$(ProjectDir)**|La directory del progetto (definita come unità + percorso); include la barra rovesciata finale '\\'.|  
|**$(ProjectPath)**|Nome del percorso assoluto del progetto (definito da unità + percorso + nome di base + estensione di file).|  
|**$(ProjectName)**|Nome base del progetto.|  
|**$(ProjectFileName)**|Nome file del progetto (definito da nome di base + estensione di file).|  
|**$(ProjectExt)**|Estensione di file del progetto. È incluso il punto '.' prima dell'estensione.|  
|**$ (SolutionDir)**|La directory della soluzione (definita come unità + percorso); include la barra rovesciata finale '\\'. Definito solo quando si compila una soluzione nell'IDE.|  
|**Solutionpath**|Nome del percorso assoluto della soluzione (definito da unità + percorso + nome di base + estensione di file). Definito solo quando si compila una soluzione nell'IDE.|  
|**SolutionName**|Nome base della soluzione. Definito solo quando si compila una soluzione nell'IDE.|  
|**$ (Solutionfilename)**|Nome file della soluzione (definito da nome di base + estensione di file). Definito solo quando si compila una soluzione nell'IDE.|  
|**$ (Solutionext)**|Estensione di file della soluzione. È incluso il punto '.' prima dell'estensione. Definito solo quando si compila una soluzione nell'IDE.|  
|**Targetdir**|La directory del file di output principale per la compilazione (definita come unità + percorso); include la barra rovesciata finale '\\'.|  
|**$ (TargetPath)**|Nome del percorso assoluto del file di output principale per la compilazione (definito come unità + percorso + nome di base + estensione di file).|  
|**$ (TargetName)**|Nome di base del file di output principale per la compilazione.|  
|**TargetFileName**|Nome file del file di output principale per la compilazione (definito da nome di base + estensione di file).|  
|**$ (TargetExt)**|Estensione di file del file di output principale per la compilazione. È incluso il punto '.' prima dell'estensione.|  
|**$(VSInstallDir)**|Directory nella quale è stato installato Visual Studio.<br /><br /> Questa proprietà contiene la versione di Visual Studio di destinazione che potrebbe essere diversa dalla versione di Visual Studio host. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v110`, **$(VSInstallDir)** contiene il percorso dell'installazione di Visual Studio 2012.|  
|**$(VCInstallDir)**|Directory nella quale è stato installato Visual C++.<br /><br /> Questa proprietà contiene la versione di Visual C++ di destinazione che potrebbe essere diversa dalla versione di Visual Studio host. Ad esempio, durante la compilazione con `$(PlatformToolset) = v140`, **$ (VCInstallDir)** contiene il percorso per l'installazione di Visual C++ 2015.|  
|**$(FrameworkDir)**|Directory nella quale è stato installato .NET Framework.|  
|**FrameworkVersion**|Versione di .NET Framework usata da Visual Studio. Combinata con **$(FrameworkDir)**, il percorso completo della versione di .NET Framework usata da Visual Studio.|  
|**$ (Frameworksdkdir)**|Directory nella quale è stato installato .NET Framework. .NET Framework potrebbe essere stato installato come parte di Visual Studio oppure separatamente.|  
|**$ (WebDeployPath)**|Percorso relativo dalla radice di distribuzione Web alla posizione degli output del progetto. Restituisce lo stesso valore di <xref:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath%2A>.|  
|**$ (WebDeployRoot)**|Il percorso assoluto per il percorso di  **\<localhost >**. Ad esempio, c:\inetpub\wwwroot.|  
|**$(SafeParentName)**|(Deprecata) Nome del padre diretto in un formato di nome valido. Ad esempio, un modulo è l'elemento padre di un file RESX.|  
|**$(SafeInputName)**|(Deprecata) Nome file come nome di classe valido, meno l'estensione di file.|  
|**$ (Saferootnamespace)**|(Deprecata) Nome dello spazio dei nomi in cui le creazioni guidate progetto aggiungono il codice. Questo spazio dei nomi contiene solo caratteri che sarebbero consentiti in un identificatore C++ valido.|  
|**FXCOPDIR**|Percorso del file fxcop.cmd. Il file fxcop.cmd non è installato in tutte le edizioni di Visual C++.|  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)