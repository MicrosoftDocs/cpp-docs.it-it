---
title: Cenni preliminari su MSBuild (Visual C++)
ms.date: 11/04/2016
helpviewer_keywords:
- MSBuild overview
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
ms.openlocfilehash: 0eac756824b3da6352c60ec69e9d6e679732522c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484799"
---
# <a name="msbuild-visual-c-overview"></a>Cenni preliminari su MSBuild (Visual C++)

MSBuild è lo standard di sistema di compilazione per progetti Visual C++. Quando si compila un progetto nell'ambiente di sviluppo integrato (IDE) di Visual Studio, Usa lo strumento msbuild.exe, un file di progetto basato su XML e file di impostazioni facoltativi. Anche se è possibile usare msbuild.exe e un file di progetto nella riga di comando, l'IDE fornisce un'interfaccia utente in modo da poter più facilmente configurare le impostazioni e compila un progetto. Questa panoramica viene descritto come Visual C++ Usa il sistema MSBuild.

## <a name="prerequisites"></a>Prerequisiti

Leggere i documenti seguenti relativi a MSBuild.

- [MSBuild](/visualstudio/msbuild/msbuild) concetti relativi a Panoramica di MSBuild.

- [Riferimenti a MSBuild](/visualstudio/msbuild/msbuild-reference) fanno riferimento a informazioni sul sistema MSBuild.

- [Riferimenti allo Schema dei File di progetto](/visualstudio/msbuild/msbuild-project-file-schema-reference) Elenca gli elementi di XML Schema di MSBuild, insieme ai relativi attributi ed elementi padre e figlio. Si noti in particolare il [ItemGroup](/visualstudio/msbuild/itemgroup-element-msbuild), [PropertyGroup](/visualstudio/msbuild/propertygroup-element-msbuild), [destinazione](/visualstudio/msbuild/target-element-msbuild), e [attività](/visualstudio/msbuild/task-element-msbuild) elementi.

- [Riferimento della riga di comando](/visualstudio/msbuild/msbuild-command-line-reference) descrive gli argomenti della riga di comando e opzioni che è possibile usare MSBuild.exe.

- [Riferimento di attività](/visualstudio/msbuild/msbuild-task-reference) MSBuild vengono descritte le attività. Si noti in particolare di queste attività, che sono specifiche di Visual C++: [attività di BscMake](/visualstudio/msbuild/bscmake-task), [attività CL](/visualstudio/msbuild/cl-task), [attività CPPClean](/visualstudio/msbuild/cppclean-task), [attività LIB](/visualstudio/msbuild/lib-task), [Collegare attività](/visualstudio/msbuild/link-task), [attività MIDL](/visualstudio/msbuild/midl-task), [attività MT](/visualstudio/msbuild/mt-task), [attività RC](/visualstudio/msbuild/rc-task), [attività SetEnv](/visualstudio/msbuild/setenv-task), [ Attività VCMessage](/visualstudio/msbuild/vcmessage-task), [attività XDCMake](/visualstudio/msbuild/xdcmake-task), [attività XSD](/visualstudio/msbuild/xsd-task).

## <a name="msbuild-on-the-command-line"></a>MSBuild dalla riga di comando

Nell'istruzione seguente la [riferimenti alla riga di comando di MSBuild](/visualstudio/msbuild/msbuild-command-line-reference) viene illustrato che lo strumento msbuild.exe accetta un implicita o esplicita *project_file* argomento (un file con estensione vcxproj per i progetti Visual C++) e zero o più della riga di comando *opzioni* argomenti.

> **MSBuild.exe** [ *project_file* ] [ *opzioni* ]

Usare la **/target** (o **/t**) e **/property** (o **/p**) le opzioni della riga di comando per eseguire l'override di proprietà specifiche e le destinazioni che vengono specificato nel file di progetto.

Una funzione essenziale del file di progetto consiste nello specificare un *destinazione*, ovvero una determinata operazione applicata al progetto e gli input e output necessari per eseguire tale operazione. Un file di progetto è possibile specificare uno o più destinazioni, che possono includere una destinazione predefinita.

Ogni destinazione è costituita da una sequenza di uno o più *attività*. Ogni attività sono rappresentata da una classe .NET Framework che contiene un comando eseguibile. Ad esempio, il [attività CL](/visualstudio/msbuild/cl-task) contiene il [cl.exe](../build/reference/compiling-a-c-cpp-program.md) comando.

Oggetto *parametri dell'attività* è una proprietà dell'attività della classe e in genere rappresenta un'opzione della riga di comando del comando eseguibile. Ad esempio, il `FavorSizeOrSpeed` parametro del `CL` attività corrisponde alla **/Os** e **/Ot** opzioni del compilatore.

Parametri dell'attività aggiuntivi supportano l'infrastruttura MSBuild. Ad esempio, il `Sources` parametri dell'attività specifica un set di attività che possono essere utilizzate da altre attività. Per altre informazioni sulle attività di MSBuild, vedere [riferimenti delle attività](/visualstudio/msbuild/msbuild-task-reference).

La maggior parte delle attività richiede input e output, ad esempio i nomi di file, percorsi e stringa, numerici o booleani parametri. Ad esempio, un input comune è il nome di un file di origine con estensione cpp da compilare. Un parametro di input importante è una stringa che specifica la configurazione della build e la piattaforma, ad esempio, "Debug\|Win32". Input e output sono specificati da uno o più XML definiti dall'utente `Item` gli elementi contenuti in un `ItemGroup` elemento.

Inoltre possibile specificare un file di progetto definita dall'utente *delle proprietà* e `ItemDefinitionGroup` *elementi*. Proprietà e gli elementi formano coppie nome/valore che possono essere utilizzate come variabili nella compilazione. Definisce il componente del nome di una coppia di un *macro*, e il componente di valore dichiara le *valore della macro*. Una macro di proprietà si accede usando $(*name*) la notazione e una macro di elemento avviene tramite %(*nome*) notation.

Gli altri elementi XML in un file di progetto possono testare le macro e quindi in modo condizionale impostare il valore di qualsiasi macro o controllare l'esecuzione della compilazione. I nomi delle macro e stringhe letterali possono essere concatenate per generare costrutti come un percorso e nome file. Nella riga di comando, il **/property** opzione Imposta o esegue l'override di una proprietà del progetto. Gli elementi non è possibile fare riferimento nella riga di comando.

Il sistema MSBuild può eseguire in modo condizionale una destinazione prima o dopo un'altra destinazione. Inoltre, il sistema può compilare una destinazione seconda se i file che utilizza la destinazione sono meno recenti di quelli che viene generato.

## <a name="msbuild-in-the-ide"></a>MSBuild nell'IDE

Quando si impostano le proprietà del progetto nell'IDE e quindi salvare il progetto, Visual C++ scrive le impostazioni del progetto al file di progetto. Il file di progetto contiene impostazioni che sono univoche per il progetto, ma non contiene tutte le impostazioni necessarie per compilare il progetto. Contiene il file di progetto `Import` gli elementi che includono una rete di altri *i file di supporto.* I file di supporto contengono le proprietà rimanenti, destinazioni e le impostazioni necessarie per compilare il progetto.

La maggior parte delle destinazioni e proprietà nei file di supporto esistono esclusivamente allo scopo di implementare il sistema di compilazione. La sezione seguente vengono illustrate alcune proprietà che è possibile specificare nella riga di comando MSBuild e destinazioni utili. Per individuare più destinazioni e proprietà, esaminare i file nelle directory dei file di supporto.

### <a name="support-file-directories"></a>Directory dei File di supporto

Per impostazione predefinita, i file di supporto di Visual C++ primari si trovano nelle seguenti directory. Le directory in Microsoft Visual Studio vengono usate da Visual Studio 2017 e versioni successive, mentre le directory in MSBuild sono usate da Visual Studio 2015 e versioni precedenti.

|Directory|Descrizione|
|---------------|-----------------|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp (x86) \v4.0\\*versione*\ |Contiene i file di destinazione primario (con estensione targets) e i file di proprietà (con estensione props) vengono utilizzati dalle destinazioni. Per impostazione predefinita, la macro VCTargetsPath fa riferimento a questa directory.|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ Piattaforme\\*piattaforma*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ |Contiene i file di destinazione e proprietà specifiche della piattaforma che eseguono l'override di destinazioni e proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono utilizzate dalle destinazioni in questa directory.<br /><br /> Il *piattaforma* segnaposto rappresenta il ARM, Win32 o x64 sottodirectory.|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ Piattaforme\\*platform*\PlatformToolsets\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ PlatformToolsets set\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\Platforms\\*platform*\PlatformToolsets\\*set di strumenti*\ |Contiene le directory che consentono la compilazione generare le applicazioni Visual C++ tramite l'oggetto specificato *set di strumenti*.<br /><br /> Il *anno* e *edition* segnaposto vengono utilizzati da Visual Studio 2017 e versioni successive. Il *versione* segnaposto è V110 per Visual Studio 2012, V120 per Visual Studio 2013 o V140 per Visual Studio 2015. Il *piattaforma* segnaposto rappresenta il ARM, Win32 o x64 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti, ad esempio, v140 per la creazione di App di Windows usando il set di strumenti di Visual Studio 2015, v120_xp per creare applicazioni per Windows XP con il set di strumenti di Visual Studio 2013 o v110_wp80 per compilare app di Windows Phone 8.0 con il set di strumenti di Visual Studio 2012.<br /><br />Il percorso che contiene le directory che consentono la compilazione di applicazioni Visual C++ 2008 o Visual C++ 2010 non include il *versione*e il *piattaforma* segnaposto rappresenta Win32, Itanium o x64 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti v90 o v100.|

### <a name="support-files"></a>File di supporto

Directory dei file di supporto contengono file con queste estensioni:

|Estensione|Descrizione|
|---------------|-----------------|
|con estensione targets|Contiene `Target` elementi XML che specificano le attività eseguite dalla destinazione. Può inoltre contenere `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup`e definiti dall'utente `Item` gli elementi che consentono di assegnare ai parametri dell'attività file e le opzioni della riga di comando.<br /><br /> Per altre informazioni, vedere [elemento Target (MSBuild)](/visualstudio/msbuild/target-element-msbuild).|
|con estensione props|Contiene `Property Group` definiti dall'utente `Property` elementi XML che specificano le impostazioni di file e sui parametri utilizzati durante una compilazione.<br /><br /> Può inoltre contenere `ItemDefinitionGroup` definiti dall'utente `Item` elementi XML che specificano le impostazioni aggiuntive. Gli elementi definiti in un gruppo di definizioni di elemento sono simili a proprietà, ma non è possibile accedere dalla riga di comando. File di progetto Visual C++ utilizzano spesso gli elementi anziché le proprietà per rappresentare le impostazioni.<br /><br /> Per altre informazioni, vedere [elemento ItemGroup (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), [elemento ItemDefinitionGroup (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild), e [elemento Item (MSBuild)](/visualstudio/msbuild/item-element-msbuild).|
|. Xml|Contiene elementi XML che dichiarano e inizializzano elementi dell'interfaccia utente IDE quali le finestre delle proprietà e pagine delle proprietà e controlli casella di testo casella ed elenco.<br /><br /> I file con estensione XML supportano direttamente l'IDE, ma non MSBuild. Tuttavia, i valori delle proprietà IDE vengono assegnati alla proprietà e gli elementi di compilazione.<br /><br /> La maggior parte dei file. XML si trovano in una sottodirectory specifiche delle impostazioni locali. Ad esempio, i file per la regione inglese-Stati Uniti sono in $(VCTargetsPath) \1033\\.|

## <a name="user-targets-and-properties"></a>Proprietà e destinazioni utente

Per usare MSBuild in modo più efficace dalla riga di comando, è importante conoscere quali proprietà e destinazioni sono utili e pertinenti. La maggior parte delle proprietà e destinazioni consentono di implementare il sistema di compilazione Visual C++ e di conseguenza non sono rilevanti per l'utente. In questa sezione descrive alcune proprietà possono essere utili orientate all'utente e le destinazioni.

### <a name="platformtoolset-property"></a>Proprietà PlatformToolset

Il `PlatformToolset` proprietà determina quale set di strumenti di Visual C++ utilizzato nella compilazione. Per impostazione predefinita, viene utilizzato il set di strumenti corrente. Quando questa proprietà è impostata, il valore della proprietà viene concatenato a stringhe letterali per formare il percorso della directory che contiene i file di proprietà e di destinazione che sono necessari per compilare un progetto per una particolare piattaforma. Il set di strumenti della piattaforma deve essere installato per compilare con tale versione di strumenti della piattaforma.

Ad esempio, impostare il `PlatformToolset` proprietà `v140` usare librerie e strumenti di Visual C++ 2015 per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### <a name="preferredtoolarchitecture-property"></a>Proprietà PreferredToolArchitecture

Il `PreferredToolArchitecture` proprietà determina se gli strumenti e compilatore a 32 o 64 bit vengono utilizzati nella compilazione. Questa proprietà non influenza l'architettura della piattaforma di output o la configurazione. Per impostazione predefinita, MSBuild Usa x86 versione del compilatore e degli strumenti se questa proprietà non è impostata.

Ad esempio, impostare il `PreferredToolArchitecture` proprietà `x64` usare gli strumenti e compilatore a 64 bit per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="useenv-property"></a>Proprietà UseEnv

Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiranno le variabili di ambiente PATH, INCLUDE, LIB, LIBPATH, configurazione e piattaforma. Impostare il `UseEnv` proprietà **true** per garantire che le variabili di ambiente non vengono sottoposte a override.

`msbuild myProject.vcxproj /p:UseEnv=true`

### <a name="targets"></a>Destinazioni

Sono disponibili centinaia di destinazioni nel file di supporto di Visual C++. Tuttavia, la maggior parte sono destinazioni orientate al sistema che l'utente può essere ignorato. La maggior parte delle destinazioni del sistema sono precedute dal carattere di sottolineatura (_) o avere un nome che inizia con "PrepareFor", "Compute", "Before", "After", "Pre" o "Post".

Nella tabella seguente sono elencate diverse destinazioni utili orientate all'utente.

|destinazione|Descrizione|
|------------|-----------------|
|BscMake|Esegue lo strumento Microsoft Browse Information Maintenance Utility, bscmake.exe.|
|Compilazione|Compila il progetto.<br /><br /> Questa è la destinazione predefinita per un progetto.|
|ClCompile|Esegue lo strumento compilatore di Visual C++, cl.exe.|
|Pulisci|File di compilazione di eliminazione temporanee e di livello intermedi.|
|Lib|Esegue lo strumento Gestione librerie Microsoft a 32 Bit, lib.exe.|
|Collegamento|Esegue lo strumento linker di Visual C++, link.exe.|
|ManifestResourceCompile|Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|
|MIDL|Esegue lo strumento del compilatore Microsoft Interface Definition Language (MIDL), midl.exe.|
|Rebuild|Pulisce e quindi compila il progetto.|
|ResourceCompile|Esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|
|XdcMake|Esegue lo strumento documentazione XML, xdcmake.exe.|
|XSD|Esegue lo strumento XML Schema Definition, xsd.exe. *Vedere la nota seguente.*|

> [!NOTE]
> In Visual Studio 2017, supporto per i progetti C++ **xsd** file è stato deprecato. È comunque possibile usare **Microsoft.VisualC.CppCodeProvider** aggiungendo **CppCodeProvider.dll** manualmente alla Global Assembly Cache.

## <a name="see-also"></a>Vedere anche

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)
