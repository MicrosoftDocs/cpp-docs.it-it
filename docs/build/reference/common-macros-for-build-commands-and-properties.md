---
title: Macro comuni per i comandi e le proprietà di compilazione
ms.date: 05/29/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles
- VC.Project.VCCLCompilerTool.XMLDocumentationFileName
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
ms.openlocfilehash: 669114691bc89c1e8136e07a949be57cda3d71b9
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826649"
---
# <a name="common-macros-for-build-commands-and-properties"></a>Macro comuni per i comandi e le proprietà di compilazione

In base alle opzioni di installazione Visual Studio può mettere a disposizione dell'utente centinaia di macro. Queste corrispondono alle proprietà di MSBuild specificate per impostazione predefinita, nei file PROPS o TARGET o nelle impostazioni del progetto. È possibile usare queste macro in qualsiasi punto della finestra di dialogo **Pagine delle proprietà** di un progetto in cui sono accettate le stringhe. Le macro non fanno distinzione tra maiuscole e minuscole.

## <a name="view-the-current-properties-and-macros"></a>Visualizzare le proprietà e le macro correnti

Per visualizzare le macro attualmente disponibili in qualsiasi pagina delle proprietà nella finestra di dialogo **Pagine delle proprietà** scegliere la freccia a discesa alla fine della riga di una proprietà. Se l'opzione **Modifica** è disponibile, fare clic su di essa, quindi scegliere **Macro** nella finestra di dialogo di modifica. Viene visualizzato il set corrente di proprietà e macro visibili in Visual Studio insieme al valore corrente di ciascuna. Per altre informazioni, vedere la **valori Specifying** sezione [riferimento alla pagina di proprietà progetto C++](property-pages-visual-cpp.md).

## <a name="list-of-common-macros"></a>Elenco delle macro comuni

La tabella seguente descrive un subset delle macro disponibili di uso comune. L'elenco non è esaustivo. Per informazioni dettagliate su come le definizioni delle proprietà di MSBuild vengono create e usate come macro nei file PROPS, TARGETS e VCXPROJ, vedere [Proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties).

|Macro|Descrizione|
|-----------|-----------------|
|**$(Configuration)**|Nome della configurazione di progetto corrente, ad esempio "Debug".|
|**$(DevEnvDir)**|Directory di installazione di Visual Studio (definita come unità + percorso); include la barra rovesciata finale '\\'.|
|**$(FrameworkDir)**|Directory nella quale è stato installato .NET Framework.|
|**$(FrameworkSDKDir)**|Directory nella quale è stato installato .NET Framework. .NET Framework potrebbe essere stato installato come parte di Visual Studio oppure separatamente.|
|**$(FrameworkVersion)**|Versione di .NET Framework usata da Visual Studio. Combinata con **$(FrameworkDir)**, il percorso completo della versione di .NET Framework usata da Visual Studio.|
|**$(FxCopDir)**|Percorso del file fxcop.cmd. Il file fxcop.cmd non è installato in tutte le edizioni di Visual C++.|
|**$(IntDir)**|Percorso della directory specificata dei file intermedi. Se si tratta di un percorso relativo, i file intermedi vengono inviati a questo percorso aggiunti alla directory di progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Intermediate Directory** . Non usare **$(OutDir)** per definire questa proprietà.|
|**$(OutDir)**|Percorso della directory dei file di output. Se si tratta di un percorso relativo, i file di output vengono inviati a questo percorso aggiunti alla directory di progetto. Questo percorso deve includere una barra finale. Si risolve nel valore della proprietà **Output Directory** . Non usare **$(IntDir)** per definire questa proprietà.|
|**$(Platform)**|Nome della piattaforma del progetto corrente, ad esempio "Win32".|
|**$(ProjectDir)**|Directory del progetto (definita come unità + percorso); include la barra rovesciata finale "\\".|
|**$(ProjectExt)**|Estensione di file del progetto. È incluso il punto '.' prima dell'estensione.|
|**$(ProjectFileName)**|Nome file del progetto (definito da nome di base + estensione di file).|
|**$(ProjectName)**|Nome base del progetto.|
|**$(ProjectPath)**|Nome del percorso assoluto del progetto (definito da unità + percorso + nome di base + estensione di file).|
|**$(RemoteMachine)**|Impostare sul valore della proprietà **Remote Machine** nella pagina delle proprietà Debug. Per altre informazioni, vedere [Modifica delle impostazioni del progetto per una configurazione di debug C/C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration) .|
|**$(RootNameSpace)**|Eventuale spazio dei nomi contenente l'applicazione.|
|**$(SolutionDir)**|Directory della soluzione (definita come unità + percorso); include la barra rovesciata finale "\\". Definita solo quando si compila una soluzione nell'IDE.|
|**$(SolutionExt)**|Estensione di file della soluzione. È incluso il punto '.' prima dell'estensione. Definita solo quando si compila una soluzione nell'IDE.|
|**$(SolutionFileName)**|Nome file della soluzione (definito da nome di base + estensione di file). Definita solo quando si compila una soluzione nell'IDE.|
|**$(SolutionName)**|Nome base della soluzione. Definita solo quando si compila una soluzione nell'IDE.|
|**$(SolutionPath)**|Nome del percorso assoluto della soluzione (definito da unità + percorso + nome di base + estensione di file). Definita solo quando si compila una soluzione nell'IDE.|
|**$(TargetDir)**|Directory del file di output principale per la compilazione (definita come unità + percorso). Include la barra rovesciata "\\" finale.|
|**$(TargetExt)**|Estensione di file del file di output principale per la compilazione. È incluso il punto '.' prima dell'estensione.|
|**$(TargetFileName)**|Nome file del file di output principale per la compilazione (definito da nome di base + estensione di file).|
|**$(TargetName)**|Nome di base del file di output principale per la compilazione.|
|**$(TargetPath)**|Nome del percorso assoluto del file di output principale per la compilazione (definito come unità + percorso + nome di base + estensione di file).|
|**$(VCInstallDir)**|Directory che contiene il contenuto C++ dell'installazione di Visual Studio. Questa proprietà contiene la versione del set di strumenti Visual C++ di destinazione che potrebbe essere diversa dalla versione dell'host di Visual Studio. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v140`, **$(VCInstallDir)** contiene il percorso dell'installazione di Visual C++ 2015.|
|**$(VSInstallDir)**|Directory nella quale è stato installato Visual Studio. Questa proprietà contiene la versione del set di strumenti Visual Studio di destinazione che potrebbe essere diversa dalla versione dell'host di Visual Studio. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v110`, **$(VSInstallDir)** contiene il percorso dell'installazione di Visual Studio 2012.|
|**$(WebDeployPath)**|Percorso relativo dalla radice di distribuzione Web alla posizione degli output del progetto. Restituisce lo stesso valore di <xref:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath%2A>.|
|**$(WebDeployRoot)**|Percorso assoluto della posizione di **\<localhost>**. Ad esempio, c:\inetpub\wwwroot.|

## <a name="obsolete-macros"></a>Macro obsolete

Il sistema di compilazione per C++ è stato modificato in modo significativo dalla versione Visual Studio 2008 alla versione Visual Studio 2010. Numerose macro usate nei tipi di progetto precedenti sono state sostituite da nuove macro. Queste macro non vengono più usate o sono state sostituite da una o più proprietà equivalenti o valori di [macro di metadati di elementi](/visualstudio/msbuild/itemmetadata-element-msbuild) (**%(**_nome_**)**). Le macro contrassegnate con "Migrazione eseguita" possono essere aggiornate tramite lo strumento di migrazione del progetto. Se per il progetto che contiene la macro viene eseguita la migrazione da Visual Studio 2008 o versioni precedenti a Visual Studio 2010, Visual Studio converte la macro nella macro corrente equivalente. Le versioni più recenti di Visual Studio non eseguono la conversione dei progetti di Visual Studio 2008 e versioni precedenti nel nuovo tipo di progetto. È necessario convertire i progetti eseguendo due passaggi: eseguire prima la conversione in Visual Studio 2010 e quindi convertire il risultato nella versione più recente di Visual Studio. Per altre informazioni, vedere la [panoramica sui potenziali problemi di aggiornamento](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md).

|Macro|Descrizione|
|-----------|-----------------|
|**$(InputDir)**|(Migrazione eseguita). Directory del file di input (definita come unità + percorso); include la barra rovesciata finale "\\". Se il progetto costituisce l'input, questa macro equivale a **$(ProjectDir)**.|
|**$(InputExt)**|(Migrazione eseguita). Estensione di file del file di input. È incluso il punto '.' prima dell'estensione. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectExt)**. Per i file di origine, **%(Extension)**.|
|**$(InputFileName)**|(Migrazione eseguita). Nome file del file di input (definito da nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectFileName)**. Per i file di origine, **%(Identity)**.|
|**$(InputName)**|(Migrazione eseguita). Nome base del file di input. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectName)**. Per i file di origine, **%(Filename)**.|
|**$(InputPath)**|(Migrazione eseguita). Nome del percorso assoluto del file di input (definito da unità + percorso + nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectPath)**. Per i file di origine, **%(FullPath)**.|
|**$(ParentName)**|Nome dell'elemento contenente questo elemento del progetto. Sarà il nome della cartella padre o il nome del progetto.|
|**$(SafeInputName)**|Nome file come nome di classe valido, meno l'estensione di file. Per questa proprietà non è disponibile un equivalente esatto.|
|**$(SafeParentName)**|Nome del padre diretto in un formato di nome valido. Ad esempio, un modulo è l'elemento padre di un file RESX. Per questa proprietà non è disponibile un equivalente esatto.|
|**$(SafeRootNamespace)**|Nome dello spazio dei nomi in cui le creazioni guidate progetto aggiungono il codice. Questo spazio dei nomi contiene solo caratteri che sarebbero consentiti in un identificatore C++ valido. Per questa proprietà non è disponibile un equivalente esatto.|

## <a name="see-also"></a>Vedere anche

- [Progetti di Visual Studio - C++](../creating-and-managing-visual-cpp-projects.md)
- [Guida al porting e aggiornamento in Visual C++](../../porting/visual-cpp-porting-and-upgrading-guide.md)
- [Panoramica dei potenziali problemi di aggiornamento](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md)
