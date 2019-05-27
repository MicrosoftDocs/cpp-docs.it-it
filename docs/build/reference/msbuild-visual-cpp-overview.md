---
title: Elementi interni di MSBuild per i progetti C++ in Visual Studio
ms.date: 05/16/2019
helpviewer_keywords:
- MSBuild overview
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
ms.openlocfilehash: b3348320a1468fea03f39e43cc847f1085f3d319
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837222"
---
# <a name="msbuild-internals-for-c-projects"></a>Elementi interni di MSBuild per i progetti C++

Quando si impostano le proprietà del progetto nell'ambiente di sviluppo integrato (IDE) e quindi si salva il progetto, Visual Studio scrive le impostazioni del progetto nel file di progetto. Il file di progetto contiene impostazioni univoche per il progetto, ma non include tutte le impostazioni necessarie per compilare il progetto. Il file di progetto contiene elementi `Import` che includono una rete di altri *file di supporto*. I file di supporto contengono le restanti proprietà, destinazioni e impostazioni necessarie per compilare il progetto.

La maggior parte delle destinazioni e delle proprietà nei file di supporto esiste esclusivamente allo scopo di implementare il sistema di compilazione. Nella sezione seguente vengono illustrate alcune destinazioni e proprietà utili che è possibile specificare nella riga di comando di MSBuild. Per individuare altre destinazioni e proprietà, esaminare i file nelle directory dei file di supporto.

## <a name="support-file-directories"></a>Directory dei file di supporto

Per impostazione predefinita, i file di supporto di Visual Studio primari si trovano nelle directory seguenti. Le directory in Microsoft Visual Studio vengono usate da Visual Studio 2017 e versioni successive, mentre quelle in MSBuild sono usate da Visual Studio 2015 e versioni precedenti.

|Directory|Description|
|---------------|-----------------|
|*unità*:\Programmi *(x86)* \Microsoft Visual Studio\\*anno*\\*edizione*\Common7\IDE\VC\VCTargets\ <br /><br />*unità*:\Programmi *(x86)* \MSBuild\Microsoft.Cpp (x86)\v4.0\\*versione*\ |Contiene i file di destinazione (con estensione targets) e i file di proprietà (con estensione props) primari che vengono usati dalle destinazioni. Per impostazione predefinita, la macro $(VCTargetsPath) fa riferimento a questa directory.|
|*unità*:\Programmi *(x86)* \Microsoft Visual Studio\\*anno*\\*edizione*\Common7\IDE\VC\VCTargets\Platforms\\*piattaforma*\ <br /><br />*unità*:\Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\ |Contiene i file di destinazione e proprietà specifici della piattaforma che sostituiscono le destinazioni e le proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono usate dalle destinazioni in questa directory.<br /><br /> Il segnaposto *piattaforma* rappresenta la sottodirectory ARM, Win32 o x64.|
|*unità*:\Programmi *(x86)* \Microsoft Visual Studio\\*anno*\\*edizione*\Common7\IDE\VC\VCTargets\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\ <br /><br />*unità*:\Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\\*versione*\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\ <br /><br />*unità*:\Programmi *(x86)* \MSBuild\Microsoft.Cpp\v4.0\Platforms\\*piattaforma*\PlatformToolsets\\*set di strumenti*\ |Contiene le directory che consentono di compilare applicazioni C++ usando il *set di strumenti* specificato.<br /><br /> I segnaposto *anno* ed *edizione* vengono usati da Visual Studio 2017 e versioni successive. Il segnaposto *versione* è V110 per Visual Studio 2012, V120 per Visual Studio 2013, V140 per Visual Studio 2015, v141 per Visual Studio 2017 e v142 per Visual Studio 2019. Il segnaposto *piattaforma* rappresenta la sottodirectory ARM, Win32 o x64. Il segnaposto *set di strumenti* rappresenta la sottodirectory del set di strumenti, ad esempio v140 per la compilazione di app di Windows con il set di strumenti di Visual Studio 2015 e v120_xp per la compilazione di app per Windows XP con il set di strumenti di Visual Studio 2013.<br /><br />Il percorso contenente le directory che consentono di compilare applicazioni di Visual Studio 2008 o di Visual Studio 2010 non include la *versione* e il segnaposto *piattaforma* rappresenta la sottodirectory Itanium, Win32 o x64. Il segnaposto *set di strumenti* rappresenta la sottodirectory del set di strumenti v90 o v100.|

## <a name="support-files"></a>File di supporto

Le directory dei file di supporto contengono file con queste estensioni:

|Estensione|Description|
|---------------|-----------------|
|.targets|Contiene elementi XML `Target` che specificano le attività eseguite dalla destinazione. Può inoltre contenere elementi `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup` ed elementi `Item` definiti dall'utente utilizzabili per assegnare file e opzioni della riga di comando ai parametri delle attività.<br /><br /> Per altre informazioni, vedere [Elemento Target (MSBuild)](/visualstudio/msbuild/target-element-msbuild).|
|.props|Contiene elementi `Property Group` ed elementi XML `Property` definiti dall'utente che specificano le impostazioni di file e parametri usate durante una compilazione.<br /><br /> Può inoltre contenere elementi `ItemDefinitionGroup` ed elementi XML `Item` definiti dall'utente che specificano impostazioni aggiuntive. Gli elementi definiti in un gruppo di definizioni di elementi sono simili alle proprietà, ma non è possibile accedervi dalla riga di comando. I file di progetto di Visual Studio usano spesso gli elementi al posto delle proprietà per rappresentare le impostazioni.<br /><br /> Per altre informazioni, vedere [Elemento ItemGroup (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild). 
[Elemento ItemDefinitionGroup (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild) ed [elemento Item (MSBuild)](/visualstudio/msbuild/item-element-msbuild).|
|.xml|Contiene elementi XML che dichiarano e inizializzano gli elementi dell'interfaccia utente dell'ambiente di sviluppo integrato (IDE), come finestre delle proprietà e pagine delle proprietà e controlli casella di testo e casella di riepilogo.<br /><br /> I file con estensione xml supportano direttamente l'IDE, ma non MSBuild. Tuttavia, i valori delle proprietà dell'IDE vengono assegnati agli elementi e alle proprietà di compilazione.<br /><br /> La maggior parte dei file con estensione xml si trova in una sottodirectory specifica per le impostazioni locali. Ad esempio, i file per l'area Inglese - Stati Uniti si trovano in $(VCTargetsPath) \1033\\.|

## <a name="user-targets-and-properties"></a>Proprietà e destinazioni degli utenti

Per usare MSBuild in modo più efficiente dalla riga di comando, è importante sapere quali proprietà e destinazioni sono utili e pertinenti. La maggior parte delle proprietà e delle destinazioni consente di implementare il sistema di compilazione di Visual Studio e di conseguenza non sono rilevanti per l'utente. Questa sezione descrive alcune proprietà e destinazioni orientate agli utenti che possono risultare utili.

### <a name="platformtoolset-property"></a>Proprietà PlatformToolset

La proprietà `PlatformToolset` determina quale set di strumenti MSVC viene usato nella compilazione. Per impostazione predefinita, si usa il set di strumenti corrente. Quando questa proprietà è impostata, il valore della proprietà è concatenato con stringhe letterali per formare il percorso di una directory contenente i file di proprietà e di destinazione necessari per compilare un progetto per una particolare piattaforma. Il set di strumenti della piattaforma deve essere installato per la compilazione con tale versione del set di strumenti della piattaforma.

Ad esempio, impostare la proprietà `PlatformToolset` su `v140` per usare gli strumenti e le librerie di Visual Studio 2015 per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### <a name="preferredtoolarchitecture-property"></a>Proprietà PreferredToolArchitecture

La proprietà `PreferredToolArchitecture` determina se nella compilazione vengono usati gli strumenti e il compilatore a 32 o a 64 bit. Questa proprietà non influisce sulla configurazione o sull'architettura della piattaforma di output. Per impostazione predefinita, MSBuild usa la versione x86 del compilatore e degli strumenti se questa proprietà non è impostata.

Ad esempio, impostare la proprietà `PreferredToolArchitecture` su `x64` per usare il compilatore e gli strumenti a 64 bit per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="useenv-property"></a>Proprietà UseEnv

Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiscono le variabili di ambiente PATH, INCLUDE, LIB, LIBPATH, CONFIGURATION e PLATFORM. Impostare la proprietà `UseEnv` su **true** per garantire che le variabili di ambiente non vengano sostituite.

`msbuild myProject.vcxproj /p:UseEnv=true`

### <a name="targets"></a>Destinazioni

Sono disponibili centinaia di destinazioni nei file di supporto di Visual Studio. Tuttavia, quasi tutte sono destinazioni orientate al sistema che l'utente può ignorare. La maggior parte delle destinazioni di sistema è preceduta da un carattere di sottolineatura (_) o ha un nome che inizia con "PrepareFor", "Compute", "Before", "After", "Pre" o "Post".

Nella tabella seguente sono elencate diverse destinazioni utili orientate all'utente.

|destinazione|Description|
|------------|-----------------|
|BscMake|Esegue lo strumento Microsoft Browse Information Maintenance Utility, bscmake.exe.|
|Compilazione|Compila il progetto.<br /><br /> Si tratta della destinazione predefinita per un progetto.|
|ClCompile|Esegue lo strumento compilatore MSVC, cl.exe.|
|Pulisci|Elimina i file di compilazione temporanei e intermedi.|
|Lib|Esegue lo strumento di gestione librerie Microsoft a 32 bit, lib.exe.|
|Collegamento|Esegue lo strumento linker MSVC, link.exe.|
|ManifestResourceCompile|Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento Compilatore di risorse di Microsoft Windows, rc.exe.|
|Midl|Esegue lo strumento compilatore MIDL (Microsoft Interface Definition Language), midl.exe.|
|Rebuild|Pulisce e quindi compila il progetto.|
|ResourceCompile|Esegue lo strumento Compilatore di risorse di Microsoft Windows, rc.exe.|
|XdcMake|Esegue lo strumento Documentazione XML, xdcmake.exe.|
|Xsd|Esegue lo strumento XML Schema Definition, Xsd.exe. *Vedere la nota seguente.*|

> [!NOTE]
> In Visual Studio 2017 e versioni successive il supporto dei progetti C++ per i file **xsd** è deprecato. È comunque possibile usare **Microsoft.VisualC.CppCodeProvider** aggiungendo **CppCodeProvider.dll** manualmente alla Global Assembly Cache.

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
