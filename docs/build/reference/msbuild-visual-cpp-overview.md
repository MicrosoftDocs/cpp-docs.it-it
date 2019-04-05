---
title: Progetti di elementi interni di MSBuild per C++ in Visual Studio
ms.date: 12/08/2018
helpviewer_keywords:
- MSBuild overview
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
ms.openlocfilehash: 6c8e891f6bf6ed6b3bb3d1c84dbc13b64ab7b868
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59021904"
---
# <a name="msbuild-internals-for-c-projects"></a>Elementi interni di MSBuild per i progetti C++

Quando si impostano le proprietà del progetto nell'IDE e quindi salvare il progetto, Visual Studio scrive le impostazioni del progetto al file di progetto. Il file di progetto contiene impostazioni che sono univoche per il progetto, ma non contiene tutte le impostazioni necessarie per compilare il progetto. Contiene il file di progetto `Import` gli elementi che includono una rete di altri *i file di supporto.* I file di supporto contengono le proprietà rimanenti, destinazioni e le impostazioni necessarie per compilare il progetto.

La maggior parte delle destinazioni e proprietà nei file di supporto esistono esclusivamente allo scopo di implementare il sistema di compilazione. La sezione seguente vengono illustrate alcune proprietà che è possibile specificare nella riga di comando MSBuild e destinazioni utili. Per individuare più destinazioni e proprietà, esaminare i file nelle directory dei file di supporto.

## <a name="support-file-directories"></a>Directory dei File di supporto

Per impostazione predefinita, i file di supporto di Visual Studio primari si trovano nelle seguenti directory. Le directory in Microsoft Visual Studio vengono usate da Visual Studio 2017 e versioni successive, mentre le directory in MSBuild sono usate da Visual Studio 2015 e versioni precedenti.

|Directory|Descrizione|
|---------------|-----------------|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp (x86) \v4.0\\*versione*\ |Contiene i file di destinazione primario (con estensione targets) e i file di proprietà (con estensione props) vengono utilizzati dalle destinazioni. Per impostazione predefinita, la macro VCTargetsPath fa riferimento a questa directory.|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ Piattaforme\\*piattaforma*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ |Contiene i file di destinazione e proprietà specifiche della piattaforma che eseguono l'override di destinazioni e proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono utilizzate dalle destinazioni in questa directory.<br /><br /> Il *piattaforma* segnaposto rappresenta il ARM, Win32 o x64 sottodirectory.|
|*unità*: il file \Programmi *(x86)* \Microsoft Visual Studio\\*year*\\*edizione*\Common7\IDE\VC\VCTargets\ Piattaforme\\*platform*\PlatformToolsets\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ PlatformToolsets set\\*set di strumenti*\ <br /><br />*unità*: il file \Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\Platforms\\*platform*\PlatformToolsets\\*set di strumenti*\ |Contiene le directory che consentono la compilazione generare le applicazioni C++ tramite l'oggetto specificato *set di strumenti*.<br /><br /> Il *anno* e *edition* segnaposto vengono utilizzati da Visual Studio 2017 e versioni successive. Il *versione* segnaposto è V110 per Visual Studio 2012, V120 per Visual Studio 2013 o V140 per Visual Studio 2015. Il *piattaforma* segnaposto rappresenta il ARM, Win32 o x64 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti, ad esempio, v140 per la creazione di App di Windows usando il set di strumenti di Visual Studio 2015, v120_xp per creare applicazioni per Windows XP con il set di strumenti di Visual Studio 2013 o v110_wp80 per compilare app di Windows Phone 8.0 con il set di strumenti di Visual Studio 2012.<br /><br />Il percorso che contiene le directory che consentono la compilazione generare le applicazioni di Visual Studio 2008 o Visual Studio 2010 non include il *versione*e il *piattaforma* segnaposto rappresenta il processore Itanium, Win32 o x64 sottodirectory. Il *set di strumenti* segnaposto rappresenta la sottodirectory del set di strumenti v90 o v100.|

## <a name="support-files"></a>File di supporto

Directory dei file di supporto contengono file con queste estensioni:

|Estensione|Descrizione|
|---------------|-----------------|
|con estensione targets|Contiene `Target` elementi XML che specificano le attività eseguite dalla destinazione. Può inoltre contenere `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup`e definiti dall'utente `Item` gli elementi che consentono di assegnare ai parametri dell'attività file e le opzioni della riga di comando.<br /><br /> Per altre informazioni, vedere [elemento Target (MSBuild)](/visualstudio/msbuild/target-element-msbuild).|
|con estensione props|Contiene `Property Group` definiti dall'utente `Property` elementi XML che specificano le impostazioni di file e sui parametri utilizzati durante una compilazione.<br /><br /> Può inoltre contenere `ItemDefinitionGroup` definiti dall'utente `Item` elementi XML che specificano le impostazioni aggiuntive. Gli elementi definiti in un gruppo di definizioni di elemento sono simili a proprietà, ma non è possibile accedere dalla riga di comando. I file di progetto di Visual Studio utilizzano spesso gli elementi anziché le proprietà per rappresentare le impostazioni.<br /><br /> Per altre informazioni, vedere [elemento ItemGroup (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), 
[Elemento ItemDefinitionGroup (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild), e [elemento Item (MSBuild)](/visualstudio/msbuild/item-element-msbuild).|
|.xml|Contiene elementi XML che dichiarano e inizializzano elementi dell'interfaccia utente IDE quali le finestre delle proprietà e pagine delle proprietà e controlli casella di testo casella ed elenco.<br /><br /> I file con estensione XML supportano direttamente l'IDE, ma non MSBuild. Tuttavia, i valori delle proprietà IDE vengono assegnati alla proprietà e gli elementi di compilazione.<br /><br /> La maggior parte dei file. XML si trovano in una sottodirectory specifiche delle impostazioni locali. Ad esempio, i file per la regione inglese-Stati Uniti sono in $(VCTargetsPath) \1033\\.|

## <a name="user-targets-and-properties"></a>Proprietà e destinazioni utente

Per usare MSBuild in modo più efficace dalla riga di comando, è importante conoscere quali proprietà e destinazioni sono utili e pertinenti. La maggior parte delle proprietà e destinazioni consentono di implementare il sistema di compilazione di Visual Studio e di conseguenza non sono rilevanti per l'utente. In questa sezione descrive alcune proprietà possono essere utili orientate all'utente e le destinazioni.

### <a name="platformtoolset-property"></a>Proprietà PlatformToolset

Il `PlatformToolset` proprietà determina quale set di strumenti MSVC viene utilizzata nella compilazione. Per impostazione predefinita, viene utilizzato il set di strumenti corrente. Quando questa proprietà è impostata, il valore della proprietà viene concatenato a stringhe letterali per formare il percorso della directory che contiene i file di proprietà e di destinazione che sono necessari per compilare un progetto per una particolare piattaforma. Il set di strumenti della piattaforma deve essere installato per compilare con tale versione di strumenti della piattaforma.

Ad esempio, impostare il `PlatformToolset` proprietà `v140` usare gli strumenti di Visual Studio 2015 e librerie per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### <a name="preferredtoolarchitecture-property"></a>Proprietà PreferredToolArchitecture

Il `PreferredToolArchitecture` proprietà determina se gli strumenti e compilatore a 32 o 64 bit vengono utilizzati nella compilazione. Questa proprietà non influenza l'architettura della piattaforma di output o la configurazione. Per impostazione predefinita, MSBuild Usa x86 versione del compilatore e degli strumenti se questa proprietà non è impostata.

Ad esempio, impostare il `PreferredToolArchitecture` proprietà `x64` usare gli strumenti e compilatore a 64 bit per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="useenv-property"></a>Proprietà UseEnv

Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiranno le variabili di ambiente PATH, INCLUDE, LIB, LIBPATH, configurazione e piattaforma. Impostare il `UseEnv` proprietà **true** per garantire che le variabili di ambiente non vengono sottoposte a override.

`msbuild myProject.vcxproj /p:UseEnv=true`

### <a name="targets"></a>Destinazioni

Sono disponibili centinaia di destinazioni nel file di supporto di Visual Studio. Tuttavia, la maggior parte sono destinazioni orientate al sistema che l'utente può essere ignorato. La maggior parte delle destinazioni del sistema sono precedute dal carattere di sottolineatura (_) o avere un nome che inizia con "PrepareFor", "Compute", "Before", "After", "Pre" o "Post".

Nella tabella seguente sono elencate diverse destinazioni utili orientate all'utente.

|destinazione|Descrizione|
|------------|-----------------|
|BscMake|Esegue lo strumento Microsoft Browse Information Maintenance Utility, bscmake.exe.|
|Compilazione|Compila il progetto.<br /><br /> Questa è la destinazione predefinita per un progetto.|
|ClCompile|Esegue lo strumento del compilatore MSVC, cl.exe.|
|Pulisci|File di compilazione di eliminazione temporanee e di livello intermedi.|
|Lib|Esegue lo strumento Gestione librerie Microsoft a 32 Bit, lib.exe.|
|Collegamento|Esegue lo strumento linker MSVC, link.exe.|
|ManifestResourceCompile|Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|
|MIDL|Esegue lo strumento del compilatore Microsoft Interface Definition Language (MIDL), midl.exe.|
|Rebuild|Pulisce e quindi compila il progetto.|
|ResourceCompile|Esegue lo strumento compilatore di risorse di Microsoft Windows, rc.exe.|
|XdcMake|Esegue lo strumento documentazione XML, xdcmake.exe.|
|Xsd|Esegue lo strumento XML Schema Definition, xsd.exe. *Vedere la nota seguente.*|

> [!NOTE]
> In Visual Studio 2017, supporto per i progetti C++ **xsd** file è stato deprecato. È comunque possibile usare **Microsoft.VisualC.CppCodeProvider** aggiungendo **CppCodeProvider.dll** manualmente alla Global Assembly Cache.

## <a name="see-also"></a>Vedere anche

[Riferimenti delle attività MSBuild](/visualstudio/msbuild/msbuild-task-reference)<br/>
[Attività BscMake](/visualstudio/msbuild/bscmake-task)<br/>
[Attività CL](/visualstudio/msbuild/cl-task)<br/>
[Attività CPPClean](/visualstudio/msbuild/cppclean-task)<br/>
[Attività LIB](/visualstudio/msbuild/lib-task)<br/>
[Attività Link](/visualstudio/msbuild/link-task)<br/>
[Attività MIDL](/visualstudio/msbuild/midl-task)<br/>
[Attività MT](/visualstudio/msbuild/mt-task)<br/>
[Attività RC](/visualstudio/msbuild/rc-task)<br/>
[Attività SetEnv](/visualstudio/msbuild/setenv-task)<br/>
[Attività VCMessage](/visualstudio/msbuild/vcmessage-task)<br/>
[Attività XDCMake](/visualstudio/msbuild/xdcmake-task)<br/>
