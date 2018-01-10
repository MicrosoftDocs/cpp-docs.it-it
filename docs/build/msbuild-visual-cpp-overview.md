---
title: Cenni preliminari su MSBuild (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: MSBuild overview
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f250443e0e5da2cf399282f19a5fde58c4c4b089
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="msbuild-visual-c-overview"></a>Cenni preliminari su MSBuild (Visual C++)  
  
MSBuild è lo standard di compilare il sistema per i progetti Visual C++. Quando si compila un progetto nell'ambiente di sviluppo integrato (IDE) di Visual Studio, utilizza lo strumento di msbuild.exe, un file di progetto basato su XML e file di impostazioni facoltative. Anche se è possibile usare msbuild.exe e un file di progetto nella riga di comando, l'IDE fornisce un'interfaccia utente in modo che è più possibile configurare le impostazioni e compila un progetto. Questa panoramica viene descritto come Visual C++ utilizza il sistema di MSBuild.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
Leggere i documenti seguenti relativi a MSBuild.  
  
- [MSBuild](/visualstudio/msbuild/msbuild)  
 Panoramica dei concetti di MSBuild.  
  
- [Riferimenti a MSBuild](/visualstudio/msbuild/msbuild-reference)  
 Informazioni di riferimento sul sistema MSBuild.  
  
- [Informazioni di riferimento sullo schema del file di progetto](/visualstudio/msbuild/msbuild-project-file-schema-reference)  
 Elenca gli elementi di Schema XML di MSBuild, insieme ai relativi attributi e gli elementi padre e figlio. Notare il [ItemGroup](/visualstudio/msbuild/itemgroup-element-msbuild), [PropertyGroup](/visualstudio/msbuild/propertygroup-element-msbuild), [destinazione](/visualstudio/msbuild/target-element-msbuild), e [attività](/visualstudio/msbuild/task-element-msbuild) elementi.  
  
- [Riferimenti alla riga di comando](/visualstudio/msbuild/msbuild-command-line-reference)  
 Descrive gli argomenti della riga di comando e opzioni che è possibile usare MSBuild.exe.  
  
- [Riferimento alle attività](/visualstudio/msbuild/msbuild-task-reference)  
 Descrive le attività MSBuild. Notare in particolare queste attività, che sono specifiche di Visual C++: [attività BscMake](/visualstudio/msbuild/bscmake-task), [attività CL](/visualstudio/msbuild/cl-task), [attività CPPClean](/visualstudio/msbuild/cppclean-task), [LIB (attività)](/visualstudio/msbuild/lib-task), [Collegare attività](/visualstudio/msbuild/link-task), [MIDL (attività)](/visualstudio/msbuild/midl-task), [attività MT](/visualstudio/msbuild/mt-task), [attività RC](/visualstudio/msbuild/rc-task), [attività SetEnv](/visualstudio/msbuild/setenv-task), [ Attività VCMessage](/visualstudio/msbuild/vcmessage-task), [attività XDCMake](/visualstudio/msbuild/xdcmake-task), [attività XSD](/visualstudio/msbuild/xsd-task).  
  
## <a name="msbuild-on-the-command-line"></a>MSBuild nella riga di comando  
  
Nell'istruzione seguente la [riferimento della riga di comando di MSBuild](/visualstudio/msbuild/msbuild-command-line-reference) viene illustrato che lo strumento di msbuild.exe accetta un implicita o esplicita *project_file* argomento (un file con estensione vcxproj per i progetti Visual C++) e zero o più della riga di comando *opzioni* argomenti.  
  
> **MSBuild.exe** [ *project_file* ] [ *opzioni* ]  
  
Utilizzare il **/destinazione** (o **/t**) e **/property** (o **/p**) le opzioni della riga di comando per eseguire l'override di proprietà specifiche e destinazioni specificato nel file di progetto.  
  
È una funzione essenziale del file di progetto per specificare un *destinazione*, ovvero una determinata operazione applicata al progetto e gli input e output che sono necessarie per eseguire tale operazione. Un file di progetto è possibile specificare uno o più destinazioni, che possono includere una destinazione predefinita.  
  
Ogni destinazione è costituita da una sequenza di uno o più *attività*. Ogni attività è rappresentata da una classe .NET Framework che contiene un comando eseguibile. Ad esempio, il [attività CL](/visualstudio/msbuild/cl-task) contiene il [cl.exe](../build/reference/compiling-a-c-cpp-program.md) comando.  
  
Oggetto *parametro attività* è una proprietà dell'attività della classe e in genere rappresenta un'opzione della riga di comando del comando eseguibile. Ad esempio, il `FavorSizeOrSpeed` parametro del `CL` attività corrisponde alla **/Os** e **/Ot** opzioni del compilatore.  
  
Parametri dell'attività aggiuntivi supportano l'infrastruttura di MSBuild. Ad esempio, il `Sources` parametro dell'attività specifica un set di attività che possono essere utilizzati da altre attività. Per ulteriori informazioni sulle attività MSBuild, vedere [riferimenti delle attività](/visualstudio/msbuild/msbuild-task-reference).  
  
La maggior parte delle attività richiedono l'input e output, ad esempio i nomi di file, percorsi e stringa, i parametri di tipo numerici o booleani. Ad esempio, un input comune è il nome di un file di origine con estensione cpp per la compilazione. Un importante parametro di input è una stringa che specifica la configurazione della build e piattaforma, ad esempio, "Debug\|Win32". Input e output sono specificati da uno o più XML definito dall'utente `Item` gli elementi contenuti in un `ItemGroup` elemento.  
  
Inoltre possibile specificare un file di progetto definita dall'utente *proprietà* e `ItemDefinitionGroup` *elementi*. Proprietà ed elementi formano coppie nome/valore che possono essere usate come variabili di compilazione. Definisce il componente del nome di una coppia di un *macro*, e il componente di valore dichiara il *valore macro*. Una macro di proprietà è accessibile usando $(*nome*) notazione e una macro di elemento avviene utilizzando %(*nome*) notazione.  
  
Gli altri elementi XML in un file di progetto possono testare le macro e quindi in modo condizionale impostare il valore della macro o controllare l'esecuzione della compilazione. I nomi e valori letterali stringa può essere concatenati per generare costrutti, ad esempio un percorso e nome file. Nella riga di comando, il **/property** opzione Imposta o esegue l'override di una proprietà del progetto. Impossibile fare riferimento a elementi nella riga di comando.  
  
Il sistema MSBuild è può eseguire in modo condizionale una destinazione prima o dopo un'altra destinazione. Inoltre, il sistema può compilare una destinazione in base che i file che utilizza la destinazione siano più recenti rispetto ai file che viene generato.  
  
## <a name="msbuild-in-the-ide"></a>MSBuild nell'IDE  
  
Quando si impostano le proprietà del progetto nell'IDE e quindi salvare il progetto, Visual C++ scrive le impostazioni del progetto al file di progetto. Il file di progetto contiene impostazioni che sono univoche per il progetto, ma non contiene tutte le impostazioni necessarie per compilare il progetto. Il file di progetto contiene `Import` gli elementi che includono una rete di altri *i file di supporto.* I file di supporto contengono le proprietà rimanenti, destinazioni e le impostazioni necessarie per compilare il progetto.  
  
La maggior parte delle destinazioni e le proprietà nei file di supporto esistono esclusivamente per implementare il sistema di compilazione. La sezione seguente illustra alcune destinazioni utili e le proprietà che è possibile specificare nella riga di comando di MSBuild. Per individuare altre destinazioni e le proprietà, esaminare i file nella directory dei file di supporto.  
  
### <a name="support-file-directories"></a>Directory dei File di supporto  
  
Per impostazione predefinita, i file di supporto di Visual C++ primari si trovano nella directory seguente. Le directory in Microsoft Visual Studio vengono utilizzate da Visual Studio 2017 e versioni successive, mentre le directory in MSBuild vengono utilizzate da Visual Studio 2015 e versioni precedenti.  
  
|Directory|Descrizione|  
|---------------|-----------------|  
|*unità*: il file \Programmi *(x86)*\Microsoft Visual Studio\\*anno*\\*edition*\Common7\IDE\VC\VCTargets\ <br /><br />*unità*: il file \Programmi *(x86)*\MSBuild\Microsoft.Cpp (x86) \v4.0\\*versione*\ |Contiene i file di destinazione primario (con estensione targets) e i file delle proprietà (con estensione props) utilizzate dalle destinazioni. Per impostazione predefinita, la macro $(VCTargetsPath) fa riferimento a questa directory.|  
|*unità*: il file \Programmi *(x86)*\Microsoft Visual Studio\\*anno*\\*edition*\Common7\IDE\VC\VCTargets\ Piattaforme\\*piattaforma*\ <br /><br />*unità*: il file \Programmi *(x86)*\MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ |Contiene i file di destinazione e proprietà specifiche della piattaforma che eseguono l'override di destinazioni e le proprietà nella directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono utilizzate dalle destinazioni in questa directory.<br /><br /> Il *piattaforma* segnaposto rappresenta lo strumento Win32 o x64 sottodirectory.|  
|*unità*: il file \Programmi *(x86)*\Microsoft Visual Studio\\*anno*\\*edition*\Common7\IDE\VC\VCTargets\ Piattaforme\\*piattaforma*\PlatformToolsets\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)*\MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ PlatformToolsets set\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)*\MSBuild\Microsoft.Cpp\v4.0\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\ |Contiene la directory che consentono la compilazione generare applicazioni Visual C++ utilizzando l'oggetto specificato *set di strumenti*.<br /><br /> Il *anno* e *edition* segnaposto vengono utilizzati da Visual Studio 2017 e versioni successive. Il *versione* segnaposto è V110 per Visual Studio 2012, V120 per Visual Studio 2013 o V140 per Visual Studio 2015. Il *piattaforma* segnaposto rappresenta lo strumento Win32 o x64 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti, ad esempio, v140 per la compilazione di App di Windows utilizzando il set di strumenti di Visual Studio 2015, v120_xp da compilare per Windows XP utilizzando il set di strumenti di Visual Studio 2013 o v110_wp80 per compilare le app di Windows Phone 8.0 tramite il set di strumenti di Visual Studio 2012.<br /><br />Il percorso che contiene la directory che consentono la compilazione generare applicazioni Visual C++ 2008 o Visual C++ 2010 non include il *versione*e *piattaforma* segnaposto rappresenta x64, Itanium o Win32 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory di set di strumenti v90 o v100.|  
  
### <a name="support-files"></a>File di supporto  
  
Directory dei file di supporto contiene i file con queste estensioni:  
  
|Estensione|Descrizione|  
|---------------|-----------------|  
|con estensione targets|Contiene `Target` elementi XML che specificano le attività eseguite dalla destinazione. Può inoltre contenere `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup`, definiti dall'utente `Item` gli elementi che vengono utilizzati per assegnare i file e le opzioni della riga di comando per i parametri dell'attività.<br /><br /> Per ulteriori informazioni, vedere [elemento Target (MSBuild)](/visualstudio/msbuild/target-element-msbuild).|  
|con estensione props|Contiene `Property Group` definiti dall'utente `Property` elementi XML che specificano le impostazioni di file e i parametri utilizzati durante una compilazione.<br /><br /> Può inoltre contenere `ItemDefinitionGroup` definiti dall'utente `Item` elementi XML che specificano impostazioni aggiuntive. Gli elementi definiti in un gruppo di definizione di elementi simili a proprietà, ma non è possibile accedere dalla riga di comando. File di progetto Visual C++ utilizza spesso elementi anziché le proprietà per rappresentare le impostazioni.<br /><br /> Per ulteriori informazioni, vedere [elemento ItemGroup (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), [elemento ItemDefinitionGroup (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild), e [elemento Item (MSBuild)](/visualstudio/msbuild/item-element-msbuild).|  
|file con estensione XML|Contiene gli elementi XML che è necessario dichiarano e inizializzare elementi dell'interfaccia utente IDE, ad esempio finestre delle proprietà e pagine delle proprietà e i controlli casella di elenco e casella di testo.<br /><br /> I file con estensione XML supportano direttamente l'IDE, ma non MSBuild. Tuttavia, per compilare le proprietà e gli elementi assegnati i valori delle proprietà IDE.<br /><br /> La maggior parte dei file con estensione XML sono in una sottodirectory specifica delle impostazioni locali. Ad esempio, i file per l'area inglese-Stati Uniti sono in $(VCTargetsPath) \1033\\.|  
  
## <a name="user-targets-and-properties"></a>Le proprietà e le destinazioni di utente  
  
Per utilizzare più efficacemente MSBuild nella riga di comando, è utile per conoscere le proprietà e le destinazioni sono utili e pertinenti. La maggior parte delle proprietà e le destinazioni consentono di implementare il sistema di compilazione di Visual C++ e di conseguenza non sono rilevanti per l'utente. Questa sezione descrive alcuni utile orientate all'utente le proprietà e destinazioni.  

### <a name="platformtoolset-property"></a>Proprietà PlatformToolset  
  
Il `PlatformToolset` proprietà determina quale set di strumenti di Visual C++ viene utilizzata per la compilazione. Per impostazione predefinita, viene utilizzato il set di strumenti corrente. Quando questa proprietà è impostata, il valore della proprietà viene concatenato con le stringhe letterali per formare il percorso di una directory che contiene i file di proprietà e di destinazione che sono necessarie per compilare un progetto per una determinata piattaforma. Per compilare con tale versione del set di strumenti della piattaforma, è necessario installare il set di strumenti della piattaforma.  
  
Ad esempio, impostare il `PlatformToolset` proprietà `v140` utilizzare gli strumenti di Visual C++ 2015 e librerie per compilare l'applicazione:  
  
`msbuild myProject.vcxproj /p:PlatformToolset=v140`  
  
### <a name="preferredtoolarchitecture-property"></a>Proprietà PreferredToolArchitecture  
  
Il `PreferredToolArchitecture` proprietà determina se il compilatore a 32 o 64 bit e gli strumenti vengono utilizzati nella compilazione. Questa proprietà non interessano la configurazione o l'architettura della piattaforma di output. Per impostazione predefinita, MSBuild Usa x86 versione del compilatore e degli strumenti se questa proprietà non è impostata.  
  
Ad esempio, impostare il `PreferredToolArchitecture` proprietà `x64` per utilizzare gli strumenti e il compilatore a 64 bit per compilare l'applicazione:  
  
`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`  
  
### <a name="useenv-property"></a>Proprietà UseEnv  
  
Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiranno le variabili di ambiente PATH, INCLUDE, LIB, LIBPATH, configurazione e piattaforma. Impostare il `UseEnv` proprietà `true` per garantire che le variabili di ambiente non vengono sottoposti a override.  
  
`msbuild myProject.vcxproj /p:UseEnv=true`  
  
### <a name="targets"></a>Destinazioni  
  
Sono disponibili centinaia di destinazioni nei file di supporto di Visual C++. Tuttavia, la maggior parte sono destinazioni orientata ai servizi di sistema che è possibile ignorare l'utente. La maggior parte delle destinazioni di sistema sono precedute da un carattere di sottolineatura (_) o avere un nome che inizia con "PrepareFor", "Calcolo", "Before", "Dopo", "Precedente" o "Post".  
  
Nella tabella seguente sono elencate diverse destinazioni utili per utenti.  
  
|destinazione|Descrizione|  
|------------|-----------------|  
|BscMake|Esegue lo strumento Microsoft Browse Information Maintenance Utility, bscmake.exe.|  
|Compilazione|Compila il progetto.<br /><br /> Questa è la destinazione predefinita per un progetto.|  
|ClCompile|Esegue lo strumento compilatore di Visual C++, cl.exe.|  
|Pulisci|File di compilazione eliminazioni temporanee e di livello intermedie.|  
|Lib|Esegue lo strumento Gestione librerie Microsoft a 32 Bit, lib.exe.|  
|Collegamento|Esegue lo strumento linker Visual C++, link.exe.|  
|ManifestResourceCompile|Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|  
|MIDL|Esegue lo strumento del compilatore (MIDL (Microsoft Interface Definition Language), midl.exe.|  
|Rebuild|Pulisce e quindi compila il progetto.|  
|ResourceCompile|Esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|  
|XdcMake|Esegue lo strumento di documentazione XML, xdcmake.exe.|  
|XSD|Esegue lo strumento XML Schema Definition, xsd.exe.|  
  
## <a name="see-also"></a>Vedere anche  
  
[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)
