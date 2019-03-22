---
title: Informazioni di riferimento sullo schema CMakeSettings.json
ms.date: 03/05/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 893bc5c8efe3fdae80a4a0de8204d391baa63d07
ms.sourcegitcommit: 42e65c171aaa17a15c20b155d22e3378e27b4642
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2019
ms.locfileid: "58356114"
---
# <a name="cmakesettingsjson-schema-reference"></a>Informazioni di riferimento sullo schema CMakeSettings.json

Il **cmakesettings**' file contiene informazioni che specificano come Visual Studio deve interagire con CMake per compilare un progetto per una piattaforma specifica. Usare questo file per archiviare informazioni, ad esempio le variabili di ambiente o gli argomenti, per l'ambiente cmake.exe.

## <a name="environments"></a>Ambienti

La matrice `environments` contiene un elenco di `items` di tipo `object` che definiscono un "ambiente". È possibile usare un ambiente per applicare un set di variabili a `configuration`. Ogni elemento nella matrice `environments` è costituito da:

- `namespace`: assegna un nome all'ambiente in modo che sia possibile fare riferimento alle variabili dell'ambiente da una configurazione nel formato `namespace.variable`. L'oggetto ambiente predefinito è denominato `env` ed è popolato con determinate variabili di ambiente di sistema tra cui `%USERPROFILE%`.
- `environment`: identifica in modo univoco questo gruppo di variabili. Consente al gruppo di essere ereditato successivamente in una voce `inheritEnvironments`.
- `groupPriority`: Valore intero che specifica la priorità delle variabili durante la valutazione. Gli elementi con il numero più elevato vengono valutati per primi.
- `inheritEnvironments`: Matrice di valori che specificano il set di ambienti ereditati dal gruppo. È possibile usare qualsiasi ambiente personalizzato oppure gli ambienti predefiniti seguenti:
 
  - linux_arm: Imposta come destinazione ARM Linux in modalità remota.
  - linux_x64: Imposta come destinazione x64 Linux in modalità remota.
  - linux_x86: Imposta come destinazione x86 Linux in modalità remota.
  - msvc_arm: Imposta come destinazione ARM Windows con il compilatore MSVC.
  - msvc_arm_x64: Imposta come destinazione ARM Windows con il compilatore MSVC a 64 bit.
  - msvc_arm64: Imposta come destinazione ARM64 Windows con il compilatore MSVC.
  - msvc_arm64_x64: Imposta come destinazione ARM64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x64: Imposta come destinazione x64 Windows con il compilatore MSVC.
  - msvc_x64_x64: Imposta come destinazione x64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x86: Imposta come destinazione x86 Windows con il compilatore MSVC.
  - msvc_x86_x64: Imposta come destinazione x86 Windows con il compilatore MSVC a 64 bit.

## <a name="configurations"></a>Configurazioni

La matrice `configurations` è costituita da oggetti che rappresentano le configurazioni CMake che si applicano al file CMakeLists.txt nella stessa cartella. È possibile usare questi oggetti per definire più configurazioni della build e passare facilmente da uno all'altro nell'IDE. 

`configuration` ha le proprietà seguenti:
- `name`: assegna un nome alla configurazione.
- `description`: descrizione della configurazione che verrà visualizzata nei menu.
- `generator`: specifica il generatore CMake da usare per la configurazione. Può essere uno dei seguenti:

  - Visual Studio 15 2017
  - Visual Studio 15 2017 Win64
  - Visual Studio 15 2017 ARM
  - Visual Studio 14 2015
  - Visual Studio 14 2015 Win64
  - Visual Studio 14 2015 ARM
  - Makefile Unix
  - Ninja

- `configurationType`: specifica la configurazione del tipo di compilazione per il generatore selezionato. Può essere uno dei seguenti:
 
  - Debug
  - Versione
  - MinSizeRel
  - RelWithDebInfo
 
- `inheritEnvironments`: specifica uno o più ambienti da cui dipende la configurazione. Può essere qualsiasi ambiente personalizzato oppure uno degli ambienti predefiniti.
- `buildRoot`: specifica la  directory in cui CMake genera script di compilazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`".
- `installRoot`: specifica la directory in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`".
- `cmakeCommandArgs`: specifica opzioni aggiuntive della riga di comando passate a CMake quando viene richiamato per generare la cache.
- `cmakeToolchain`: specifica il file di toolchain. Viene passato a CMake usando -DCMAKE_TOOLCHAIN_FILE.
- `buildCommandArgs`: specifica opzioni di compilazione nativa passate a CMake dopo --build --.
- `ctestCommandArgs`: specifica opzioni aggiuntive della riga di comando passate a CTest durante l'esecuzione dei test.
- `codeAnalysisRuleset`: specifica il set di regole da usare durante l'esecuzione dell'analisi codice. Può essere un percorso completo o il nome file di un file di set di regole installato da Visual Studio.
- `intelliSenseMode`: specifica la modalità usata per il calcolo delle informazioni di IntelliSense. Può essere uno dei seguenti:
 
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
  - linux-gcc-arm

- `cacheRoot`: specifica il percorso di una cache CMake. Questa directory deve contenere un file CMakeCache.txt esistente.
- `remoteMachineName`: specifica il nome del computer Linux remoto che ospita CMake, le build e il debugger. Usare Gestione connessioni per aggiungere nuovi computer Linux. Le macro supportate includono `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: specifica il livello di dettaglio dell'operazione di copia origine nel computer remoto. Può essere "Normale", "Dettagli" o "Diagnostica".
- `remoteCopySourcesConcurrentCopies`: specifica il numero di compie simultanee usate durante la sincronizzazione delle origini nel computer remoto.
- `remoteCopySourcesMethod`: specifica il metodo per copiare i file nel computer remoto. Può essere "rsync" o "sftp".
- `remoteCMakeListsRoot`: specifica la directory nel computer remoto che contiene il progetto CMake. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifica la directory nel computer remoto in cui CMake genera gli script di compilazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifica la directory nel computer remoto in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}` e `${env.VARIABLE}` dove `VARIABLE` è una variabile di ambiente definita a livello di sistema, utente o sessione.
- `remoteCopySources`: `boolean` che specifica se Visual Studio deve copiare i file di origine nel computer remoto. Il valore predefinito è true. Impostare su false se la sincronizzazione dei file viene gestita in modo autonomo.
- `remoteCopyBuildOutput`: `boolean` che specifica se copiare gli output di compilazione dal sistema remoto.
- `rsyncCommandArgs`: specifica un set di opzioni della riga di comando aggiuntive passate a rsync.
- `remoteCopySourcesExclusionList`: `array` che specifica un elenco di percorsi da escludere durante la copia dei file di origine. Un percorso può essere il nome di un file o di una directory oppure un percorso relativo alla radice della copia. È possibile usare i caratteri jolly \\\"*\\\" e \\\"?\\\" per i criteri di ricerca GLOB.
- `cmakeExecutable`: specifica il percorso completo dell'eseguibile del programma CMake, inclusi il nome file e l'estensione.
- `remotePreGenerateCommand`: specifica il comando da eseguire prima di CMake per analizzare il file CMakeLists.txt.
- `remotePrebuildCommand`: specifica il comando da eseguire nel computer remoto prima della compilazione.
- `remotePostbuildCommand`: specifica il comando da eseguire nel computer remoto dopo la compilazione.
- `variables`: `array` che specifica le variabili passate a CMake come -Dname1=value1 -Dname2=value2 e così via. 


