---
title: Macro comuni per i comandi e le proprietà di MSBuild
ms.date: 08/02/2019
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
- $(PlatformShortName) macro
- SolutionPath macro $(SolutionPath)
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
ms.openlocfilehash: 0de96306e645ec85562e414a96283923e93a00ad
ms.sourcegitcommit: af4ab63866ed09b5988ed53f1bb6996a54f02484
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/05/2019
ms.locfileid: "68787091"
---
# <a name="common-macros-for-msbuild-commands-and-properties"></a>Macro comuni per i comandi e le proprietà di MSBuild

A seconda delle opzioni di installazione, Visual Studio può rendere disponibili centinaia di macro in un progetto di Visual Studio (basato su MSBuild). Corrispondono alle proprietà MSBuild impostate per impostazione predefinita oppure nei file. props o. targets o nelle impostazioni del progetto. È possibile usare queste macro in qualsiasi punto della finestra di dialogo **Pagine delle proprietà** di un progetto in cui sono accettate le stringhe. Queste macro non fanno distinzione tra maiuscole e minuscole.

## <a name="view-the-current-properties-and-macros"></a>Visualizzare le proprietà e le macro correnti

Per visualizzare tutte le macro attualmente disponibili, nella finestra di dialogo **pagine delle proprietà** , in directory di **VC + +** , scegliere la freccia a discesa alla fine di una riga di proprietà. Fare clic su **modifica** e quindi nella finestra di dialogo Modifica scegliere il pulsante **macro** . Viene visualizzato il set corrente di proprietà e macro visibili in Visual Studio insieme al valore corrente di ciascuna. Per ulteriori informazioni, vedere la sezione **specifica dei valori definiti dall'utente** nel [ C++ riferimento alla pagina delle proprietà del progetto](property-pages-visual-cpp.md).

![Pulsante macro di VC + +](../media/vcppdir_libdir_macros.png "Menu macro")

## <a name="list-of-common-macros"></a>Elenco delle macro comuni

Questa tabella descrive un subset di uso comune delle macro disponibili. molti altri non sono elencati qui. Passare alla finestra di dialogo **macro** per visualizzare tutte le proprietà e i relativi valori correnti nel progetto. Per informazioni dettagliate su come le definizioni delle proprietà di MSBuild vengono create e usate come macro nei file PROPS, TARGETS e VCXPROJ, vedere [Proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties).

|Macro|DESCRIZIONE|
|-----------|-----------------|
|**$(Configuration)**|Nome della configurazione di progetto corrente, ad esempio "Debug".|
|**$(DevEnvDir)**|Directory di installazione di Visual Studio (definita come unità + percorso); include la barra rovesciata finale '\\'.|
|**$(FrameworkDir)**|Directory nella quale è stato installato .NET Framework.|
|**$(FrameworkSDKDir)**|Directory nella quale è stato installato .NET Framework. .NET Framework potrebbe essere stato installato come parte di Visual Studio oppure separatamente.|
|**$(FrameworkVersion)**|Versione di .NET Framework usata da Visual Studio. Combinata con **$(FrameworkDir)** , il percorso completo della versione di .NET Framework usata da Visual Studio.|
|**$(FxCopDir)**|Percorso del file fxcop.cmd. Il file FxCop. cmd non è installato con tutte le edizioni di Visual Studio.|
|**$(IntDir)**|Percorso della directory specificata dei file intermedi. Se si tratta di un percorso relativo, i file intermedi passano a questo percorso accodato alla directory del progetto. Questo percorso deve includere una barra finale. Viene risolto nel valore della proprietà della **directory intermedia** . Non usare **$ (OutDir)** per definire questa proprietà.|
|**$(OutDir)**|Percorso della directory dei file di output. Se si tratta di un percorso relativo, i file di output vengono inviati a questo percorso accodato alla directory del progetto. Questo percorso deve includere una barra finale. Viene risolto nel valore per la proprietà directory di **output** . Non usare **$ (IntDir)** per definire questa proprietà.|
|**$(Platform)**|Nome della piattaforma del progetto corrente, ad esempio "Win32".|
|**$ (PlatformShortName)**|Nome breve dell'architettura corrente, ad esempio "x86" o "x64".|
|**$(ProjectDir)**|Directory del progetto (definita come unità + percorso); include la barra rovesciata finale "\\".|
|**$(ProjectExt)**|Estensione di file del progetto. È incluso il punto '.' prima dell'estensione.|
|**$(ProjectFileName)**|Nome file del progetto (definito da nome di base + estensione di file).|
|**$(ProjectName)**|Nome base del progetto.|
|**$(ProjectPath)**|Nome del percorso assoluto del progetto (definito da unità + percorso + nome di base + estensione di file).|
|**$ (PublishDir)**|Percorso di output per la destinazione di pubblicazione. include la barra rovesciata finale\\''. Il valore predefinito è la cartella **app. Publish\\ $ (OutDir)** .|
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
|**$(VCInstallDir)**|Directory che contiene il contenuto C++ dell'installazione di Visual Studio. Questa proprietà contiene la versione del set di strumenti C++ Microsoft (MSVC) di destinazione, che potrebbe essere diversa da quella dell'host Visual Studio. Ad esempio, durante la compilazione `$(PlatformToolset) = v140`con, **$ (VCInstallDir)** contiene il percorso dell'installazione di Visual Studio 2015.|
|**$(VSInstallDir)**|Directory nella quale è stato installato Visual Studio. Questa proprietà contiene la versione del set di strumenti Visual Studio di destinazione che potrebbe essere diversa dalla versione dell'host di Visual Studio. Ad esempio, in caso di compilazione con `$(PlatformToolset) = v110`, **$(VSInstallDir)** contiene il percorso dell'installazione di Visual Studio 2012.|
|**$(WebDeployPath)**|Percorso relativo dalla radice di distribuzione Web alla posizione degli output del progetto. Restituisce lo stesso valore di <xref:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath%2A>.|
|**$(WebDeployRoot)**|Percorso assoluto della posizione di **\<localhost>** . Ad esempio, c:\inetpub\wwwroot.|

## <a name="obsolete-macros"></a>Macro obsolete

Il sistema di compilazione per C++ è stato modificato in modo significativo dalla versione Visual Studio 2008 alla versione Visual Studio 2010. Numerose macro usate nei tipi di progetto precedenti sono state sostituite da nuove macro. Queste macro non vengono più usate o sono state sostituite da una o più proprietà equivalenti o valori di [macro di metadati di elementi](/visualstudio/msbuild/itemmetadata-element-msbuild) ( **%(** _nome_ **)** ). Le macro contrassegnate con "Migrazione eseguita" possono essere aggiornate tramite lo strumento di migrazione del progetto. Se per il progetto che contiene la macro viene eseguita la migrazione da Visual Studio 2008 o versioni precedenti a Visual Studio 2010, Visual Studio converte la macro nella macro corrente equivalente. Le versioni più recenti di Visual Studio non eseguono la conversione dei progetti di Visual Studio 2008 e versioni precedenti nel nuovo tipo di progetto. È necessario convertire i progetti eseguendo due passaggi: eseguire prima la conversione in Visual Studio 2010 e quindi convertire il risultato nella versione più recente di Visual Studio. Per altre informazioni, vedere la [panoramica sui potenziali problemi di aggiornamento](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md).

|Macro|DESCRIZIONE|
|-----------|-----------------|
|**$(InputDir)**|(Migrazione eseguita). Directory del file di input (definita come unità + percorso); include la barra rovesciata finale "\\". Se il progetto costituisce l'input, questa macro equivale a **$(ProjectDir)** .|
|**$(InputExt)**|(Migrazione eseguita). Estensione di file del file di input. È incluso il punto '.' prima dell'estensione. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectExt)** . Per i file di origine, **%(Extension)** .|
|**$(InputFileName)**|(Migrazione eseguita). Nome file del file di input (definito da nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectFileName)** . Per i file di origine, **%(Identity)** .|
|**$(InputName)**|(Migrazione eseguita). Nome base del file di input. Se il progetto costituisce l'input, questa macro equivale a **$(ProjectName)** . Per i file di origine, **%(Filename)** .|
|**$(InputPath)**|(Migrazione eseguita). Nome del percorso assoluto del file di input (definito da unità + percorso + nome di base + estensione di file). Se il progetto costituisce l'input, questa macro equivale a **$(ProjectPath)** . Per i file di origine, **%(FullPath)** .|
|**$(ParentName)**|Nome dell'elemento contenente questo elemento del progetto. Sarà il nome della cartella padre o il nome del progetto.|
|**$(SafeInputName)**|Nome file come nome di classe valido, meno l'estensione di file. Per questa proprietà non è disponibile un equivalente esatto.|
|**$(SafeParentName)**|Nome del padre diretto in un formato di nome valido. Ad esempio, un modulo è l'elemento padre di un file RESX. Per questa proprietà non è disponibile un equivalente esatto.|
|**$(SafeRootNamespace)**|Nome dello spazio dei nomi in cui le creazioni guidate progetto aggiungono il codice. Questo spazio dei nomi contiene solo caratteri che sarebbero consentiti in un identificatore C++ valido. Per questa proprietà non è disponibile un equivalente esatto.|

## <a name="see-also"></a>Vedere anche

[Progetti di Visual Studio-C++](../creating-and-managing-visual-cpp-projects.md)\
[Guida C++ al porting e all'aggiornamento di oggetti visivi](../../porting/visual-cpp-porting-and-upgrading-guide.md)\
[Panoramica dei potenziali problemi di aggiornamento](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md)
