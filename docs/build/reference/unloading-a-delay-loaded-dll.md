---
description: 'Altre informazioni su: scaricamento di una DLL di Delay-Loaded'
title: Scaricamento di una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 6463bc71-020e-4aff-a4ca-90360411c54e
ms.openlocfilehash: fd733bfa02a6d90eecb1b617288d368d33766282
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178940"
---
# <a name="unloading-a-delay-loaded-dll"></a>Scaricamento di una DLL a caricamento ritardato

L'helper per il caricamento ritardato fornito da Default verifica se i descrittori di caricamento ritardato hanno un puntatore e una copia della tabella di indirizzi di importazione originale (IAT) nel campo pUnloadIAT. In tal caso, verrà salvato un puntatore in un elenco nel descrittore di ritardo dell'importazione. Ciò consente alla funzione helper di trovare la DLL in base al nome per supportare lo scaricamento esplicito della DLL.

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

La struttura UnloadInfo viene implementata usando una classe C++ che usa le implementazioni **LocalAlloc** e **LocalFree** rispettivamente come operatore **`new`** e operatore **`delete`** . Queste opzioni vengono mantenute in un elenco collegato standard usando __puiHead come inizio dell'elenco.

Se si chiama __FUnloadDelayLoadedDLL si tenterà di trovare il nome fornito nell'elenco delle DLL caricate, ovvero è necessaria una corrispondenza esatta. Se viene trovato, la copia della tabella IAT in pUnloadIAT viene copiata nella parte superiore della tabella IAT in esecuzione per ripristinare i puntatori del thunk, la libreria viene liberata con **FreeLibrary**, il record **UnloadInfo** corrispondente viene scollegato dall'elenco ed eliminato e viene restituito true.

L'argomento per la funzione __FUnloadDelayLoadedDLL2 fa distinzione tra maiuscole e minuscole. Ad esempio, specificare:

```cpp
__FUnloadDelayLoadedDLL2("user32.DLL");
```

e non:

```cpp
__FUnloadDelayLoadedDLL2("User32.DLL");.
```

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione helper](understanding-the-helper-function.md)
