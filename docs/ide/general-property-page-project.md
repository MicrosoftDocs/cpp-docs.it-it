---
title: "Pagina delle propriet&#224; Generale (Progetto) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCConfiguration.IntermediateDirectory"
  - "VC.Project.VCConfiguration.ConfigurationType"
  - "VC.Project.VCConfiguration.ManagedExtensions"
  - "VC.Project.VCConfiguration.BuildBrowserInformation"
  - "VC.Project.VCConfiguration.BuildLogFile"
  - "VC.Project.VCConfiguration.PlatformToolset"
  - "VC.Project.VCConfiguration.TargetName"
  - "VC.Project.VCConfiguration."
  - "VC.Project.VCConfiguration.TargetExt"
  - "VC.Project.VCConfiguration.ATLMinimizesCRunTimeLibraryUsage"
  - "VC.Project.VCConfiguration.ReferencesPath"
  - "VC.Project.VCConfiguration.DeleteExtensionsOnClean"
  - "VC.Project.VCConfiguration.useOfMfc"
  - "VC.Project.VCConfiguration.CharacterSet"
  - "VC.Project.VCGeneralMakefileSettings.ConfigurationType"
  - "VC.Project.VCConfiguration.OutputDirectory"
  - "VC.Project.VCConfiguration.AppSupport"
  - "VC.Project.VCConfiguration.ToolFiles"
  - "VC.Project.VCConfiguration.useOfATL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Pulisci (voce del menu Compila)"
  - "file di output, impostazione directory"
  - "Unicode, creazione della configurazione di compilazione C++"
ms.assetid: 593b383c-cd0f-4dcd-ad65-9ec9b4b19c45
caps.latest.revision: 30
caps.handback.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pagina delle propriet&#224; Generale (Progetto)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si fa clic con il pulsante destro del mouse su un nodo del progetto in Esplora soluzioni e si sceglie **Proprietà**, nella pagina delle proprietà **Generale** nel nodo **Proprietà di configurazione** nel riquadro sinistro vengono visualizzate due sezioni di proprietà:  
  
-   Generale  
  
-   Impostazioni predefinite progetto  
  
## Generale  
 Le proprietà nella sezione Generale influiscono sul percorso dei file creati nel processo di compilazione e determinano quali file eliminare quando viene selezionata l'opzione **Pulisci** \(menu **Compila**\).  
  
 **Target Platform**  
 Specifica la piattaforma su cui verrà eseguito il progetto. Ad esempio, Windows, Android o iOS. Il valore **Windows 10** indica che il progetto è destinato alla piattaforma UWP \(Universal Windows Platform\). Se il progetto è destinato a versioni precedenti di Windows, la versione non è elencata e il valore di questo campo indica semplicemente **Windows**. Si tratta di un campo di sola lettura che viene impostato quando si crea un progetto.  
  
 **Versione piattaforma di destinazione**  
 Per la piattaforma Windows, specifica la versione di Windows SDK con cui verrà compilato il progetto. Per Windows, si tratta della versione di Windows SDK.[!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] viene fornito con Windows SDK 8.1. Se sono stati installati gli [strumenti di sviluppo per Windows 10](http://go.microsoft.com/fwlink/p/?LinkId=617631), ogni versione di questi strumenti installati è visualizzata nell'elenco a discesa.  
  
 Per sviluppare il progetto per Windows 7 o Windows Vista, usare il valore **8.1**, perché Windows SDK 8.1 è compatibile con le versioni precedenti della piattaforma. È anche necessario definire il valore appropriato per \_WIN32\_WINNT in targetver.h. For Windows 7, il valore è 0x0601. Vedere [Modifica di WINVER e \_WIN32\_WINNT](../porting/modifying-winver-and-win32-winnt.md).  
  
 È possibile installare il set di strumenti della piattaforma v110\_xp incluso in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] per usare la versione corrente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], in modo da compilare progetti di Windows XP e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. Per informazioni su come ottenere e usare questo set di strumenti della piattaforma, vedere [Configurazione di programmi C\+\+ 11 per Windows XP](../build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: modificare il framework di destinazione e il set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).  
  
 **Versione minima piattaforma Versione**  
 Specifica la versione minima della piattaforma su cui può essere eseguito il progetto. Questa proprietà viene visualizzata solo se è supportata dal tipo di progetto, ad esempio in progetti universali di Windows. Se l'app può sfruttare i vantaggi delle funzionalità di una versione più recente di Windows SDK, ma può comunque essere eseguita nelle versioni precedenti senza queste funzionalità, al limite con una certa perdita di prestazioni, il valore di queste due proprietà potrebbe differire. In questo caso, il codice deve verificare la versione della piattaforma su cui viene eseguito al runtime senza tentare di usare funzionalità non disponibili in versioni precedenti della piattaforma.  
  
 Questa opzione non viene applicata in Visual C\+\+. L'opzione è comunque inclusa per coerenza con gli altri linguaggi, come C\# e JavaScript, e come guida per chiunque usi il progetto. Visual C\+\+ non genera un errore se si usa una funzionalità non disponibile nella versione minima.  
  
 **Directory di output**  
 Specifica la directory in cui strumenti come il linker inseriranno tutti i file di output finali creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il linker, Gestione librerie o BSCMake.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.  
  
 **Directory intermedia**  
 Specifica la directory in cui strumenti come il compilatore inseriranno tutti i file intermedi creati durante il processo di compilazione. In genere, si tratta dell'output di strumenti come il compilatore C\/C\+\+, MIDL e il compilatore di risorse.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.  
  
 **Target Name**  
 Specifica il nome file generato dal progetto.  
  
 **Estensione di destinazione**  
 Specifica l'estensione di file generata dal progetto, ad esempio exe o dll.  
  
 **Estensioni da eliminare durante la pulitura**  
 L'opzione **Pulisci** \(menu **Compila**\) elimina i file dalla directory intermedia quando viene compilata la configurazione di un progetto. I file con le estensioni specificate con questa proprietà verranno eliminate quando si sceglie **Pulisci** o si esegue una ricompilazione. Oltre ai file di queste estensioni presenti nella directory intermedia, il sistema di compilazione eliminerà anche tutto l'output noto della compilazione indipendentemente da dove si trova \(inclusi gli output intermedi come i file con estensione obj\). È possibile specificare caratteri jolly.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.  
  
 **File del log di compilazione**  
 Permette di specificare un percorso non predefinito per il file di log creato ogni volta che si compila un progetto.  
  
 È possibile usare macro di progetto per modificare il percorso della directory. Vedere [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).  
  
 **Set di strumenti della piattaforma**  
 Permette di destinare il progetto a una versione diversa delle librerie e del compilatore di Visual C\+\+. I progetti [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] possono essere destinati sia al set di strumenti predefiniti in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] \(**v100**\) o al set di strumenti che crea i file eseguibili per Windows XP.  
  
## Impostazioni predefinite progetto  
 Le proprietà incluse nella sezione Impostazioni predefinite progetto rappresentano proprietà predefinite che è possibile modificare. La definizione di queste proprietà è disponibile nei file con estensione props in *Directory di installazione*\\VC\\VCProjectDefaults.  
  
 **Tipo di configurazione**  
 È possibile scegliere tra diversi tipi di configurazione:  
  
-   **Applicazione \(.exe\)**: visualizza il set di strumenti del linker \(compilatore C\/C\+\+, MIDL, compilatore di risorse, linker, BSCMake, Generatore proxy del servizio Web XML, eventi di compilazione, pre\-compilazione, pre\-collegamento e post\-compilazione\).  
  
-   **Libreria dinamica \(.dll\)**: visualizza il set di strumenti del linker, specifica l'opzione del linker \/DLL e aggiunge \_WINDLL a CL.  
  
-   **Makefile**: visualizza il set di strumenti di makefile \(NMake\).  
  
-   **Libreria statica \(.lib\)**: visualizza il set di strumenti Gestione librerie \(uguale al set di strumenti del linker, ad eccezione dello strumento Gestione librerie sostitutivo per il linker e l'omissione di Generatore proxy del servizio Web XML\).  
  
-   **Utilità**: visualizza il set di strumenti delle utilità \(MIDL, eventi di compilazione personalizzata, pre\-compilazione e post\-compilazione\).  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.  
  
 **Uso di MFC**  
 Specifica se il progetto sarà collegato staticamente o dinamicamente alla DLL MFC. Per i progetti non MFC, è possibile selezionare **Usa librerie standard di Windows** per consentire il collegamento a diverse librerie Win32 incluse quando si usa MFC.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.  
  
 **Uso di ATL**  
 Specifica se il progetto ATL sarà collegato staticamente o dinamicamente alla DLL ATL. Se si specifica un'opzione diversa da **Senza usare ATL**, verrà aggiunta una definizione alla pagina delle proprietà **Riga di comando** del compilatore.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfATL%2A>.  
  
 **Set di caratteri**  
 Definisce se deve essere impostato \_UNICODE o \_MBCS. Influisce anche sul punto di ingresso del linker nei casi appropriati.  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.  
  
 **Supporto Common Language Runtime**  
 Determina l'uso dell'opzione del compilatore [\/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.  
  
 **Con ottimizzazione intero programma**  
 Specifica l'opzione del compilatore [\/GL](../build/reference/gl-whole-program-optimization.md) e l'opzione del linker [\/LTCG](../build/reference/ltcg-link-time-code-generation.md).  
  
 **Supporto app di Windows Store**  
 Specifica se il progetto supporta le applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]. Per altre informazioni, vedere [\/ZW \(Compilazione di Windows Runtime\)](../build/reference/zw-windows-runtime-compilation.md) e Windows Dev Center.  
  
## Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)