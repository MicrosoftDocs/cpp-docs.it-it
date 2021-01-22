---
description: Altre informazioni sullo scaricamento di una DLL a caricamento ritardato
title: Scarica una DLL a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.openlocfilehash: 2ac898d56609ebb3aadc57ea8df00fa63fcbc3f0
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667244"
---
# <a name="unload-a-delay-loaded-dll"></a>Scarica una DLL a caricamento ritardato

L'helper di caricamento ritardato predefinito verifica se i descrittori di caricamento ritardato hanno un puntatore e una copia della tabella di indirizzi di importazione originale (IAT) nel `pUnloadIAT` campo. In tal caso, l'helper salva un puntatore in un elenco nel descrittore di ritardo dell'importazione. Questa voce consente alla funzione helper di trovare la DLL in base al nome, per supportare lo scaricamento esplicito della DLL.

Di seguito sono riportate le strutture e le funzioni associate per lo scaricamento esplicito di una DLL a caricamento ritardato:

```cpp
//
// Unload support from delayimp.h
//

// routine definition; takes a pointer to a name to unload

ExternC
BOOL WINAPI
__FUnloadDelayLoadedDLL2(LPCSTR szDll);

// structure definitions for the list of unload records
typedef struct UnloadInfo * PUnloadInfo;
typedef struct UnloadInfo {
    PUnloadInfo     puiNext;
    PCImgDelayDescr pidd;
    } UnloadInfo;

// from delayhlp.cpp
// the default delay load helper places the unloadinfo records in the
// list headed by the following pointer.
ExternC
PUnloadInfo __puiHead;
```

La `UnloadInfo` struttura viene implementata usando una classe C++ che usa le `LocalAlloc` `LocalFree` implementazioni e `operator new` come `operator delete` rispettivamente e. Queste opzioni vengono mantenute in un elenco collegato standard che utilizza `__puiHead` come inizio dell'elenco.

Quando si chiama `__FUnloadDelayLoadedDLL` , tenta di trovare il nome fornito nell'elenco delle DLL caricate. È necessaria una corrispondenza esatta. Se viene trovato, la copia della tabella IAT in `pUnloadIAT` viene copiata nella parte superiore della tabella IAT in esecuzione per ripristinare i puntatori del thunk. Quindi, la libreria viene liberata usando `FreeLibrary` , il `UnloadInfo` record corrispondente viene scollegato dall'elenco ed eliminato e `TRUE` viene restituito.

L'argomento della funzione `__FUnloadDelayLoadedDLL2` fa distinzione tra maiuscole e minuscole. Ad esempio, specificare:

```cpp
__FUnloadDelayLoadedDLL2("user32.dll");
```

e non:

```cpp
__FUnloadDelayLoadedDLL2("User32.DLL");.
```

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
