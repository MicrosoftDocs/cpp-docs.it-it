---
title: Riferimenti alla compilazione in C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- compiling source code [C++], additional information
- cl.exe compiler [C++], building programs
- linker [C++], building reference
- builds [C++], additional information
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
ms.openlocfilehash: 36f261ee993932d1a08d5cdb02e2d4681ae60f0c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481731"
---
# <a name="cc-building-reference"></a>Riferimenti alla compilazione in C/C++

Visual C++ fornisce due modalità di creazione di un programma C/C++. Il modo più semplice (e più comune) è [compilazione all'interno dell'ambiente di sviluppo di Visual C++](../../ide/building-cpp-projects-in-visual-studio.md). L'altro consiste nel [al prompt dei comandi utilizzando gli strumenti da riga di comando di compilazione](../../build/building-on-the-command-line.md). In entrambi i casi, è possibile creare i file di origine usando l'editor di origine Visual C++ o un editor di terze parti di propria scelta.

Se il programma Usa un makefile anziché un file con estensione vcxproj, è comunque possibile compilarlo nell'ambiente di sviluppo come un [progetto esterno](../../ide/building-external-projects.md).

## <a name="in-this-section"></a>In questa sezione

[Compilazione di un programma C/C++](../../build/reference/compiling-a-c-cpp-program.md)<br/>
Descrive il compilatore, che crea un file di oggetto contenenti codice macchina, direttive del linker, sezioni, i riferimenti esterni e i nomi di funzione/dati.

[Collegamento](../../build/reference/linking.md)<br/>
Viene descritto il linker, che combina il codice dai file di oggetto creati dal compilatore e librerie collegate in modo statico, risolve i riferimenti al nome e crea un file eseguibile.

[Build di versione](../../build/reference/release-builds.md)<br/>
Vengono fornite informazioni su perché e quando si passa da un debug da compilazione a una build di rilascio e inoltre illustra alcuni dei problemi che possono verificarsi durante la modifica da debug a una build di rilascio.

[Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)<br/>
Vengono forniti collegamenti ad argomenti che illustrano i meccanismi di ottimizzazione del codice:

[Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)<br/>
Fornisce gli strumenti da riga di comando seguenti per la visualizzazione o la modifica dell'output di compilazione:

[Errori di compilazione in C/C++](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)<br/>
Introduce la sezione degli errori di compilazione nella tabella dei contenuti.

## <a name="related-sections"></a>Sezioni correlate

[Riferimenti al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md)<br/>
Viene descritto il preprocessore, che prepara i file di origine per il compilatore converte le macro, operatori e direttive.

[Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md)<br/>
Viene descritto come personalizzare il processo di compilazione.

[Compilazione di programmi C/C++](../../build/building-c-cpp-programs.md)<br/>
Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
Descrive l'impostazione delle opzioni del compilatore nell'ambiente di sviluppo o nella riga di comando.

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
Vengono forniti collegamenti ad argomenti che descrivono l'utilizzo delle opzioni del compilatore.

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
Descrive le opzioni del linker impostazione all'interno o all'esterno dell'ambiente di sviluppo integrato.

[Opzioni del linker](../../build/reference/linker-options.md)<br/>
Vengono forniti collegamenti ad argomenti che descrivono l'utilizzo delle opzioni del linker.

[Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)<br/>
Viene descritta l'utilità di manutenzione di Microsoft Browse Information (BSCMAKE. EXE), con cui è possibile generare un file di informazioni (BSC) dai SBR file creati durante la compilazione.

[Riferimento a LIB](../../build/reference/lib-reference.md)<br/>
Descrive la gestione di Microsoft della libreria (LIB.exe), che crea e gestisce una libreria di file oggetto File formato COFF (Common Object).

[Riferimento a EDITBIN](../../build/reference/editbin-reference.md)<br/>
Viene descritto l'Editor di File di Microsoft COFF Binary (EDITBIN. Con estensione EXE), che modifica i file binari File formato COFF (Common Object).

[Riferimento a DUMPBIN](../../build/reference/dumpbin-reference.md)<br/>
Viene descritto il Microsoft COFF Binary File Dumper (DUMPBIN. Con estensione EXE), che visualizza informazioni sui file binari File formato COFF (Common Object).

[Riferimenti a NMAKE](../../build/nmake-reference.md)<br/>
Descrive Microsoft Program Maintenance Utility (NMAKE. Con estensione EXE), ovvero uno strumento che consente di compilare progetti basati su contenuti in un file di descrizione comandi.