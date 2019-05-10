---
title: I progetti C/C++ e i sistemi di compilazione in Visual Studio
ms.description: Use Visual Studio to compile and build C++ projects for Windows, ARM or Linux based on any project system.
ms.date: 05/06/2019
helpviewer_keywords:
- builds [C++]
- C++ projects, building
- projects [C++], building
- builds [C++], options
- C++, build options
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
ms.openlocfilehash: b345517bb1202030c9d512d16e80484feb4ba737
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220365"
---
# <a name="cc-projects-and-build-systems-in-visual-studio"></a>I progetti C/C++ e i sistemi di compilazione in Visual Studio

È possibile usare Visual Studio 2017 per modificare, compilare e creare qualsiasi codebase C++ con il supporto IntelliSense completo senza la necessità di convertire tale codice in un progetto di Visual Studio o di compilazione con il set di strumenti MSVC. Ad esempio, è possibile modificare un progetto CMake multipiattaforma in Visual Studio in un computer Windows, quindi compilarlo per Linux con g + + in un computer Linux remoto.

## <a name="c-compilation"></a>Compilazione di C++

Per *compilazione* significa che un programma C++ compilare codice sorgente da uno o più file e quindi collegare tali file in un file eseguibile (.exe), una libreria di caricamento dinamico (DLL) o una libreria statica (lib). 

Compilazione di base C++ comporta tre passaggi principali:

- Il preprocessore C++ Trasforma tutte le definizioni di macro e #directives in ogni file di origine. Ciò consente di creare un *unità di conversione*.
- Il compilatore C++ consente di compilare ogni unità di conversione in file oggetto (obj), applicazione di tutte le opzioni del compilatore sono state impostate.
- Il *linker* unisce i file oggetto in un unico file eseguibile, applicando le opzioni dei linker che sono state impostate. 

## <a name="the-msvc-toolset"></a>Il set di strumenti MSVC

Microsoft C++ compilatore, linker, le librerie standard e utilità correlate costituiscono il set di strumenti del compilatore MSVC (detto anche una toolchain o "strumenti di compilazione"). Questi sono inclusi in Visual Studio. È anche possibile scaricare e usare il set di strumenti come pacchetto autonomo gratuito dal [percorso di download di Build Tools per Visual Studio 2017](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2017).

È possibile creare semplici programmi richiamando il compilatore MSVC (cl.exe) direttamente dalla riga di comando. Il comando seguente accetta un file di codice di origine singolo e richiama cl.exe per compilare un file eseguibile denominato *hello.exe*: 

```cmd
cl /EHsc hello.cpp
```
Si noti che qui (cl.exe) il compilatore richiama automaticamente il preprocessore C++ e il linker per produrre il file di output finale.  Per altre informazioni, vedere [compilazione dalla riga di comando di](building-on-the-command-line.md).

## <a name="build-systems-and-projects"></a>Compilare progetti e i sistemi

La maggior parte dei programmi del mondo reale utilizzano alcuni tipi di *sistema di compilazione* per la gestione delle complessità della compilazione di più file di origine per le configurazioni multiple (ad esempio debug e rilascio), più piattaforme (x86, x64, ARM, e così via), compilazione personalizzata i passaggi e anche di creare più file eseguibili che devono essere compilati in un determinato ordine. Si apportano le impostazioni in un file di configurazione di compilazione e il sistema di compilazione accetta tale file come input prima che richiama il compilatore. Il set di file del codice sorgente e file di configurazione di compilazione necessari per compilare un file eseguibile viene chiamato un *progetto*. 

Nell'elenco seguente illustra diverse opzioni per progetti di Visual Studio - C++:

- creare un progetto di Visual Studio usando l'IDE di Visual Studio e configurarlo con le pagine delle proprietà. Progetti di Visual Studio producono i programmi eseguiti su Windows. Per una panoramica, vedere [compilazione e creazione](/visualstudio/ide/compiling-and-building-in-visual-studio) nella documentazione di Visual Studio.

- Aprire una cartella che contiene un file cmakelists. txt. Supporto per CMake è integrato in Visual Studio. È possibile usare l'IDE di modifica, test e debug senza modificare i file di CMake in alcun modo. In questo modo è possibile lavorare nello stesso progetto CMake come altri utenti che potrebbe usare diversi editor. CMake è l'approccio consigliato per lo sviluppo multipiattaforma. Per altre informazioni, vedere [progetti CMake](cmake-projects-in-visual-studio.md).
 
- Aprire una cartella di file di origine separata senza file di progetto. Visual Studio utilizzerà l'euristica per la creazione dei file. Questo è un modo semplice per compilare ed eseguire le applicazioni console di piccole dimensioni. Per altre informazioni, vedere [progetti Apri cartella](open-folder-projects-cpp.md).

- Aprire una cartella che contiene un makefile, o qualsiasi altro file configurazione sistema di compilazione. È possibile configurare Visual Studio per richiamare i comandi di compilazione arbitraria aggiungendo i file JSON nella cartella. Per altre informazioni, vedere [progetti Apri cartella](open-folder-projects-cpp.md).
 
- Aprire un makefile di Windows in Visual Studio. Per altre informazioni, vedere [riferimenti a NMAKE](reference/nmake-reference.md).

## <a name="msbuild-from-the-command-line"></a>MSBuild dalla riga di comando 

È possibile richiamare MSBuild dalla riga di comando mediante il passaggio di un file con estensione vcxproj insieme le opzioni della riga di comando. Questo approccio richiede una buona conoscenza di MSBuild ed è consigliato solo se assolutamente necessario. Per altre informazioni, vedere [MSBuild](msbuild-visual-cpp.md).

## <a name="in-this-section"></a>In questa sezione

[Progetti di Visual Studio](creating-and-managing-visual-cpp-projects.md) come creare, configurare e compilare C++ progetti in Visual Studio usando nativo (MSBuild) di sistema di compilazione.

[Progetti CMake](cmake-projects-in-visual-studio.md) come codice, compilare e distribuire progetti CMake in Visual Studio.

[Aprire i progetti di cartella](open-folder-projects-cpp.md) come usare Visual Studio code, creare e distribuire i progetti C++ in base a qualsiasi sistema di compilazione arbitraria o nessun sistema di compilazione. Per niente. 

[Build di rilascio](release-builds.md) come creare e risolvere i problemi con ottimizzazione per la versione build per la distribuzione agli utenti finali.

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)<br/>
Viene illustrato come usare il compilatore C/C++ e compilare strumenti direttamente dalla riga di comando anziché usare l'IDE di Visual Studio.

[Creazione di DLL in Visual Studio](dlls-in-visual-cpp.md) come creare, eseguire il debug e distribuire le DLL di C/C++ (librerie condivise) in Visual Studio.

[Procedura dettagliata: Creazione e utilizzo di una libreria statica](walkthrough-creating-and-using-a-static-library-cpp.md) come creare un file binario con estensione LIB.

[Creazione di applicazioni isolate C/C++ e assembly Side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md) descrive il modello di distribuzione per le applicazioni Desktop di Windows, basato sui concetti di applicazioni isolate e assembly side-by-side.

[Configurare i progetti C++ a 64 bit x64 destinazioni](configuring-programs-for-64-bit-visual-cpp.md) come destinazione x64 a 64 bit hardware con le MSVC strumenti di compilazione.

[Configurare i progetti C++ per processori ARM](configuring-programs-for-arm-processors-visual-cpp.md) come usare gli strumenti di compilazione MSVC riferimento a hardware ARM.

[Ottimizzazione del codice](optimizing-your-code.md) come ottimizzare il codice in diversi modi, tra cui le ottimizzazioni PGO programma.

[Configurazione di programmi per Windows XP](configuring-programs-for-windows-xp.md) come destinazione gli strumenti di compilazione di Windows XP con di MSVC.

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)<br/>
Vengono forniti collegamenti ad articoli di riferimento sulla compilazione di programmi in C++, sulle opzioni del compilatore e del linker e su vari strumenti di compilazione.
