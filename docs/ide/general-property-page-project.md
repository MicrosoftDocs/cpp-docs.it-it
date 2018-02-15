---
title: "Pagina delle proprietà Generale (progetto) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCConfiguration.IntermediateDirectory
- VC.Project.VCConfiguration.ConfigurationType
- VC.Project.VCConfiguration.ManagedExtensions
- VC.Project.VCConfiguration.BuildBrowserInformation
- VC.Project.VCConfiguration.BuildLogFile
- VC.Project.VCConfiguration.PlatformToolset
- VC.Project.VCConfiguration.TargetName
- VC.Project.VCConfiguration.
- VC.Project.VCConfiguration.TargetExt
- VC.Project.VCConfiguration.ATLMinimizesCRunTimeLibraryUsage
- VC.Project.VCConfiguration.ReferencesPath
- VC.Project.VCConfiguration.DeleteExtensionsOnClean
- VC.Project.VCConfiguration.useOfMfc
- VC.Project.VCConfiguration.CharacterSet
- VC.Project.VCGeneralMakefileSettings.ConfigurationType
- VC.Project.VCConfiguration.OutputDirectory
- VC.Project.VCConfiguration.AppSupport
- VC.Project.VCConfiguration.ToolFiles
- VC.Project.VCConfiguration.useOfATL
dev_langs:
- C++
helpviewer_keywords:
- Clean Build option
- output files, setting directory
- Unicode, creating C++ build configuration
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 772192a4b367760e85bb1631f1ef7b50650af0c1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="general-property-page-project"></a>Pagina delle proprietà Generale (Progetto)

Quando si fare clic su un nodo progetto in Esplora soluzioni e selezionare **proprietà**, **generale** pagina delle proprietà nel **proprietà di configurazione** nodo nel riquadro sinistro vengono visualizzate due sezioni di proprietà:

- Generale

- Impostazioni predefinite progetto

Per i progetti non di Windows, vedere [riferimento alla pagina proprietà di Linux C++](../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../linux/prop-pages-linux.md)-->.

## <a name="general"></a>Generale

Le proprietà nella sezione generale influiscono sul percorso dei file che vengono creati nel processo di compilazione e determinano quali file per eliminare quando il **Pulisci** opzione (**compilare** menu) sia selezionata.

**Piattaforma di destinazione**  
Specifica la piattaforma su cui verrà eseguito il progetto. Ad esempio, Windows, Android o iOS. Il valore **Windows 10** significa che il progetto è destinato la piattaforma Windows universale. Se è destinato a versioni precedenti di Windows, la versione non è elencata e il valore di questo campo indica semplicemente **Windows**. Si tratta di un campo di sola lettura che viene impostato quando si crea un progetto.

**Versione di Windows SDK**  
Per la piattaforma di destinazione di Windows, questo valore specifica la versione del SDK di Windows che richiede il progetto. Quando si installa un carico di lavoro di C++ tramite il programma di installazione di Visual Studio, vengono installate anche le parti obbligatorie del SDK di Windows. Se si dispone di altre versioni di Windows SDK nel computer, ogni versione degli strumenti di SDK installato visualizzata nell'elenco a discesa.

Per impostare come destinazione Windows 7 o Windows Vista, utilizzare il valore **8.1**, perché Windows SDK 8.1 è compatibile con le versioni precedenti per tali piattaforme. Inoltre, è necessario definire il valore appropriato per **_WIN32_WINNT** in targetver. For Windows 7, il valore è 0x0601. Vedere [modifica di WINVER e _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).

È possibile installare il set di strumenti della piattaforma Windows XP incluso in Visual Studio per usare la versione corrente delle librerie per compilare i progetti Windows XP e Windows Server 2003. Per informazioni su come ottenere e usare questo set di strumenti della piattaforma, vedere [configurazione di programmi per Windows XP](../build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).

**Versione minima piattaforma di destinazione**  
Specifica la versione minima della piattaforma su cui può essere eseguito il progetto. Questa proprietà viene visualizzata solo se è supportata dal tipo di progetto, ad esempio in progetti universali di Windows. Se l'app può sfruttare i vantaggi delle funzionalità di una versione più recente di Windows SDK, ma può comunque essere eseguita nelle versioni precedenti senza queste funzionalità, al limite con una certa perdita di prestazioni, il valore di queste due proprietà potrebbe differire. In questo caso, il codice deve verificare la versione della piattaforma su cui viene eseguito al runtime senza tentare di usare funzionalità non disponibili in versioni precedenti della piattaforma.

Questa opzione non viene applicata in Visual C++. L'opzione è comunque inclusa per coerenza con gli altri linguaggi, come C# e JavaScript, e come guida per chiunque usi il progetto. Visual C++ non genera un errore se si usa una funzionalità non disponibile nella versione minima.

**Directory di output**  
Specifica la directory in cui strumenti come il linker inseriranno tutti i file di output finali creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il linker, Gestione librerie o BSCMake. Per impostazione predefinita, questa proprietà è la directory specificata da $ di $(SolutionDir) (configurazione) la macro \.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.

**Directory intermedia**  
Specifica la directory in cui strumenti come il compilatore inseriranno tutti i file intermedi creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il compilatore C/C++, MIDL e il compilatore di risorse. Per impostazione predefinita, questa proprietà è la directory specificata per la macro $(configurazione) \.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.

**Nome destinazione**  
Specifica il nome file generato dal progetto. Per impostazione predefinita, questa proprietà è il nome file specificato per la macro $(ProjectName).

**Estensione di destinazione**  
Specifica l'estensione di file generata dal progetto, ad esempio exe o dll.

**Estensioni da eliminare durante la pulitura**  
Il **Pulisci** opzione (**compilare** menu) Elimina i file dalla directory intermedia quando viene compilata la configurazione di un progetto. I file con le estensioni specificate con questa proprietà verranno eliminate quando si sceglie **Pulisci** o quando si esegue una ricompilazione. Oltre ai file di queste estensioni presenti nella directory intermedia, il sistema di compilazione eliminerà anche tutto l'output noto della compilazione indipendentemente da dove si trova (inclusi gli output intermedi come i file con estensione obj). È possibile specificare caratteri jolly.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

**Compilare File di Log**  
Permette di specificare un percorso non predefinito per il file di log creato ogni volta che si compila un progetto. Il percorso predefinito è specificato per la macro $(IntDir) $(MSBuildProjectName). log.

È possibile usare macro di progetto per modificare il percorso della directory. Vedere [comuni macro per comandi di compilazione e proprietà](../ide/common-macros-for-build-commands-and-properties.md).

**Set di strumenti della piattaforma**  
Permette di destinare il progetto a una versione diversa delle librerie e del compilatore di Visual C++. Progetti Visual C++ possono far riferimento a entrambi i set di strumenti predefiniti installati da Visual Studio o uno dei set di strumenti della installato dalle diverse versioni precedenti di Visual Studio, inclusi i set di strumenti che creano i file eseguibili che possono eseguire in Windowx XP. Per informazioni su come modificare il set di strumenti della piattaforma, vedere [procedura: modificare il Framework di destinazione e un set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).

**Abilita compilazione incrementale gestita**  
Per i progetti gestiti, in questo modo il rilevamento di visibilità esterna quando si generano assembly. Se una modifica a un progetto gestito non è visibile ad altri progetti, progetti dipendenti non vengono ricompilati. Ciò può migliorare notevolmente i tempi di compilazione di soluzioni che includono i progetti gestiti.

## <a name="project-defaults"></a>Impostazioni predefinite progetto

Le proprietà incluse nella sezione Impostazioni predefinite progetto rappresentano proprietà predefinite che è possibile modificare. La definizione di queste proprietà è disponibile nei file con estensione props in *Directory di installazione*\VC\VCProjectDefaults.

**Tipo di configurazione**  
È possibile scegliere tra diversi tipi di configurazione:

- **Applicazione (.exe)**, Visualizza set di strumenti del linker (compilatore C/C++, MIDL, compilatore di risorse, Linker, BSCMake, generatore Proxy del servizio Web XML, compilazione personalizzata, gli eventi di pre-compilazione, pre-collegamento e post-compilazione).

- **Libreria dinamica (. dll)**, Visualizza set di strumenti del linker, specifica l'opzione del linker /DLL e aggiunge WINDLL a CL.

- **Makefile**, Visualizza set di strumenti di makefile (NMake).

- **Libreria statica (lib)**, Visualizza set di strumenti di gestione librerie (uguale al set di strumenti del linker ad eccezione del fatto sostituire Gestione librerie per il linker e omettere generatore Proxy del servizio Web XML).

- **Utilità**, Visualizza set di strumenti di utilità (MIDL, eventi pre-compilazione e post-compilazione, di compilazione personalizzata).

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.

**Uso di MFC**  
Specifica se il progetto sarà collegato staticamente o dinamicamente alla DLL MFC. Nei progetti non MFC è possono selezionare **Usa librerie Standard di Windows** il collegamento a diverse librerie Win32 che vengono incluse quando si utilizza MFC.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

**Uso di ATL**  
Specifica se il progetto ATL sarà collegato staticamente o dinamicamente alla DLL ATL. Se si specifica un valore diverso da **senza utilizzare ATL**, verrà aggiunta al compilatore definizione **riga di comando** pagina delle proprietà.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfATL%2A>.

**Set di caratteri**  
Definisce se deve essere impostato _UNICODE o _MBCS. Influisce anche sul punto di ingresso del linker nei casi appropriati.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

**Supporto Common Language Runtime**  
Determina il [/clr](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore da utilizzare.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

**Versione .NET Framework di destinazione**  
Nei progetti gestiti, specifica la versione di .NET framework di destinazione.

**Ottimizzazione intero programma**  
Specifica il [/GL](../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore e [/LTCG](../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker. Per impostazione predefinita, questo è disabilitato per le configurazioni di Debug e abilitato per le configurazioni delle vendite al dettaglio.

**Supporto App di Windows Store**  
Specifica se il progetto supporta le app di Windows Runtime (Universal Windows Platform). Per ulteriori informazioni, vedere [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md)e il centro per sviluppatori Windows.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)  