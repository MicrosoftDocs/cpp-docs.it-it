---
title: "Cenni preliminari su MSBuild (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MSBuild (panoramica)"
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Cenni preliminari su MSBuild (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MSBuild è lo standard di sistema di compilazione per progetti Visual C++. Quando si compila un progetto nell'ambiente di sviluppo integrato (IDE) di Visual Studio, utilizza lo strumento msbuild.exe, un file di progetto basato su XML e file di impostazioni facoltative. Sebbene sia possibile utilizzare msbuild.exe e un file di progetto nella riga di comando, l'IDE fornisce un'interfaccia utente in modo che è possibile configurare le impostazioni e compila un progetto più facilmente. In questa panoramica viene descritto come Visual C++ utilizza il sistema MSBuild.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Leggere i documenti seguenti relativi a MSBuild.  
  
 [MSBuild](MSBuild1.md)  
 Panoramica dei concetti di MSBuild.  
  
 [Riferimenti di MSBuild](../Topic/MSBuild%20Reference.md)  
 Informazioni di riferimento sul sistema MSBuild.  
  
 [Riferimenti dello Schema di File di progetto](../Topic/MSBuild%20Project%20File%20Schema%20Reference.md)  
 Elenca gli elementi dello Schema XML di MSBuild, insieme ai relativi attributi ed elementi padre e figlio. Notare il [ItemGroup](../Topic/ItemGroup%20Element%20\(MSBuild\).md), [PropertyGroup](../Topic/PropertyGroup%20Element%20\(MSBuild\).md), [destinazione](../Topic/Target%20Element%20\(MSBuild\).md), e [attività](../Topic/Task%20Element%20\(MSBuild\).md) elementi.  
  
 [Riferimento della riga di comando](../Topic/MSBuild%20Command-Line%20Reference.md)  
 Vengono descritti gli argomenti della riga di comando e le opzioni che è possibile utilizzare con msbuild.exe.  
  
 [Riferimento di attività](../Topic/MSBuild%20Task%20Reference.md)  
 Descrive le attività MSBuild. Notare in particolare queste attività, che sono specifiche di Visual C++: [attività BscMake](../Topic/BscMake%20Task.md), [attività CL](../Topic/CL%20Task.md), [attività CPPClean](../Topic/CPPClean%20Task.md), [LIB (attività)](../Topic/LIB%20Task.md), [Link (attività)](../Topic/Link%20Task.md), [MIDL (attività)](../Topic/MIDL%20Task.md), [attività MT](../Topic/MT%20Task.md), [attività RC](../Topic/RC%20Task.md), [Attività SetEnv](../Topic/SetEnv%20Task.md), [attività VCMessage](../Topic/VCMessage%20Task.md), [attività XDCMake](../Topic/XDCMake%20Task.md), [attività XSD](../Topic/XSD%20Task.md).  
  
## <a name="msbuild-on-the-command-line"></a>MSBuild dalla riga di comando  
 Nell'istruzione seguente il [da riga di comando](../Topic/MSBuild%20Command-Line%20Reference.md) documento viene illustrato che lo strumento msbuild.exe accetta un implicita o esplicita `project file` argomento (un file con estensione vcxproj per i progetti Visual C++) e zero o più della riga di comando `options`.  
  
 **msbuild.exe [** `project file` **] [** `options` **]**  
  
 Utilizzare il **/destinazione** (o **/t**) e **/property** (o **/p**) le opzioni della riga di comando per eseguire l'override di proprietà e destinazioni specificate nel file di progetto.  
  
 È una funzione essenziale del file di progetto per specificare un *destinazione*, ovvero una determinata operazione applicata al progetto e gli input e output che sono necessari per eseguire tale operazione. Un file di progetto è possibile specificare uno o più destinazioni, che possono includere una destinazione predefinita.  
  
 Ogni destinazione è costituita da una sequenza di uno o più *attività*. Ogni attività sono rappresentata da una classe .NET Framework che contiene un comando eseguibile. Ad esempio, il [attività CL](../Topic/CL%20Task.md) contiene il [cl.exe](../build/reference/compiling-a-c-cpp-program.md) comando.  
  
 Oggetto *parametro dell'attività* è una proprietà dell'attività della classe e in genere rappresenta un'opzione della riga di comando del comando eseguibile. Ad esempio, il `FavorSizeOrSpeed` parametro il `CL` attività corrisponde al **/Os** e **/Ot** Opzioni del compilatore.  
  
 Parametri dell'attività aggiuntivi supportano l'infrastruttura di MSBuild. Ad esempio, il `Sources` parametro dell'attività specifica un set di attività che possono essere utilizzati da altre attività. Per ulteriori informazioni sulle attività di MSBuild, vedere [riferimenti alle attività](../Topic/MSBuild%20Task%20Reference.md).  
  
 La maggior parte delle attività richiedono input e output, ad esempio i nomi di file, percorsi e stringa, numerici o booleani parametri. Ad esempio, un input comune è il nome di un file di origine con estensione cpp da compilare. Un importante parametro di input è una stringa che specifica la configurazione della build e piattaforma, ad esempio, "Debug &#124; Win32 ". Input e output sono specificati da uno o più XML definiti dall'utente `Item` gli elementi contenuti in un `ItemGroup` elemento.  
  
 Inoltre possibile specificare un file di progetto definita dall'utente *proprietà* e *gruppo di definizioni**elementi*. Proprietà e gli elementi formano coppie nome/valore che possono essere utilizzate come variabili di compilazione. Definisce il componente del nome di una coppia di un *macro*, e il componente di valore dichiara il *valore macro*. Una macro di proprietà si accede usando $(*nome*) notazione e una macro di elemento avviene utilizzando %(*nome*) notazione.  
  
 Gli altri elementi XML in un file di progetto possono testare le macro, quindi in modo condizionale impostare il valore della macro o controllare l'esecuzione della compilazione. I nomi delle macro e alle stringhe letterali possono essere concatenate per generare costrutti, ad esempio un percorso e nome file. Nella riga di comando, il **/property** opzione Imposta o esegue l'override di una proprietà del progetto. Impossibile fare riferimento a elementi nella riga di comando.  
  
 Il sistema MSBuild può eseguire in modo condizionale una destinazione prima o dopo un'altra destinazione. Inoltre, il sistema può compilare una destinazione seconda se i file che utilizza la destinazione sono più recenti rispetto ai file che viene generato.  
  
## <a name="msbuild-in-the-ide"></a>MSBuild nell'IDE  
 Quando si impostano le proprietà del progetto nell'IDE e quindi salvare il progetto, Visual C++ scrive le impostazioni di progetto per il file di progetto. Il file di progetto contiene impostazioni che sono univoche per il progetto, ma non contiene tutte le impostazioni necessarie per compilare il progetto. Il file di progetto contiene `Import` gli elementi che includono una rete di altri *i file di supporto.* I file di supporto contengono le proprietà rimanenti, destinazioni e le impostazioni necessarie per compilare il progetto.  
  
 La maggior parte delle destinazioni e le proprietà nei file di supporto sono disponibili unicamente per implementare il sistema di compilazione. Nella sezione seguente vengono illustrati alcuni utili destinazioni e le proprietà che è possibile specificare nella riga di comando di MSBuild. Per individuare più destinazioni e proprietà, esaminare i file nella directory dei file di supporto.  
  
### <a name="support-file-directories"></a>Directory dei File di supporto  
 Per impostazione predefinita, i file di supporto di Visual C++ primari si trovano nelle directory seguenti.  
  
|Directory|Descrizione|  
|---------------|-----------------|  
|*unità*: \Program Files\MSBuild\Microsoft.Cpp\v4.0\\*versione*\|Contiene i file di destinazione principale (con estensione targets) e i file delle proprietà (con estensione props) utilizzate dalle destinazioni. Per impostazione predefinita, la macro $(VCTargetsPath) fa riferimento a questa directory.|  
|*unità*: \Program Files\MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\|Contiene i file di destinazione e proprietà specifiche della piattaforma che eseguono l'override di destinazioni e le proprietà nella directory padre. Questa directory contiene anche un file con estensione dll che definisce le attività che vengono utilizzate dalle destinazioni in questa directory.<br /><br /> Il *piattaforma* rappresenta la `ARM`, `Win32`, o `x64` sottodirectory.|  
|*unità*: \Program Files\MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\|Contiene la directory che consentono la compilazione generare applicazioni Visual C++ con l'oggetto specificato *versione* del set di strumenti.<br /><br /> Il *piattaforma* rappresenta la `ARM`, `Win32`, o `x64` sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti per la creazione di applicazioni Windows, Windows XP o Windows Phone.|  
|*unità*: \Programmi\MSBuild\Microsoft.Cpp\v4.0\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\|Contiene la directory che consentono la compilazione generare 9.0 o applicazioni di Visual C++ 10.0.<br /><br /> Il *piattaforma* rappresenta la `Itanium`, `Win32`, o `x64` sottodirectory. Il *set di strumenti* rappresenta la `v90` o `v100` sottodirectory di set di strumenti.|  
  
### <a name="support-files"></a>File di supporto  
 Directory dei file di supporto contengono file con le estensioni seguenti.  
  
|Estensione|Descrizione|  
|---------------|-----------------|  
|con estensione targets|Contiene `Target` elementi XML che specificano le attività che vengono eseguite dalla destinazione. Può inoltre contenere `Property Group`, `Item Group`, `Item Definition Group`, definiti dall'utente `Item` gli elementi che vengono utilizzati per assegnare i file e le opzioni della riga di comando per i parametri dell'attività.<br /><br /> Per ulteriori informazioni, vedere [elemento Target (MSBuild)](../Topic/Target%20Element%20\(MSBuild\).md).|  
|con estensione props|Contiene `Property Group` e definite dall'utente `Property` elementi XML che specificano le impostazioni di file e sui parametri utilizzati durante la compilazione.<br /><br /> Può inoltre contenere `Item Definition Group` e definite dall'utente `Item` elementi XML che specificano impostazioni aggiuntive. Gli elementi definiti in un gruppo definizione dalle proprietà, ma non è possibile accedere dalla riga di comando. File di progetto Visual C++ utilizzano in genere elementi anziché le proprietà per rappresentare le impostazioni.<br /><br /> Per ulteriori informazioni, vedere [elemento ItemGroup (MSBuild)](../Topic/ItemGroup%20Element%20\(MSBuild\).md), [elemento ItemDefinitionGroup (MSBuild)](../Topic/ItemDefinitionGroup%20Element%20\(MSBuild\).md), e [elemento Item (MSBuild)](../Topic/Item%20Element%20\(MSBuild\).md).|  
|XML|Contiene gli elementi XML che dichiarano e inizializzare elementi dell'interfaccia utente IDE come finestre delle proprietà e pagine delle proprietà e i controlli casella di elenco e casella di testo.<br /><br /> I file con estensione XML supportano direttamente l'IDE, ma non MSBuild. Tuttavia, vengono assegnati i valori delle proprietà IDE per compilare le proprietà e gli elementi.<br /><br /> La maggior parte dei file con estensione XML sono in una sottodirectory specifica delle impostazioni locali. Ad esempio, i file per l'area inglese-Stati Uniti sono in $(VCTargetsPath) \1033\\.|  
  
## <a name="user-targets-and-properties"></a>Le proprietà e le destinazioni degli utenti  
 Per utilizzare più efficacemente MSBuild dalla riga di comando, è importante conoscere le proprietà e le destinazioni sono utili e pertinenti. La maggior parte delle proprietà e le destinazioni consentono di implementare il sistema di compilazione Visual C++ e di conseguenza non sono rilevanti per l'utente. Questa sezione descrive alcune proprietà che possono essere utili per utenti e le destinazioni.  
  
### <a name="platformtoolset-property"></a>Proprietà PlatformToolset  
 Il `PlatformToolset` proprietà determina quale set di strumenti di Visual C++ viene utilizzata nella compilazione. Il valore della proprietà viene concatenato con stringhe letterali per formare il percorso di una directory che contiene i file di proprietà e di destinazione che sono necessari per compilare un progetto per una particolare piattaforma.  
  
 Impostare il `PlatformToolset` proprietà `v110` utilizzare [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] Strumenti e librerie per compilare l'applicazione.  
  
 `msbuild myProject.vcxproj /p:PlatformToolset=v110`  
  
 Impostare il `PlatformToolset` proprietà `v100` utilizzare [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)] Strumenti e librerie per compilare l'applicazione.  
  
 `msbuild myProject.vcxproj /p:PlatformToolset=v100`  
  
 Impostare il `PlatformToolset` proprietà `v90` utilizzare librerie e strumenti di Visual C++ 2008 per compilare l'applicazione. Il set di strumenti di Visual C++ 2008 deve essere già installato nel computer per rendere effettiva questa proprietà.  
  
 `msbuild myProject.vcxproj /p:PlatformToolset=v90`  
  
### <a name="preferredtoolarchitecture-property"></a>Proprietà PreferredToolArchitecture  
 Il `PreferredToolArchitecture` proprietà determina se il compilatore a 32 bit o 64 bit e gli strumenti vengono utilizzati nella compilazione. Questa proprietà non influenza la configurazione o l'architettura della piattaforma di output. Per impostazione predefinita, MSBuild Usa il x86 versione del compilatore e di strumenti se questa proprietà non è impostata o è impostata su qualsiasi valore diverso da `x64`.  
  
 Impostare il `PreferredToolArchitecture` proprietà `x64` per utilizzare il compilatore a 64 bit e strumenti per compilare l'applicazione.  
  
 `msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`  
  
### <a name="useenv-property"></a>Proprietà UseEnv  
 Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiranno le variabili di ambiente PAH, INCLUDE, LIB, LIBPATH, CONFIGURAZIONE e PIATTAFORMA. Impostare il `UseEnv` proprietà `true` per garantire che le variabili di ambiente non sono sottoposte a override.  
  
 `msbuild myProject.vcxproj /p:UseEnv=true`  
  
### <a name="targets"></a>Destinazioni  
 Sono disponibili centinaia di destinazioni nel file di supporto di Visual C++. Tuttavia, la maggior parte sono destinazioni orientate al sistema che l'utente può essere ignorato. La maggior parte delle destinazioni di sistema sono precedute dal carattere di sottolineatura (_) o avere un nome che inizia con "PrepareFor", "Calcolo", "Before", "After", "Pre" o "Post".  
  
 Nella tabella seguente sono elencate diverse destinazioni utile orientate all'utente.  
  
|destinazione|Descrizione|  
|------------|-----------------|  
|BscMake|Esegue lo strumento Microsoft passare informazioni Maintenance Utility bscmake.exe.|  
|Compilazione|Compila il progetto.<br /><br /> Questa è la destinazione predefinita per un progetto.|  
|ClCompile|Esegue lo strumento del compilatore Visual C++, cl.exe.|  
|Pulisci|File di compilazione eliminazioni temporanee e di livello intermedie.|  
|LIB|Esegue lo strumento di gestione di librerie di Microsoft a 32 Bit, lib.exe.|  
|Collegamento|Esegue lo strumento del linker Visual C++, link.exe.|  
|ManifestResourceCompile|Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento del compilatore di risorse di Microsoft Windows, rc.exe.|  
|MIDL|Esegue lo strumento del compilatore (MIDL (Microsoft Interface Definition Language), midl.exe.|  
|Ricompila|Elimina e quindi compila il progetto.|  
|ResourceCompile|Esegue lo strumento del compilatore di risorse di Microsoft Windows, rc.exe.|  
|XdcMake|Esegue lo strumento di documentazione XML, xdcmake.exe.|  
|XSD|Esegue lo strumento XML Schema Definition, xsd.exe.|  
  
## <a name="see-also"></a>Vedere anche  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)