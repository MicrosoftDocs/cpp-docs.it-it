---
title: Scaricamento di una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 6463bc71-020e-4aff-a4ca-90360411c54e
ms.openlocfilehash: 284a9cb9268c8c794379c6a5468b0f2b9092b7d0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317458"
---
# <a name="unloading-a-delay-loaded-dll"></a>Scaricamento di una DLL a caricamento ritardato

L'helper di caricamento ritardato specificato dall'impostazione predefinita controlla per verificare se i descrittori di caricamento ritardato sono un puntatore e una copia della tabella di indirizzi di importazione (IAT) originale nel campo pUnloadIAT. In questo caso, salverà un puntatore in un elenco al descrittore di ritardo di importazione. In questo modo la funzione di supporto trovare la DLL in base al nome di supportare lo scaricamento di DLL in modo esplicito.

Di seguito sono le funzioni per lo scaricamento esplicito di una DLL a caricamento ritardato e strutture associate:

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

La struttura UnloadInfo viene implementata usando una classe C++ che utilizza **LocalAlloc** e **LocalFree** implementazioni di come proprio operatore **nuova** e l'operatore  **Elimina** rispettivamente. Queste opzioni vengono mantenute in un elenco collegato standard usando puiHead dell'elemento head dell'elenco.

FUnloadDelayLoadedDLL chiamare il metodo tenterà di trovare il nome visualizzato nell'elenco di DLL a caricamento (è necessaria una corrispondenza esatta). Se viene trovato, la copia di IAT nel pUnloadIAT viene copiata nella parte superiore della tabella IAT per ripristinare i puntatori thunk in esecuzione, la libreria viene liberata mediante **FreeLibrary**, la corrispondenza **UnloadInfo** record viene scollegato da l'elenco eliminato e viene restituito TRUE.

L'argomento per la funzione FUnloadDelayLoadedDLL2 è distinzione maiuscole / minuscole. Ad esempio, si specificherà:

```cpp
__FUnloadDelayLoadedDLL2("user32.DLL");
```

e non:

```cpp
__FUnloadDelayLoadedDLL2("User32.DLL");.
```

## <a name="see-also"></a>Vedere anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
