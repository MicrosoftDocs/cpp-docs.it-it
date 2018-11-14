---
title: Pagina delle proprietà Generale (Progetto)
ms.date: 11/04/2016
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
helpviewer_keywords:
- Clean Build option
- output files, setting directory
- Unicode, creating C++ build configuration
ms.openlocfilehash: 6f7af0f3dd9ff373a458a6f93fb78fda443bd8e9
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51520478"
---
# <a name="general-property-page-project"></a>Pagina delle proprietà Generale (Progetto)

Quando si fa clic con il pulsante destro del mouse su un nodo del progetto in Esplora soluzioni e si sceglie **Proprietà**, nella pagina delle proprietà **Generale** del nodo **Proprietà di configurazione** nel riquadro sinistro vengono visualizzate due sezioni di proprietà:

- Generale

- Impostazioni predefinite progetto

Per i progetti non Windows, vedere [Informazioni di riferimento sulla pagina delle proprietà di un progetto Linux C++](../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../linux/prop-pages-linux.md)-->.

## <a name="general"></a>Generale

Le proprietà nella sezione Generale influiscono sul percorso dei file creati nel processo di compilazione e determinano quali file eliminare quando viene selezionata l'opzione **Pulisci** (menu **Compila**).

- **Piattaforma di destinazione**

   Specifica la piattaforma su cui verrà eseguito il progetto. Ad esempio, Windows, Android o iOS. Il valore **Windows 10** indica che il progetto è destinato alla piattaforma UWP (Universal Windows Platform). Se il progetto è destinato a versioni precedenti di Windows, la versione non è elencata e il valore di questo campo indica semplicemente **Windows**. Si tratta di un campo di sola lettura che viene impostato quando si crea un progetto.

- **Versione di Windows SDK**

   Per la piattaforma di destinazione Windows, specifica la versione di Windows SDK necessaria per il progetto. Quando si installa un carico di lavoro C++ usando il programma di installazione di Visual Studio, vengono installati anche i componenti obbligatori di Windows SDK. Se nel computer sono installate altre versioni di Windows SDK, nell'elenco a discesa vengono visualizzate tutte le versioni degli strumenti di SDK installati.

   Per sviluppare il progetto per Windows 7 o Windows Vista, usare il valore **8.1**, perché Windows SDK 8.1 è compatibile con le versioni precedenti di queste piattaforme. È anche necessario definire il valore appropriato per **_WIN32_WINNT** in targetver.h. For Windows 7, il valore è 0x0601. Vedere [Modifica di WINVER e _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).

   È possibile installare il set di strumenti della piattaforma Windows XP incluso in Visual Studio per usare la versione corrente delle librerie per compilare i progetti di Windows XP e Windows 2003 Server. Per informazioni su come ottenere e usare questo set di strumenti della piattaforma, vedere [Configurazione di programmi per Windows XP](../build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).

- **Versione minima piattaforma di destinazione**

   Specifica la versione minima della piattaforma su cui può essere eseguito il progetto. Questa proprietà viene visualizzata solo se è supportata dal tipo di progetto, ad esempio in progetti universali di Windows. Se l'app può sfruttare i vantaggi delle funzionalità di una versione più recente di Windows SDK, ma può comunque essere eseguita nelle versioni precedenti senza queste funzionalità, al limite con una certa perdita di prestazioni, il valore di queste due proprietà potrebbe differire. In questo caso, il codice deve verificare la versione della piattaforma su cui viene eseguito al runtime senza tentare di usare funzionalità non disponibili in versioni precedenti della piattaforma.

   Questa opzione non viene applicata in Visual C++. L'opzione è comunque inclusa per coerenza con gli altri linguaggi, come C# e JavaScript, e come guida per chiunque usi il progetto. Visual C++ non genera un errore se si usa una funzionalità non disponibile nella versione minima.

- **Directory di output**

   Specifica la directory in cui strumenti come il linker inseriranno tutti i file di output finali creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il linker, Gestione librerie o BSCMake. Per impostazione predefinita, questa proprietà corrisponde alla directory specificata dalle macro $(SolutionDir)$(Configuration)\.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.

- **Directory intermedia**

   Specifica la directory in cui strumenti come il compilatore inseriranno tutti i file intermedi creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il compilatore C/C++, MIDL e il compilatore di risorse. Per impostazione predefinita, questa proprietà corrisponde alla directory specificata dalla macro $(Configuration)\.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.

- **Nome di destinazione**

   Specifica il nome file generato dal progetto. Per impostazione predefinita, questa proprietà corrisponde al nome file specificato dalla macro $(ProjectName).

- **Estensione di destinazione**

   Specifica l'estensione di file generata dal progetto, ad esempio exe o dll.

- **Estensioni da eliminare durante la pulitura**

   L'opzione **Pulisci** (menu **Compila**) elimina i file dalla directory intermedia quando viene compilata la configurazione di un progetto. I file con le estensioni specificate con questa proprietà verranno eliminati quando si sceglie **Pulisci** o si esegue una ricompilazione. Oltre ai file di queste estensioni presenti nella directory intermedia, il sistema di compilazione eliminerà anche tutto l'output noto della compilazione indipendentemente da dove si trova (inclusi gli output intermedi come i file con estensione obj). È possibile specificare caratteri jolly.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **File del log di compilazione**

   Permette di specificare un percorso non predefinito per il file di log creato ogni volta che si compila un progetto. Il percorso predefinito è specificato dalla macro $(IntDir)$(MSBuildProjectName).log.

   È possibile usare macro di progetto per modificare il percorso della directory. Vedere [Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).

- **Set di strumenti della piattaforma**

   Permette di destinare il progetto a una versione diversa delle librerie e del compilatore di Visual C++. I progetti di Visual C++ possono usare il set di strumenti predefinito installato da Visual Studio oppure uno dei set di strumenti installato dalle diverse versioni precedenti di Visual Studio, inclusi i set di strumenti che creano eseguibili che possono essere eseguiti in Windowx XP. Per informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).

- **Abilita compilazione incrementale gestita**

   Per i progetti gestiti, consente il rilevamento della visibilità esterna quando si generano assembly. Se una modifica a un progetto gestito non è visibile in altri progetti, i progetti dipendenti non saranno ricompilati. È così possibile migliorare considerevolmente i tempi di compilazione di soluzioni che includono progetti gestiti.

## <a name="project-defaults"></a>Impostazioni predefinite progetto

Le proprietà incluse nella sezione Impostazioni predefinite progetto rappresentano proprietà predefinite che è possibile modificare. La definizione di queste proprietà è disponibile nei file con estensione props in *Directory di installazione*\VC\VCProjectDefaults.

- **Tipo configurazione**

  È possibile scegliere tra diversi tipi di configurazione:

  - **Applicazione (.exe)**

     Visualizza il set di strumenti del linker (Compilatore C/C++, MIDL, Compilatore di risorse, Linker, BSCMake, Generatore proxy del servizio Web XML, eventi di compilazione personalizzata, pre-compilazione, pre-collegamento e post-compilazione).

  - **Libreria dinamica (.dll)**

     Visualizza il set di strumenti del linker, specifica l'opzione del linker /DLL e aggiunge _WINDLL a CL.

  - **Makefile**

     Visualizza il set di strumenti di makefile (NMake).

  - **Libreria statica (.lib)**

     Visualizza il set di strumenti Gestione librerie (uguale al set di strumenti del linker, ad eccezione dello strumento Gestione librerie sostitutivo per il linker e l'omissione di Generatore proxy del servizio Web XML).

  - **Utilità**

     Visualizza il set di strumenti delle utilità (MIDL, eventi di compilazione personalizzata, pre-compilazione e post-compilazione).

  Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.

- **Uso di MFC**

   Specifica se il progetto sarà collegato staticamente o dinamicamente alla DLL MFC. Per i progetti non MFC, è possibile selezionare **Usa librerie standard di Windows** per consentire il collegamento a diverse librerie Win32 incluse quando si usa MFC.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Uso di ATL**

   Specifica se il progetto ATL sarà collegato staticamente o dinamicamente alla DLL ATL. Se si specifica un'opzione diversa da **Senza utilizzare ATL**, verrà aggiunta una definizione alla pagina delle proprietà **Riga di comando** del compilatore.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfATL%2A>.

- **Set di caratteri**

   Definisce se deve essere impostato _UNICODE o _MBCS. Influisce anche sul punto di ingresso del linker nei casi appropriati.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Supporto Common Language Runtime**

   Determina l'uso dell'opzione del compilatore [/clr](../build/reference/clr-common-language-runtime-compilation.md).

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **Versione di .NET Framework di destinazione**

   Nei progetti gestiti specifica la versione di .NET framework di destinazione.

- **Ottimizzazione intero programma**

   Specifica l'opzione del compilatore [/GL](../build/reference/gl-whole-program-optimization.md) e l'opzione del linker [/LTCG](../build/reference/ltcg-link-time-code-generation.md). Per impostazione predefinita, questa opzione è disabilitata per le configurazioni di debug ed è abilitata per le configurazioni di versione finale.

- **Supporto app di Windows Store**

   Specifica se il progetto supporta le app di Windows Runtime (Universal Windows Platform). Per altre informazioni, vedere [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) e il Centro per sviluppatori Windows.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)