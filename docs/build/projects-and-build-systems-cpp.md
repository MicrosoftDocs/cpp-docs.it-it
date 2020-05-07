---
title: Progetti C/C++ e sistemi di compilazione in Visual Studio
ms.description: Use Visual Studio to compile and build C++ projects for Windows, ARM or Linux based on any project system.
ms.date: 07/17/2019
helpviewer_keywords:
- builds [C++]
- C++ projects, building
- projects [C++], building
- builds [C++], options
- C++, build options
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
ms.topic: overview
ms.openlocfilehash: 3d82ac4569e06a4472047a79da60032ad2db43ca
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078464"
---
# <a name="cc-projects-and-build-systems-in-visual-studio"></a>Progetti C/C++ e sistemi di compilazione in Visual Studio

È possibile usare Visual Studio per modificare, compilare e compilare qualsiasi codebase C++ con il supporto completo di IntelliSense senza dover convertire tale codice in un progetto di Visual Studio o compilarlo con il set di strumenti MSVC. Ad esempio, è possibile modificare un progetto CMake multipiattaforma in Visual Studio in un computer Windows, quindi compilarlo per Linux usando g + + in un computer Linux remoto.

## <a name="c-compilation"></a>Compilazione C++

Per *compilare un programma* C++, è necessario compilare il codice sorgente da uno o più file e quindi collegare tali file in un file eseguibile (con estensione exe), una libreria con caricamento dinamico (. dll) o una libreria statica (. lib).

La compilazione C++ di base prevede tre passaggi principali:

- Il preprocessore C++ trasforma tutte le definizioni di #directives e macro in ogni file di origine. Verrà creata un' *unità di conversione*.
- Il compilatore C++ compila ogni unità di conversione in file oggetto (. obj), applicando tutte le opzioni del compilatore impostate.
- Il *linker* unisce i file oggetto in un unico eseguibile, applicando le opzioni del linker impostate.

## <a name="the-msvc-toolset"></a>Set di strumenti MSVC

Il compilatore Microsoft C++, il linker, le librerie standard e le utilità correlate comprendono il set di strumenti del compilatore MSVC, detto anche "strumenti di compilazione". Sono incluse in Visual Studio. È anche possibile scaricare e usare il set di strumenti come pacchetto autonomo gratuitamente dal [percorso di download degli strumenti di compilazione per Visual Studio 2019](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019).

È possibile compilare programmi semplici richiamando il compilatore MSVC (cl. exe) direttamente dalla riga di comando. Il comando seguente accetta un solo file di codice sorgente e richiama cl. exe per compilare un eseguibile denominato *Hello. exe*:

```cmd
cl /EHsc hello.cpp
```

Si noti che qui il compilatore (cl. exe) richiama automaticamente il preprocessore C++ e il linker per produrre il file di output finale.  Per ulteriori informazioni, vedere [compilazione dalla riga di comando](building-on-the-command-line.md).

## <a name="build-systems-and-projects"></a>Sistemi e progetti di compilazione

La maggior parte dei programmi reali usa un tipo di *sistema di compilazione* per gestire le complessità della compilazione di più file di origine per più configurazioni (ad esempio, debug e versione), più piattaforme (x86, x64, ARM e così via), procedure di compilazione personalizzate e anche più file eseguibili che devono essere compilati in un determinato ordine. Le impostazioni vengono apportate in un file di configurazione della compilazione e il sistema di compilazione lo accetta come input prima di richiamare il compilatore. Il set di file di codice sorgente e i file di configurazione della build necessari per compilare un file eseguibile è denominato *progetto*.

L'elenco seguente mostra varie opzioni per i progetti di Visual Studio-C++:

- creare un progetto di Visual Studio usando l'IDE di Visual Studio e configurarlo usando le pagine delle proprietà. I progetti di Visual Studio producono programmi eseguibili in Windows. Per una panoramica, vedere [compilazione e compilazione](/visualstudio/ide/compiling-and-building-in-visual-studio) nella documentazione di Visual Studio.

- aprire una cartella che contiene un file CMakeLists. txt. Il supporto di CMake è integrato in Visual Studio. È possibile usare l'IDE per modificare, testare ed eseguire il debug senza modificare in alcun modo i file CMake. Questo consente di lavorare nello stesso progetto CMake degli altri utenti che potrebbero usare editor diversi. CMake è l'approccio consigliato per lo sviluppo multipiattaforma. Per altre informazioni, vedere [progetti CMake](cmake-projects-in-visual-studio.md).

- aprire una cartella separata dei file di origine senza file di progetto. Visual Studio userà l'euristica per compilare i file. Si tratta di un modo semplice per compilare ed eseguire applicazioni console di piccole dimensioni. Per altre informazioni, vedere [progetti di cartelle aperte](open-folder-projects-cpp.md).

- aprire una cartella che contiene un makefile o qualsiasi altro file di configurazione del sistema di compilazione. È possibile configurare Visual Studio per richiamare qualsiasi comando di compilazione arbitraria aggiungendo file JSON alla cartella. Per altre informazioni, vedere [progetti di cartelle aperte](open-folder-projects-cpp.md).

- Aprire un makefile di Windows in Visual Studio. Per ulteriori informazioni, vedere [riferimento a NMAKE](reference/nmake-reference.md).

## <a name="msbuild-from-the-command-line"></a>MSBuild dalla riga di comando

È possibile richiamare MSBuild dalla riga di comando passandogli un file con estensione vcxproj insieme alle opzioni della riga di comando. Questo approccio richiede una conoscenza corretta di MSBuild ed è consigliato solo quando è strettamente necessario. Per ulteriori informazioni, vedere [MSBuild](msbuild-visual-cpp.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Progetti di Visual Studio](creating-and-managing-visual-cpp-projects.md) Come creare, configurare e compilare progetti C++ in Visual Studio usando il relativo sistema di compilazione nativo (MSBuild).

[Progetti CMake](cmake-projects-in-visual-studio.md) Come codificare, compilare e distribuire progetti CMake in Visual Studio.

[Apri progetti cartella](open-folder-projects-cpp.md) Come usare Visual Studio per scrivere codice, compilare e distribuire progetti C++ in base a qualsiasi sistema di compilazione arbitrario o a nessun sistema di compilazione. Per niente.

[Build di rilascio](release-builds.md) Come creare e risolvere i problemi relativi alle build di rilascio ottimizzate per la distribuzione agli utenti finali.

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)<br/>
Viene illustrato come usare il compilatore C/C++ e gli strumenti di compilazione direttamente dalla riga di comando, anziché usare l'IDE di Visual Studio.

[Creazione di dll in Visual Studio](dlls-in-visual-cpp.md) Come creare, eseguire il debug e distribuire dll C/C++ (librerie condivise) in Visual Studio.

[Procedura dettagliata: creazione e utilizzo di una libreria statica](walkthrough-creating-and-using-a-static-library-cpp.md) Come creare un file binario con estensione LIB.

[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md) Viene descritto il modello di distribuzione per le applicazioni desktop di Windows, in base al concetto di applicazioni isolate e assembly affiancati.

[Configurare progetti C++ per destinazioni x64 a 64 bit](configuring-programs-for-64-bit-visual-cpp.md) Come destinare hardware a 64 bit x64 con gli strumenti di compilazione MSVC.

[Configurare progetti C++ per processori ARM](configuring-programs-for-arm-processors-visual-cpp.md) Come usare gli strumenti di compilazione di MSVC per l'hardware ARM.

[Ottimizzazione del codice](optimizing-your-code.md) Come ottimizzare il codice in diversi modi, incluse le ottimizzazioni guidate dal programma.

[Configurazione di programmi per Windows XP](configuring-programs-for-windows-xp.md) Come definire come destinazione Windows XP con gli strumenti di compilazione di MSVC.

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)<br/>
Vengono forniti collegamenti ad articoli di riferimento sulla compilazione di programmi in C++, sulle opzioni del compilatore e del linker e su vari strumenti di compilazione.
