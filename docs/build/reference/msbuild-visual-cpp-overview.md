---
title: Elementi interni di MSBuild per i progetti C++ in Visual Studio
description: File di supporto, proprietà e destinazioni utilizzati da MSBuild per i progetti C++ di Visual Studio.
ms.date: 10/14/2020
helpviewer_keywords:
- MSBuild overview
ms.openlocfilehash: e99b9a428d9c6149debc06e1dfab7a69c3590196
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924387"
---
# <a name="msbuild-internals-for-c-projects"></a>Elementi interni di MSBuild per i progetti C++

Quando si impostano le proprietà del progetto nell'ambiente di sviluppo integrato (IDE) e quindi si salva il progetto, Visual Studio scrive le impostazioni del progetto nel file di progetto. Il file di progetto contiene impostazioni univoche per il progetto. Tuttavia, non contiene tutte le impostazioni necessarie per compilare il progetto. Il file di progetto contiene elementi `Import` che includono una rete di altri *file di supporto* . I file di supporto contengono le proprietà, le destinazioni e le impostazioni rimanenti necessarie per compilare il progetto.

La maggior parte delle destinazioni e delle proprietà nei file di supporto esiste esclusivamente allo scopo di implementare il sistema di compilazione. Questo articolo illustra le proprietà e le destinazioni utili che è possibile specificare nella riga di comando di MSBuild. Per individuare altre destinazioni e proprietà, esaminare i file nelle directory dei file di supporto.

## <a name="support-file-directories"></a>Directory dei file di supporto

Per impostazione predefinita, i file di supporto di Visual Studio primari si trovano nelle directory seguenti. Queste informazioni sono specifiche della versione.

::: moniker range=">=msvc-160"

### <a name="visual-studio-2019"></a>Visual Studio 2019

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\`*

  Contiene i file di destinazione (con estensione targets) e i file di proprietà (con estensione props) primari che vengono usati dalle destinazioni. Per impostazione predefinita, la macro $(VCTargetsPath) fa riferimento a questa directory. Il *`<version>`* segnaposto si riferisce alla versione di Visual Studio: V160 per Visual studio 2019, carotatrice V150 per Visual studio 2017.

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\Platforms\<platform>\`*

  Contiene i file di destinazione e proprietà specifici della piattaforma che sostituiscono le destinazioni e le proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono usate dalle destinazioni in questa directory. Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, ARM64, Win32 o x64.

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contiene le directory che consentono alla compilazione di generare applicazioni C++ utilizzando l'oggetto specificato *`<toolset>`* . Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, ARM64, Win32 o x64. Il *`<toolset>`* segnaposto rappresenta la sottodirectory del set di strumenti.

::: moniker-end

::: moniker range=">=msvc-150"

### <a name="visual-studio-2017"></a>Visual Studio 2017

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`*

  Contiene i file di destinazione primari ( *`.targets`* ) e i file *`.props`* di proprietà () usati dalle destinazioni. Per impostazione predefinita, la `$(VCTargetsPath)` macro fa riferimento a questa directory.

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\Platforms\<platform>\`*

  Contiene i file di destinazione e proprietà specifici della piattaforma che sostituiscono le destinazioni e le proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono usate dalle destinazioni in questa directory. Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, ARM64, Win32 o x64.

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contiene le directory che consentono alla compilazione di generare applicazioni C++ utilizzando l'oggetto specificato *`<toolset>`* . Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, Win32 o x64. Il *`<toolset>`* segnaposto rappresenta la sottodirectory del set di strumenti.

::: moniker-end

### <a name="visual-studio-2015-and-earlier"></a>Visual Studio 2015 e versioni precedenti

- *`<drive>:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\<version>\`*

  Contiene i file di destinazione (con estensione targets) e i file di proprietà (con estensione props) primari che vengono usati dalle destinazioni. Per impostazione predefinita, la macro $(VCTargetsPath) fa riferimento a questa directory.

- *`<drive>:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\<version>\Platforms\<platform>\`*

  Contiene i file di destinazione e proprietà specifici della piattaforma che sostituiscono le destinazioni e le proprietà nella relativa directory padre. Questa directory contiene anche una DLL che definisce le attività che vengono usate dalle destinazioni in questa directory. Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, Win32 o x64.

- *`<drive>:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\<version>\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contiene le directory che consentono alla compilazione di generare applicazioni C++ utilizzando l'oggetto specificato *`<toolset>`* . Il *`<version>`* segnaposto è v110 per Visual studio 2012, V120 per Visual Studio 2013 e V140 per Visual studio 2015. Il *`<platform>`* segnaposto rappresenta la sottodirectory ARM, Win32 o x64. Il *`<toolset>`* segnaposto rappresenta la sottodirectory del set di strumenti. Ad esempio, è V140 per la creazione di app di Windows usando il set di strumenti di Visual Studio 2015. In alternativa, v120_xp compilare per Windows XP utilizzando il set di strumenti di Visual Studio 2013.

- *`<drive>:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  I percorsi che consentono alla compilazione di generare applicazioni Visual Studio 2008 o Visual Studio 2010 non includono il *`<version>`* . In queste versioni, il *`<platform>`* segnaposto rappresenta la sottodirectory Itanium, Win32 o x64. Il *`<toolset>`* segnaposto rappresenta la sottodirectory del set di strumenti v90 o V100.

## <a name="support-files"></a>File di supporto

Le directory dei file di supporto contengono file con queste estensioni:

| Estensione | Descrizione |
| --------- | ----------- |
| *`.targets`* | Contiene elementi XML `Target` che specificano le attività eseguite dalla destinazione. Può inoltre contenere elementi `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup` ed elementi `Item` definiti dall'utente utilizzabili per assegnare file e opzioni della riga di comando ai parametri delle attività.<br /><br /> Per altre informazioni, vedere [Elemento Target (MSBuild)](/visualstudio/msbuild/target-element-msbuild). |
| *`.props`* | Contiene elementi `Property Group` ed elementi XML `Property` definiti dall'utente che specificano le impostazioni di file e parametri usate durante una compilazione.<br /><br /> Può inoltre contenere elementi `ItemDefinitionGroup` ed elementi XML `Item` definiti dall'utente che specificano impostazioni aggiuntive. Gli elementi definiti in un gruppo di definizioni di elementi sono simili alle proprietà, ma non è possibile accedervi dalla riga di comando. I file di progetto di Visual Studio usano spesso gli elementi al posto delle proprietà per rappresentare le impostazioni.<br /><br /> Per altre informazioni, vedere [elemento ItemGroup (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), [elemento ItemDefinitionGroup (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild)e [elemento Item (MSBuild)](/visualstudio/msbuild/item-element-msbuild). |
| *`.xml`* | Contiene elementi XML che dichiarano e inizializzano gli elementi dell'interfaccia utente IDE. Ad esempio, le finestre delle proprietà, le pagine delle proprietà, i controlli TextBox e i controlli ListBox.<br /><br /> I *`.xml`* file supportano direttamente l'IDE, non MSBuild. Tuttavia, i valori delle proprietà dell'IDE vengono assegnati agli elementi e alle proprietà di compilazione.<br /><br /> La maggior parte dei *`.xml`* file si trova in una sottodirectory specifica delle impostazioni locali. Ad esempio, i file per l'area inglese (Stati Uniti) si trovano in `$(VCTargetsPath)\1033\` . |

## <a name="user-targets-and-properties"></a>Proprietà e destinazioni degli utenti

Per utilizzare MSBuild in modo efficace, è possibile identificare quali proprietà e destinazioni sono utili e pertinenti. La maggior parte delle proprietà e delle destinazioni consentono di implementare il sistema di compilazione di Visual Studio e, di conseguenza, non sono rilevanti per l'utente. In questa sezione vengono descritte le proprietà e le destinazioni orientate all'utente che è opportuno conoscere.

### <a name="platformtoolset-property"></a>Proprietà`PlatformToolset`

La proprietà `PlatformToolset` determina quale set di strumenti MSVC viene usato nella compilazione. Per impostazione predefinita, si usa il set di strumenti corrente. Quando questa proprietà è impostata, il relativo valore viene concatenato con stringhe letterali per formare il percorso. Si tratta della directory che contiene i file di proprietà e di destinazione necessari per compilare un progetto per una determinata piattaforma. Il set di strumenti della piattaforma deve essere installato per la compilazione con tale versione del set di strumenti della piattaforma.

Ad esempio, impostare la proprietà `PlatformToolset` su `v140` per usare gli strumenti e le librerie di Visual Studio 2015 per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### <a name="preferredtoolarchitecture-property"></a>Proprietà`PreferredToolArchitecture`

La proprietà `PreferredToolArchitecture` determina se nella compilazione vengono usati gli strumenti e il compilatore a 32 o a 64 bit. Questa proprietà non influisce sull'architettura o sulla configurazione della piattaforma di output. Per impostazione predefinita, MSBuild usa la versione x86 del compilatore e gli strumenti se questa proprietà non è impostata.

Ad esempio, impostare la proprietà `PreferredToolArchitecture` su `x64` per usare il compilatore e gli strumenti a 64 bit per compilare l'applicazione:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="useenv-property"></a>Proprietà`UseEnv`

Per impostazione predefinita, le impostazioni specifiche della piattaforma per il progetto corrente sostituiscono le variabili di ambiente PATH, INCLUDE, LIB, LIBPATH, CONFIGURATION e PLATFORM. Impostare la `UseEnv` proprietà su **`true`** per garantire che non venga eseguito l'override delle variabili di ambiente.

> `msbuild myProject.vcxproj /p:UseEnv=true`

### <a name="targets"></a>Server di destinazione

Sono disponibili centinaia di destinazioni nei file di supporto di Visual Studio. Tuttavia, quasi tutte sono destinazioni orientate al sistema che l'utente può ignorare. La maggior parte delle destinazioni di sistema sono precedute da un carattere di sottolineatura ( `_` ) o hanno un nome che inizia con `PrepareFor` ,, `Compute` `Before` , `After` , `Pre` o `Post` .

Nella tabella seguente sono elencate diverse destinazioni utili orientate all'utente.

| Destinazione | Descrizione |
| ------ | ----------- |
| BscMake | Esegue lo strumento Microsoft Browse Information Maintenance Utility, bscmake.exe. |
| Compilare | Compila il progetto.<br /><br /> Questa destinazione è l'impostazione predefinita per un progetto. |
| ClCompile | Esegue lo strumento compilatore MSVC, cl.exe. |
| Clean | Elimina i file di compilazione temporanei e intermedi. |
| Lib | Esegue lo strumento di gestione librerie Microsoft a 32 bit, lib.exe. |
| Collegamento | Esegue lo strumento linker MSVC, link.exe. |
| ManifestResourceCompile | Estrae un elenco di risorse da un manifesto e quindi esegue lo strumento Compilatore di risorse di Microsoft Windows, rc.exe. |
| Midl | Esegue lo strumento compilatore MIDL (Microsoft Interface Definition Language), midl.exe. |
| Ricompilazione | Pulisce e quindi compila il progetto. |
| ResourceCompile | Esegue lo strumento Compilatore di risorse di Microsoft Windows, rc.exe. |
| XdcMake | Esegue lo strumento Documentazione XML, xdcmake.exe. |
| Xsd | Esegue lo strumento XML Schema Definition, Xsd.exe. *Vedere la nota.* |

> [!NOTE]
> In Visual Studio 2017 e versioni successive il supporto dei progetti C++ per i file **xsd** è deprecato. È comunque possibile usare **Microsoft.VisualC.CppCodeProvider** aggiungendo **CppCodeProvider.dll** manualmente alla Global Assembly Cache.

## <a name="see-also"></a>Vedere anche

[Riferimenti alle attività MSBuild](/visualstudio/msbuild/msbuild-task-reference)\
[Attività BscMake](/visualstudio/msbuild/bscmake-task)\
[Attività CL](/visualstudio/msbuild/cl-task)\
[Attività CPPClean](/visualstudio/msbuild/cppclean-task)\
[Attività LIB](/visualstudio/msbuild/lib-task)\
[Attività di collegamento](/visualstudio/msbuild/link-task)\
[MIDL (attività)](/visualstudio/msbuild/midl-task)\
[Attività MT](/visualstudio/msbuild/mt-task)\
[Attività RC](/visualstudio/msbuild/rc-task)\
[Attività SetEnv](/visualstudio/msbuild/setenv-task)\
[Attività VCMessage](/visualstudio/msbuild/vcmessage-task)\
[Attività XDCMake](/visualstudio/msbuild/xdcmake-task)
