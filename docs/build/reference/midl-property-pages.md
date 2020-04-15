---
title: Pagine delle proprietà del compilatore MIDLMIDL Compiler Property Pages
ms.date: 07/24/2019
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
ms.openlocfilehash: d6833230baca892836c187799df7f0658aa16772
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336247"
---
# <a name="midl-property-pages"></a>Pagine delle proprietà MIDL

Le pagine delle proprietà MIDL sono disponibili come proprietà dell'elemento in un oggetto . File IDL in un progetto di C . Utilizzarli per configurare il [compilatore MIDL](/windows/win32/midl/using-the-midl-compiler-2). Per informazioni su come accedere a livello di codice alle opzioni MIDL per i progetti C++, vedere l'oggetto <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>. Vedere anche Sintassi generale della [riga di comando MIDL](/windows/win32/midl/general-midl-command-line-syntax).

## <a name="general-property-page"></a>Pagina delle proprietà Generale

### <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Specifica una o più definizioni, incluse le macro MIDL ([/D](/windows/win32/midl/-d)).\[\]

### <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al\]percorso di inclusione ([/I](/windows/win32/midl/-i)\[path ).

### <a name="additional-metadata-directories"></a>Directory dei metadati aggiuntive

Specificare la directory contenente il file Windows.Foundation.WinMD ([/metadata_dir](/windows/win32/midl/-metadata-dir) \[percorso\]).

### <a name="enable-windows-runtime"></a>Abilitare Windows RuntimeEnable Windows Runtime

Abilitare la semantica di Windows Runtime per creare il file di metadati di Windows ([/winrt](/windows/win32/midl/-winrt)).

### <a name="ignore-standard-include-path"></a>Ignora percorso di inclusione standard

Ignorare le directory current e INCLUDE ([/no_def_idir](/windows/win32/midl/-no-def-idir)).

### <a name="mktyplib-compatible"></a>Compatibile con MkTypLib

Forza la compatibilità con mktyplib.exe versione 2.03 ([/mktyplib203](/windows/win32/midl/-mktyplib203)).

### <a name="warning-level"></a>Livello avvisi

Seleziona la rigidità degli errori di codice MIDL ([/W](/windows/win32/midl/-w)).

**Scelte**

- **1**
- **1**
- **2**
- **3**
- **4**

### <a name="treat-warnings-as-errors"></a>Considera gli avvisi come errori

Consente a MIDL di considerare tutti gli avvisi come errori ([/WX](/windows/win32/midl/-wx)).

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Sopprimere la visualizzazione del banner di avvio e del messaggio informativo ([/nologo](/windows/win32/midl/-nologo)).

### <a name="c-compiler-char-type"></a>Tipo di char del compilatore C

Specifica il tipo di carattere predefinito del compilatore C che verrà utilizzato per compilare il codice generato. ([/char](/windows/win32/midl/-char) signed , unsigned , ascii7).

**Scelte**

- **Firmato** - Firmato
- **Senza segno** - Senza firma
- **Ascii** - Ascii

### <a name="target-environment"></a>Ambiente di destinazione

Specifica l'ambiente di destinazione ([/env](/windows/win32/midl/-env) arm32, win32, ia64,x64).

**Scelte**

- **Non impostato** - Win32
- **Microsoft Windows a 32 bit** - Win32
- **Microsoft Windows a 64 bit su Itanium** - IA64
- **MICROSOFT Windows ARM** - ARM
- **Microsoft Windows ARM64** - ARM64
- **Microsoft Windows a 64 bit su x64** - X64

### <a name="generate-stubless-proxies"></a>Genera proxy Senza Stub

Generare stub interpretati in modo completo con estensioni e proxy senza stub per interfacce di oggetti ([/Oicf](/windows/win32/midl/-oi), [/Oif](/windows/win32/midl/-oi) ).

### <a name="suppress-compiler-warnings"></a>Non visualizzare avvisi del compilatore

Elimina i messaggi di avviso del compilatore ([/no_warn](/windows/win32/midl/-no-warn)).

### <a name="application-configuration-mode"></a>Modalità di configurazione dell'applicazione

Consenti attributi ACF selezionati nel file IDL ([/app_config](/windows/win32/midl/-app-config)).

### <a name="locale-id"></a>ID locale

Specifica l'LCID per i file di input, i nomi e i percorsi di directory ([/lcid](/windows/win32/midl/-lcid) DECIMAL).

### <a name="multi-processor-compilation"></a>Compilazione multiprocessore

Eseguire più istanze contemporaneamente.

## <a name="output-property-page"></a>Pagina delle proprietà Output

### <a name="output-directory"></a>Directory di output

Specifica la directory di output ([/out](/windows/win32/midl/-out) [directory]).

### <a name="metadata-file"></a>File di metadati

Specifica il nome del file di metadati generato ([/winmd](/windows/win32/midl/-winmd) filename).

### <a name="header-file"></a>File di intestazione

Specifica il nome del file di intestazione generato ([/h](/windows/win32/midl/-h) nomefile).

### <a name="dlldata-file"></a>DllData File

Specifica il nome del file DLLDATA ([/dlldata](/windows/win32/midl/-dlldata) nomefile).

### <a name="iid-file"></a>IID File

Specifica il nome del file dell'identificatore di interfaccia ([/iid](/windows/win32/midl/-iid) nomefile).

### <a name="proxy-file"></a>Proxy File

Specifica il nome del file proxy ([/proxy](/windows/win32/midl/-proxy) nomefile).

### <a name="generate-type-library"></a>Genera libreria dei tipi

Specificare di non generare una libreria dei tipi ([/notlb] per no.

### <a name="type-library"></a>Libreria dei tipi

Specifica il nome del file della libreria dei tipi ([/tlb](/windows/win32/midl/-tlb) filename).

### <a name="generate-client-stub-files"></a>Genera file Stub client

Generare solo il file stub del client ([/client](/windows/win32/midl/-client) [stub stub - none]).

**Scelte**

- **Stub** - Stub
- **Nessuno** - Nessuno

### <a name="generate-server-stub-files"></a>Generazione di file Stub server

Generare solo il file stub del server ([/server](/windows/win32/midl/-server) [stub

**Scelte**

- **Stub** - Stub
- **Nessuno** - Nessuno

### <a name="client-stub-file"></a>Client Stub File

Specificare il file stub client ([/cstub](/windows/win32/midl/-cstub) [file]).

### <a name="server-stub-file"></a>Server Stub File

Specificare il file stub del server ([/sstub](/windows/win32/midl/-sstub) [file]).

### <a name="type-library-format"></a>Formato libreria dei tipi

Specifica il formato di file della libreria dei tipi ([/oldtlb/newtlb]).

**Scelte**

- **NewFormat** - Nuovo formato
- **OldFormat** - Vecchio formato

## <a name="advanced-property-page"></a>Pagina delle proprietà Avanzate

### <a name="c-preprocess-options"></a>C Opzioni di pre-elaborazione

Specifica le opzioni da passare al preprocessore del compilatore C[(opzioni /cpp_opt).](/windows/win32/midl/-cpp-opt)

### <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Specifica una o più definizioni, incluse le macro MIDL ([/U](/windows/win32/midl/-U) [macro]).

### <a name="enable-error-checking"></a>Abilita controllo errori

Selezionare l'opzione di controllo degli errori ([/error all-none]).

**Scelte**

- **EnableCustom** - Tutti
- **Tutti** - Tutti
- **Nessuno** - Nessuno

### <a name="check-allocations"></a>Verifica allocazioni

Verificare la presenza di errori di memoria insufficiente[(/error](/windows/win32/midl/-error) allocation).

### <a name="check-bounds"></a>Controllo dei limiti

Controllare la dimensione e la specifica della lunghezza di trasmissione ([/error](/windows/win32/midl/-error) bounds_check).

### <a name="check-enum-range"></a>Controlla intervallo enumerazione

Controllare i valori di enumerazione compresi nell'intervallo consentito ([/error](/windows/win32/midl/-error) enum).

### <a name="check-reference-pointers"></a>Controllare i puntatori di riferimento

Controllare i puntatori a rif come non null ([/error](/windows/win32/midl/-error) ref).

### <a name="check-stub-data"></a>Controllare i dati Stub

Generare un controllo aggiuntivo per la validità dei dati stub sul lato server ([stub_data /error).](/windows/win32/midl/-error)

### <a name="prepend-with-abi-namespace"></a>Anteporre lo spazio dei nomi 'ABI'Prepend with 'ABI' namespace

Anteporre lo spazio dei nomi 'ABI' a tutti i tipi.  ([/ns_prefix](/windows/win32/midl/-ns-prefix)).

### <a name="validate-parameters"></a>Convalida parametri

Generare informazioni aggiuntive per convalidare i parametri ([/robust](/windows/win32/midl/-robust) | [/no_robust](/windows/win32/midl/-no-robust)).

### <a name="struct-member-alignment"></a>Allineamento dei membri Struct

Specifica il livello di compressione delle strutture nel sistema di destinazione(

**Scelte**

- **Non impostato** - Non impostato
- **1 Byte** - .p1
- **2 Byte** - .p2
- **4 Byte** - S.p4
- **8 Byte** - P8

### <a name="redirect-output"></a>Output di reindirizzamento

Reindirizza l'output da schermo a un file ([/o](/windows/win32/midl/-o) file).

### <a name="minimum-target-system"></a>Sistema di destinazione minimo

Impostare il sistema di destinazione minimo ([/target](/windows/win32/midl/-target) STRING).
