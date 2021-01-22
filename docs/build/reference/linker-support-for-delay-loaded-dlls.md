---
description: 'Altre informazioni su: supporto del linker per le dll a caricamento ritardato'
title: Supporto per le DLL a caricamento ritardato nel linker
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, linker support
ms.openlocfilehash: 9ae1e2c68ed59e742493a9098d98fc35d5f2a7c7
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667282"
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker

Il linker MSVC supporta il caricamento ritardato delle dll. Questa funzionalità consente di evitare la necessità di utilizzare le funzioni di Windows SDK `LoadLibrary` e `GetProcAddress` di implementare il caricamento ritardato delle dll.

Senza il caricamento posticipato, l'unico modo per caricare una DLL in fase di esecuzione è tramite `LoadLibrary` e `GetProcAddress` ; il sistema operativo carica la dll quando viene caricato il file eseguibile o la dll che lo utilizza.

Con il caricamento ritardato, quando si collega in modo implicito una DLL, il linker fornisce le opzioni per ritardare il caricamento della DLL fino a quando il programma non chiama una funzione in tale DLL.

Un'applicazione può ritardare il caricamento di una DLL usando l'opzione del linker [ `/DELAYLOAD` (importazione a caricamento ritardato)](delayload-delay-load-import.md) con una funzione helper. (L'implementazione di una funzione di supporto predefinita viene fornita da Microsoft). La funzione helper carica la DLL su richiesta in fase di esecuzione chiamando `LoadLibrary` e `GetProcAddress` per l'utente.

Provare a ritardare il caricamento di una DLL se:

- È possibile che il programma non chiami una funzione nella DLL.

- Una funzione nella DLL potrebbe non essere chiamata fino alla fine dell'esecuzione del programma.

Il caricamento ritardato di una DLL può essere specificato durante la compilazione di un progetto EXE o DLL. Un progetto di DLL che ritarda il caricamento di una o più dll non deve chiamare un punto di ingresso a caricamento ritardato in `DllMain` .

Gli articoli seguenti descrivono il caricamento ritardato delle dll:

- [Specificare le dll per ritardare il caricamento](specifying-dlls-to-delay-load.md)

- [Scarica in modo esplicito una DLL a caricamento ritardato](explicitly-unloading-a-delay-loaded-dll.md)

- [Carica tutte le importazioni per una DLL a caricamento ritardato](loading-all-imports-for-a-delay-loaded-dll.md)

- [Associare le importazioni a caricamento ritardato](binding-imports.md)

- [Gestione e notifica degli errori](error-handling-and-notification.md)

- [Dump di importazioni a caricamento ritardato](dumping-delay-loaded-imports.md)

- [Vincoli delle DLL a caricamento ritardato](constraints-of-delay-loading-dlls.md)

- [Informazioni sulla funzione helper](understanding-the-helper-function.md)

- [Sviluppare una funzione helper personalizzata](developing-your-own-helper-function.md)

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)
