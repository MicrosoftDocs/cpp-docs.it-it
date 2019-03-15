---
title: Riferimento allo schema Cmakesettings
ms.date: 03/05/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: d80829b1475e8718e1c4188ff4fb7d42a1d4b3b9
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827709"
---
# <a name="cmakesettingsjson-schema-reference"></a>Riferimento allo schema Cmakesettings

Il `cmakesettings.json` file contiene informazioni che specificano come Visual Studio deve interagire con CMake per compilare un progetto per una piattaforma specifica. Usare questo file per archiviare informazioni quali le variabili di ambiente o gli argomenti per l'ambiente cmake.exe.

## <a name="environments"></a>Ambienti

Il `environments` matrice contiene un elenco delle `items` di tipo `object` che definiscono un "ambiente". Un ambiente può essere usato per applicare un set di variabili per un `configuration`. Ogni elemento di `environments` matrice costituita da:

- `namespace`: i nomi di ambiente in modo che le variabili possono fare riferimento una configurazione del modulo `namespace.variable`. L'oggetto ambiente predefinito viene chiamato `env` e viene popolato con alcune variabili di ambiente di sistema inclusi `%USERPROFILE%`.
- `environment`: identifica in modo univoco questo gruppo di variabili. Consente al gruppo di essere ereditato in un secondo momento in un `inheritEnvironments` voce.
- `groupPriority`: Valore intero che specifica la priorità di queste variabili, la loro valutazione. Numero di elementi superiore viene valutato per primi.
- `inheritEnvironments`: Matrice di valori che specificano il set di ambienti ereditati da questo gruppo. È possibile usare qualsiasi ambiente personalizzato oppure questi ambienti predefiniti:
 
  - linux_arm: Come destinazione ARM Linux in modalità remota.
  - linux_x64: Imposta come destinazione x64 Linux in modalità remota.
  - linux_x86: Imposta come destinazione x86 Linux in modalità remota.
  - msvc_arm: Destinazione ARM Windows con il compilatore MSVC.
  - msvc_arm_x64: Destinazione ARM Windows con il compilatore MSVC a 64 bit.
  - msvc_arm64: Destinazione ARM64 Windows con il compilatore MSVC.
  - msvc_arm64_x64: Destinazione ARM64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x64: Destinazione x64 Windows con il compilatore MSVC.
  - msvc_x64_x64: Destinazione x64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x86: Destinazione x86 Windows con il compilatore MSVC.
  - msvc_x86_x64: Destinazione x86 Windows con il compilatore MSVC a 64 bit.

## <a name="configurations"></a>Configurazioni

Il `configurations` matrice è costituita da oggetti che rappresentano le configurazioni di CMake che si applicano al file cmakelists. txt nella stessa cartella. È possibile usare questi oggetti per definire più configurazioni della build e passare facilmente tra di essi nell'IDE. 

Oggetto `configuration` presenta le seguenti proprietà:
- `name`: nome della configurazione.
- `description`: descrizione della configurazione che verrà visualizzato nei menu.
- `generator`: specifica del generatore CMake da usare per questa configurazione. Può essere uno dei seguenti:

  - Visual Studio 15 2017
  - Visual Studio 15 2017 Win64
  - Visual Studio 15 2017 ARM
  - Visual Studio 14 2015
  - Visual Studio 14 2015 Win64
  - Visual Studio 14 2015 ARM
  - Makefile di UNIX
  - Ninja

- `configurationType`: specifica la configurazione del tipo di compilazione per il generatore selezionato. Può essere uno dei seguenti:
 
  - Debug
  - Versione
  - MinSizeRel
  - RelWithDebInfo
 
- `inheritEnvironments`: specifica uno o più ambienti in cui dipende questa configurazione. Può essere qualsiasi ambiente personalizzato o uno degli ambienti predefiniti.
- `buildRoot`: Specifica il directory in cui CMake genera compilazione degli script per il generatore scelto. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`. "
- `installRoot`: specifica la directory in cui CMake genera le destinazioni di installazione per il generatore scelto. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`. "
- `cmakeCommandArgs`: Specifica opzioni della riga di comando aggiuntive passate a CMake quando viene richiamato per generare la cache. "
- `cmakeToolchain`: Specifica il file di toolchain. Si è passato a CMake usando - DCMAKE_TOOLCHAIN_FILE. "
- `buildCommandArgs`: Specifica opzioni di compilazione nativa passate a CMake dopo - build:. "
- `ctestCommandArgs`: Specifica opzioni della riga di comando aggiuntive passate a CTest durante l'esecuzione dei test. "
- `codeAnalysisRuleset`: Specifica il set di regole da usare quando si esegue l'analisi del codice. Può trattarsi di un percorso completo o il nome del file di un file di set di regole installato da Visual Studio."
- `intelliSenseMode`: specifica la modalità utilizzata per l'elaborazione delle informazioni di intellisense ". Può essere uno dei seguenti:
 
  - windows-msvc-x86
  - windows-msvc-x64
  - windows-msvc-arm
  - windows-msvc-arm64
  - android-clang-x86
  - android-clang-x64
  - android-clang-arm
  - android-clang-arm64
  - ios-clang-x86
  - ios-clang-x64
  - ios-clang-arm
  - ios-clang-arm64
  - windows-clang-x86
  - windows-clang-x64
  - windows-clang-arm
  - windows-clang-arm64
  - linux-gcc-x86
  - linux-gcc-x64
  - linux-gcc-arm"

- `cacheRoot`: Specifica il percorso di una cache di CMake. Questa directory deve contenere un file cmakecache. txt esistente.
- `remoteMachineName`: Specifica il nome del computer Linux remoto che ospita CMake, build e il debugger. Utilizzare la gestione connessione per l'aggiunta di nuove macchine Linux. Le macro supportate includono `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: Specifica il livello di dettaglio dell'operazione di copia origine nel computer remoto. Può essere uno dei "" Normal","Verbose"o"Diagnostica".
- `remoteCopySourcesConcurrentCopies`: Specifica il numero di compie simultanee usate durante la sincronizzazione delle origini nel computer remoto.
- `remoteCopySourcesMethod`: Specifica il metodo per copiare i file nel computer remoto. Potrebbe essere "rsync" o "sftp".
- `remoteCMakeListsRoot`: specifica la directory nel computer remoto che contiene il progetto CMake. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifica la directory nel computer remoto in cui CMake genera gli script di compilazione per il generatore scelto. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifica la directory nel computer remoto in cui CMake genera le destinazioni di installazione per il generatore scelto. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, e `${env.VARIABLE}` dove `VARIABLE` è una variabile di ambiente con stato definito a livello di sistema, utente o sessione.
- `remoteCopySources`: Oggetto `boolean` che specifica se Visual Studio deve copiare i file di origine nel computer remoto. Il valore predefinito è true. Impostare su false se si gestisce autonomamente la sincronizzazione dei file.
- `remoteCopyBuildOutput`: Oggetto `boolean` che specifica se copiare gli output di compilazione dal sistema remoto.
- `rsyncCommandArgs`: specifica un set di opzioni della riga di comando aggiuntive passate a rsync.
- `remoteCopySourcesExclusionList`: Oggetto `array` che specifica un elenco di percorsi da escludere quando si copiano i file di origine: un percorso può essere il nome di un file o una directory o un percorso relativo alla radice della copia. I caratteri jolly \\ \" * \\ \" e \\ \"?\\ \" utilizzabile per la corrispondenza dei modelli di glob.
- `cmakeExecutable`: Specifica il percorso completo dell'eseguibile di programma CMake, inclusi il nome del file e l'estensione.
- `remotePreGenerateCommand`: Specifica il comando da eseguire prima di eseguire CMake per analizzare il file cmakelists. txt.
- `remotePrebuildCommand`: Specifica il comando da eseguire nel computer remoto prima della compilazione.
- `remotePostbuildCommand`: Specifica il comando da eseguire nel computer remoto dopo la compilazione.
- `variables`: Oggetto `array` che specifica le variabili che vengono passate a CMake come - Dname1 = value1-Dname2 = value2 e così via. 


