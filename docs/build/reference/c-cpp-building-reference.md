---
title: Riferimenti alla compilazione in C/C++ - Visual Studio
description: Contenuto di riferimento per C/C++ del sistema del progetto e compilare strumenti in Visual Studio.
ms.date: 05/06/2019
helpviewer_keywords:
- compiling source code [C++], additional information
- cl.exe compiler [C++], building programs
- linker [C++], building reference
- builds [C++], additional information
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
ms.openlocfilehash: abe946ce516e915cd597a0f863c5949fed212bfa
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221450"
---
# <a name="cc-building-reference"></a>Riferimenti alla compilazione in C/C++

Visual Studio fornisce due metodi di creazione di una C /C++ programma. Il modo più semplice (e più comune) è [compilazione nell'IDE di Visual Studio](../creating-and-managing-visual-cpp-projects.md). L'altro consiste nel [al prompt dei comandi utilizzando gli strumenti da riga di comando di compilazione](../building-on-the-command-line.md). In entrambi i casi, è possibile creare e modificare i file di origine usando Visual Studio o in un editor di terze parti di propria scelta.

## <a name="in-this-section"></a>In questa sezione

[Informazioni di riferimento su MSBuild per i progetti C++](msbuild-visual-cpp-overview.md)

[Informazioni di riferimento sul compilatore MSVC](compiling-a-c-cpp-program.md)<br/>
Descrive il compilatore MSVC, che crea un file di oggetto contenenti codice macchina, direttive del linker, sezioni, i riferimenti esterni e i nomi di funzione/dati.

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
Viene descritto il linker, che combina il codice dai file di oggetto creati dal compilatore e librerie collegate in modo statico, risolve i riferimenti al nome e crea un file eseguibile.

[Supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md)

[Strumenti di compilazione MSVC aggiuntive](c-cpp-build-tools.md)<br/>
Strumenti da riga di comando aggiuntivi per C++.

[Errori di compilazione in C/C++](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)<br/>
Introduce la sezione degli errori di compilazione nella tabella dei contenuti.

## <a name="related-sections"></a>Sezioni correlate

[Riferimenti al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md)<br/>
Viene descritto il preprocessore, che prepara i file di origine per il compilatore converte le macro, operatori e direttive.

[Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../understanding-custom-build-steps-and-build-events.md)<br/>
Viene descritto come personalizzare il processo di compilazione.

[Compilazione di programmi C/C++](../projects-and-build-systems-cpp.md)<br/>
Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
Descrive l'impostazione delle opzioni del compilatore nell'ambiente di sviluppo o nella riga di comando.

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
Vengono forniti collegamenti ad argomenti che descrivono l'utilizzo delle opzioni del compilatore.

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
Descrive le opzioni del linker impostazione all'interno o all'esterno dell'ambiente di sviluppo integrato.

[Opzioni del linker MSVC](linker-options.md)<br/>
Vengono forniti collegamenti ad argomenti che descrivono l'utilizzo delle opzioni del linker.

[Riferimento a BSCMAKE](bscmake-reference.md)<br/>
Viene descritta l'utilità di manutenzione di Microsoft Browse Information (BSCMAKE. EXE), con cui è possibile generare un file di informazioni (BSC) dai SBR file creati durante la compilazione.

[Riferimento a LIB](lib-reference.md)<br/>
Descrive la gestione di Microsoft della libreria (LIB.exe), che crea e gestisce una libreria di file oggetto File formato COFF (Common Object).

[Riferimento a EDITBIN](editbin-reference.md)<br/>
Viene descritto l'Editor di File di Microsoft COFF Binary (EDITBIN. Con estensione EXE), che modifica i file binari File formato COFF (Common Object).

[Riferimento a DUMPBIN](dumpbin-reference.md)<br/>
Viene descritto il Microsoft COFF Binary File Dumper (DUMPBIN. Con estensione EXE), che visualizza informazioni sui file binari File formato COFF (Common Object).

[Riferimenti a NMAKE](nmake-reference.md)<br/>
Descrive Microsoft Program Maintenance Utility (NMAKE. Con estensione EXE), ovvero uno strumento che consente di compilare progetti basati su contenuti in un file di descrizione comandi.
