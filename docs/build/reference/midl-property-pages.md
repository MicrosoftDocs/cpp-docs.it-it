---
title: Pagine delle proprietà del compilatore MIDL
ms.date: 7/24/2019
ms.topic: article
ms.assetid: 57498a01-fccc-4a0e-a036-6ff702f83126
f1_keywords:
- VC.Project.VCMidlTool.PreprocessorDefinitions
- VC.Project.VCMidlTool.AdditionalIncludeDirectories
- VC.Project.VCMidlTool.AdditionalMetadataDirectories
- VC.Project.VCMidlTool.IgnoreStandardIncludePath
- VC.Project.VCMidlTool.IgnoreStandardIncludePath
- VC.Project.VCMidlTool.MkTypLibCompatible
- VC.Project.VCMidlTool.WarningLevel
- VC.Project.VCMidlTool.WarnAsError
- VC.Project.VCMidlTool.SuppressStartupBanner
- VC.Project.VCMidlTool.DefaultCharType
- VC.Project.VCMidlTool.TargetEnvironment
- VC.Project.VCMidlTool.GenerateStublessProxies
- VC.Project.VCMidlTool.SuppressCompilerWarnings
- VC.Project.VCMidlTool.ApplicationConfigurationMode
- VC.Project.VCMidlTool.LocaleID
- VC.Project.VCMidlTool.MultiProcMIDL
- VC.Project.VCMidlTool.OutputDirectory
- VC.Project.VCMidlTool.WinmdFileName
- VC.Project.VCMidlTool.HeaderFileName
- VC.Project.VCMidlTool.DLLDataFileName
- VC.Project.VCMidlTool.InterfaceIdentifierFileName
- VC.Project.VCMidlTool.ProxyFileName
- VC.Project.VCMidlTool.GenerateTypeLibrary
- VC.Project.VCMidlTool.TypeLibraryName
- VC.Project.VCMidlTool.GenerateClientFiles
- VC.Project.VCMidlTool.GenerateServerFiles
- VC.Project.VCMidlTool.ClientStubFile
- VC.Project.VCMidlTool.ServerStubFile
- VC.Project.VCMidlTool.TypeLibFormat
- VC.Project.VCMidlTool.CPreprocessOptions
- VC.Project.VCMidlTool.UndefinePreprocessorDefinitions
- VC.Project.VCMidlTool.EnableErrorChecks
- VC.Project.VCMidlTool.ErrorCheckAllocations
- VC.Project.VCMidlTool.ErrorCheckBounds
- VC.Project.VCMidlTool.ErrorCheckEnumRange
- VC.Project.VCMidlTool.ErrorCheckRefPointers
- VC.Project.VCMidlTool.ErrorCheckStubData
- VC.Project.VCMidlTool.PreendWithABINamepsace
- VC.Project.VCMidlTool.ValidateParameters
- VC.Project.VCMidlTool.StructMemberAlignment
- VC.Project.VCMidlTool.RedirectOutputAndErrors
- VC.Project.VCMidlTool.MinimumTargetSystem
- vc.project.AdditionalOptionsPage
ms.openlocfilehash: 0113fbd68d7687236b91b098ead2ac6b8338fee9
ms.sourcegitcommit: af4ab63866ed09b5988ed53f1bb6996a54f02484
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/05/2019
ms.locfileid: "68787066"
---
# <a name="midl-property-pages"></a>Pagine delle proprietà MIDL

Le pagine delle proprietà MIDL sono disponibili come proprietà Item in un oggetto. File IDL in un C++ progetto che usa com. Usarli per configurare il [compilatore MIDL](/windows/win32/midl/using-the-midl-compiler-2). Per informazioni su come accedere a livello di codice alle opzioni MIDL per i progetti C++, vedere l'oggetto <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>. Vedere anche [sintassi della riga di comando MIDL generale](/windows/win32/midl/general-midl-command-line-syntax).

## <a name="general-property-page"></a>Pagina delle proprietà generale

### <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Specifica una o più definizioni, incluse le macro\]MIDL ([/d](/windows/win32/midl/-d))\[.

### <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione ([/I](/windows/win32/midl/-i)\[percorso\]).

### <a name="additional-metadata-directories"></a>Directory di metadati aggiuntive

Specificare la directory che contiene il file Windows. Foundation. winmd (percorso\][/metadata_dir](/windows/win32/midl/-metadata-dir) \[).

### <a name="enable-windows-runtime"></a>Abilita Windows Runtime

Abilitare la semantica di Windows Runtime per creare un file di metadati di Windows ([/WinRT](/windows/win32/midl/-winrt)).

### <a name="ignore-standard-include-path"></a>Ignora percorso di inclusione standard

Ignorare le directory di INCLUSIone e correnti ([/no_def_idir](/windows/win32/midl/-no-def-idir)).

### <a name="mktyplib-compatible"></a>Compatibile con MkTypLib

Forza la compatibilità con mktyplib. exe versione 2,03 ([/mktyplib203](/windows/win32/midl/-mktyplib203)).

### <a name="warning-level"></a>Livello avvisi

Consente di selezionare la rigidità degli errori del codice MIDL ([/W](/windows/win32/midl/-w)).

**Scelte**

- **1**
- **1**
- **2**
- **3**
- **4**

### <a name="treat-warnings-as-errors"></a>Considera gli avvisi come errori

Consente a MIDL di considerare tutti gli avvisi come errori ([/WX](/windows/win32/midl/-wx)).

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Impedisce la visualizzazione del messaggio di avvio e del messaggio informativo ([/nologo](/windows/win32/midl/-nologo)).

### <a name="c-compiler-char-type"></a>Tipo char del compilatore C

Specifica il tipo di carattere predefinito del compilatore C che verrà usato per compilare il codice generato. ([/char](/windows/win32/midl/-char) firmato | senza segno | ascii7).

**Scelte**

- Con firma firmata
- **Senza segno** -senza segno
- **ASCII** -ASCII

### <a name="target-environment"></a>Ambiente di destinazione

Specifica l'ambiente di destinazione ([/ENV](/windows/win32/midl/-env) ARM32 | Win32 | ia64 | x64).

**Scelte**

- **Non impostato** -Win32
- **Microsoft Windows 32-bit** -Win32
- **Microsoft Windows 64 bit su Itanium** -ia64
- ARM di **Microsoft Windows**
- **Microsoft Windows arm64** -arm64
- **Microsoft Windows 64 bit su x64** -x64

### <a name="generate-stubless-proxies"></a>Genera proxy senza stub

Genera stub completamente interpretati con estensioni e proxy senza stub per le interfacce degli oggetti ([/Oicf](/windows/win32/midl/-oi), [/OIF](/windows/win32/midl/-oi) ).

### <a name="suppress-compiler-warnings"></a>Non visualizzare avvisi del compilatore

Non visualizzare i messaggi di avviso del compilatore ([/no_warn](/windows/win32/midl/-no-warn)).

### <a name="application-configuration-mode"></a>Modalità di configurazione dell'applicazione

Consente gli attributi ACF selezionati nel file IDL ([/app_config](/windows/win32/midl/-app-config)).

### <a name="locale-id"></a>ID impostazioni locali

Specifica l'LCID per i file di input, i nomi file e i percorsi di directory ([/LCID](/windows/win32/midl/-lcid) Decimal).

### <a name="multi-processor-compilation"></a>Compilazione a più processori

Eseguire più istanze nello stesso momento.

## <a name="output-property-page"></a>Pagina delle proprietà di output

### <a name="output-directory"></a>Directory di output

Specifica la directory di output ([/out](/windows/win32/midl/-out) [directory]).

### <a name="metadata-file"></a>File di metadati

Specifica il nome del file di metadati generato ([/WinMD](/windows/win32/midl/-winmd) filename).

### <a name="header-file"></a>File di intestazione

Specifica il nome del file di intestazione generato ([/h](/windows/win32/midl/-h) nomefile).

### <a name="dlldata-file"></a>File DllData

Specifica il nome del file DLLDATA ([/dlldata](/windows/win32/midl/-dlldata) filename).

### <a name="iid-file"></a>File IID

Specifica il nome per il file dell'identificatore di interfaccia ([/IID](/windows/win32/midl/-iid) filename).

### <a name="proxy-file"></a>File proxy

Specifica il nome del file proxy ([/proxy](/windows/win32/midl/-proxy) filename).

### <a name="generate-type-library"></a>Genera libreria di tipi

Specificare di non generare una libreria dei tipi ([/notlb] per no).

### <a name="type-library"></a>Libreria di tipi

Specifica il nome del file della libreria dei tipi ([/tlb](/windows/win32/midl/-tlb) filename).

### <a name="generate-client-stub-files"></a>Genera file stub client

Genera solo file stub client ([/client](/windows/win32/midl/-client) [Stub | nessuno]).

**Scelte**

- Stub-Stub
- **Nessuno** -nessuno

### <a name="generate-server-stub-files"></a>Genera file stub server

Genera solo file stub server ([/Server](/windows/win32/midl/-server) [Stub | nessuno]).

**Scelte**

- Stub-Stub
- **Nessuno** -nessuno

### <a name="client-stub-file"></a>File stub client

Specificare il file stub del client ([/cstub](/windows/win32/midl/-cstub) [file]).

### <a name="server-stub-file"></a>File stub server

Specificare il file stub del server ([/sstub](/windows/win32/midl/-sstub) [file]).

### <a name="type-library-format"></a>Formato della libreria di tipi

Specifica il formato del file della libreria dei tipi ([/oldtlb |/newtlb]).

**Scelte**

- **NewFormat** -nuovo formato
- **OldFormat** -formato precedente

## <a name="advanced-property-page"></a>Pagina delle proprietà avanzate

### <a name="c-preprocess-options"></a>Opzioni di pre-elaborazione C

Specifica le opzioni da passare al preprocessore del compilatore C (opzioni[/cpp_opt](/windows/win32/midl/-cpp-opt) ).

### <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Specifica uno o più undefines, incluse le macro MIDL ([/u](/windows/win32/midl/-U) [macro]).

### <a name="enable-error-checking"></a>Abilita controllo errori

Selezionare l'opzione per il controllo degli errori ([/error all | None]).

**Scelte**

- **EnableCustom** -tutto
- **Tutto** -tutto
- **Nessuno** -nessuno

### <a name="check-allocations"></a>Verifica allocazioni

Verificare la presenza di errori di memoria insufficiente (allocazione[/Error](/windows/win32/midl/-error) ).

### <a name="check-bounds"></a>Controlla limiti

Controllare le dimensioni rispetto alla specifica della lunghezza di trasmissione ([/Error](/windows/win32/midl/-error) bounds_check).

### <a name="check-enum-range"></a>Controlla intervallo di enumerazione

Controllare che i valori enum siano nell'intervallo consentito ([/Error](/windows/win32/midl/-error) enum).

### <a name="check-reference-pointers"></a>Controlla puntatori di riferimento

Verificare che i puntatori Ref non siano null ([/Error](/windows/win32/midl/-error) Ref).

### <a name="check-stub-data"></a>Controlla dati Stub

Genera il controllo aggiuntivo per la validità dei dati dello stub sul lato server ([/Error](/windows/win32/midl/-error) stub_data).

### <a name="prepend-with-abi-namespace"></a>Anteporre allo spazio dei nomi ' ABI '

Anteporre lo spazio dei nomi ' ABI ' a tutti i tipi.  ([/ns_prefix](/windows/win32/midl/-ns-prefix)).

### <a name="validate-parameters"></a>Convalida parametri

Genera informazioni aggiuntive per la convalida dei parametri ([/robust](/windows/win32/midl/-robust) | [/no_robust](/windows/win32/midl/-no-robust)).

### <a name="struct-member-alignment"></a>Allineamento membri struct

Specifica il livello di compressione delle strutture nel sistema di destinazione (/ZpN).

**Scelte**

- **Non impostato** -non impostato
- **1 byte** -Zp1
- **2 byte** -Zp2
- **4 byte** -zp4
- **8 byte** -ZP8

### <a name="redirect-output"></a>Reindirizza output

Reindirizza l'output dalla schermata a un file ([/o](/windows/win32/midl/-o) file).

### <a name="minimum-target-system"></a>Sistema di destinazione minimo

Impostare il sistema di destinazione minimo ([/target](/windows/win32/midl/-target) String).



