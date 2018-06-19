---
title: Riferimenti alla compilazione in C/C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- compiling source code [C++], additional information
- cl.exe compiler [C++], building programs
- linker [C++], building reference
- builds [C++], additional information
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2d26f729f660b3e51677303bb91b99e665a1a950
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375484"
---
# <a name="cc-building-reference"></a>Riferimenti alla compilazione in C/C++
Visual C++ fornisce due modalità di creazione di un programma C/C++. Il modo più semplice (e più comune) è [compilazione all'interno dell'ambiente di sviluppo di Visual C++](../../ide/building-cpp-projects-in-visual-studio.md). L'altro consiste nel [da un prompt dei comandi utilizzando gli strumenti da riga di comando di compilazione](../../build/building-on-the-command-line.md). In entrambi i casi, è possibile creare i file di origine utilizzando l'editor di origine Visual C++ o in un editor di terze parti di propria scelta.  
  
 Se il programma utilizza un makefile anziché un file con estensione vcxproj, è ancora possibile compilarlo nell'ambiente di sviluppo come un [progetto esterno](../../ide/building-external-projects.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Compilazione di un programma C/C++](../../build/reference/compiling-a-c-cpp-program.md)  
 Viene descritto il compilatore, che crea un file oggetto contenente codice macchina, direttive del linker, sezioni, i riferimenti esterni e i nomi di funzione/dati.  
  
 [Collegamento](../../build/reference/linking.md)  
 Viene descritto il linker, che combina codice dai file di oggetto creati dal compilatore e librerie collegate staticamente, risolve i riferimenti al nome e crea un file eseguibile.  
  
 [Build di versione](../../build/reference/release-builds.md)  
 Vengono fornite informazioni su perché e quando si desidera modificare dal debug di compilazione per una build di rilascio e illustra anche alcuni dei problemi che possono verificarsi durante il passaggio da un debug a una build di rilascio.  
  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)  
 Vengono forniti collegamenti ad argomenti che illustrano i meccanismi di ottimizzazione del codice:  
  
 [Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)  
 Fornisce i seguenti strumenti da riga di comando per la visualizzazione o la modifica dell'output di compilazione:  
  
 [Errori di compilazione in C/C++](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)  
 Introduce la sezione degli errori di compilazione nella tabella del contenuto.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Riferimenti al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md)  
 Viene illustrato il preprocessore, che prepara i file di origine per il compilatore traducendo macro, operatori e direttive.  
  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md)  
 Viene descritto come personalizzare il processo di compilazione.  
  
 [Creazione di un programma C/C++](../../build/building-c-cpp-programs.md)  
 Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.  
  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
 Descrive l'impostazione delle opzioni del compilatore nell'ambiente di sviluppo o della riga di comando.  
  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)  
 Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo delle opzioni del compilatore.  
  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
 Descrive l'impostazione delle opzioni del linker all'interno o all'esterno dell'ambiente di sviluppo integrato.  
  
 [Opzioni del linker](../../build/reference/linker-options.md)  
 Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo delle opzioni del linker.  
  
 [Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)  
 Viene descritta l'utilità di manutenzione di Microsoft Browse Information (BSCMAKE. Con estensione EXE), che genera un file di informazioni di visualizzazione (BSC) da SBR creati durante la compilazione di file.  
  
 [Riferimento a LIB](../../build/reference/lib-reference.md)  
 Descrive la gestione della libreria Microsoft (LIB.exe), che crea e gestisce una raccolta di file oggetto comune oggetto formato COFF (File).  
  
 [Riferimento a EDITBIN](../../build/reference/editbin-reference.md)  
 Viene descritto l'Editor di File di Microsoft COFF Binary (EDITBIN. Con estensione EXE), che modifica i file binari comuni oggetto formato COFF (File).  
  
 [Riferimento a DUMPBIN](../../build/reference/dumpbin-reference.md)  
 Viene descritto il Microsoft COFF Binary File Dumper (DUMPBIN. EXE), che visualizza informazioni sui file binari comuni oggetto formato COFF (File).  
  
 [Riferimenti a NMAKE](../../build/nmake-reference.md)  
 Viene descritto Microsoft Program Maintenance Utility (NMAKE. Con estensione EXE), che è uno strumento che consente di compilare progetti in base ai contenuti in un file di descrizione comandi.