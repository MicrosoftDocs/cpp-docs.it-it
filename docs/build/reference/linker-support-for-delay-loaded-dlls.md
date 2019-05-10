---
title: Supporto per le DLL a caricamento ritardato nel linker
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, linker support
ms.assetid: b2d7e449-2809-42b1-9c90-2c0ca5e31a14
ms.openlocfilehash: 384ea563853906a76e2c9993cbcedb3b15c354f2
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65217596"
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker

Il linker MSVC ora supporta il caricamento ritardato di DLL. Ciò elimina la necessità di usare le funzioni di Windows SDK **LoadLibrary** e **GetProcAddress** per implementare il caricamento ritardato di DLL.

Prima di Visual C++ 6.0, è l'unico modo per caricare una DLL in fase di esecuzione tramite **LoadLibrary** e **GetProcAddress**; il sistema operativo carica la DLL quando il file eseguibile o DLL tramite cui è stata caricata.

A partire da Visual C++ 6.0, quando si collegano in modo implicito con una DLL, il linker offre opzioni di ritardo del caricamento della DLL fino a quando il programma chiama una funzione nella DLL.

Un'applicazione può ritardare caricare una DLL mediante il [/DELAYLOAD (importazione a caricamento ritardato)](delayload-delay-load-import.md) l'opzione del linker con una funzione di supporto (implementazione predefinita fornita da Visual C++). La funzione di supporto verrà caricato la DLL in fase di esecuzione chiamando **LoadLibrary** e **GetProcAddress** automaticamente.

È necessario considerare se una DLL a caricamento ritardato:

- Il programma non può chiamare una funzione nella DLL.

- Una funzione nella DLL può essere chiamata fino a quando non in ritardo nell'esecuzione del programma.

Il caricamento ritardato di una DLL può essere specificato durante la compilazione di una. File EXE o. Progetto DLL. OGGETTO. Progetto DLL che ritarda il caricamento di una o più DLL non stesso chiami un punto di ingresso a caricamento ritardato in Dllmain.

Gli argomenti seguenti descrivono le DLL a caricamento ritardato:

- [Specifica delle DLL per il caricamento ritardato](specifying-dlls-to-delay-load.md)

- [Scaricamento esplicito di una DLL a caricamento ritardato](explicitly-unloading-a-delay-loaded-dll.md)

- [Caricamento di tutte le importazioni per una DLL a caricamento ritardato](loading-all-imports-for-a-delay-loaded-dll.md)

- [Associazione di importazioni](binding-imports.md)

- [Gestione e notifica degli errori](error-handling-and-notification.md)

- [Dump delle importazioni a caricamento ritardato](dumping-delay-loaded-imports.md)

- [Vincoli delle DLL a caricamento ritardato](constraints-of-delay-loading-dlls.md)

- [Informazioni sulla funzione di supporto](understanding-the-helper-function.md)

- [Sviluppo di una funzione di supporto personalizzata](developing-your-own-helper-function.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)
