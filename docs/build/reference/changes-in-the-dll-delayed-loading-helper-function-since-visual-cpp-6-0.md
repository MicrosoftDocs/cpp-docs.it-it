---
description: 'Altre informazioni su: modifiche della funzione di supporto per il caricamento ritardato della DLL dal Visual C++ 6,0'
title: 'Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0'
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, what's changed
- PFromRva method
- __delayLoadHelper2 function
- helper functions, what's changed
ms.openlocfilehash: a83d5e2895863efde396c48d68316e32aa42a2a1
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666966"
---
# <a name="changes-in-the-dll-delayed-loading-helper-function-since-visual-c-60"></a>Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0

Se nel computer sono presenti più versioni di Visual C++ o se è stata definita una funzione di supporto personalizzata, le modifiche apportate alla funzione di supporto per il caricamento posticipato della DLL potrebbero influire sull'utente. Ad esempio:

- **`__delayLoadHelper`** è ora `__delayLoadHelper2`

- `__pfnDliNotifyHook` è ora `__pfnDliNotifyHook2`

- `__pfnDliFailureHook` è ora `__pfnDliFailureHook2`

- `__FUnloadDelayLoadedDLL` è ora `__FUnloadDelayLoadedDLL2`

> [!NOTE]
> Se si usa la funzione di supporto predefinita, queste modifiche non influiranno sull'utente. Non sono state apportate modifiche relative alla modalità di chiamata del linker.

## <a name="multiple-versions-of-visual-c"></a>Più versioni di Visual C++

Se nel computer sono presenti più versioni di Visual C++, assicurarsi che il linker corrisponda a *`delayimp.lib`* . In caso di mancata corrispondenza, si otterrà una segnalazione errori del linker `___delayLoadHelper2@8` o un `___delayLoadHelper@8` simbolo esterno non risolto. Il primo implica un nuovo linker con un vecchio *`delayimp.lib`* e il secondo implica un vecchio linker con un nuovo *`delayimp.lib`* .

Se viene visualizzato un errore del linker non risolto, eseguire nell' [`dumpbin /linkermember:1`](linkermember.md) oggetto *`delayimp.lib`* che si prevede di includere la funzione helper per vedere quale funzione di supporto è invece definita. È anche possibile definire la funzione helper in un file oggetto; eseguire [`dumpbin /symbols`](symbols.md) e cercare `delayLoadHelper` o `delayLoadHelper2` .

Se si è certi di disporre del linker Visual C++ 6,0, eseguire le operazioni seguenti:

- Eseguire **`dumpbin`** sul file o sull'helper di caricamento ritardato *`.lib`* *`.obj`* per determinare se è definito `__delayLoadHelper2` . In caso contrario, il collegamento avrà esito negativo.

- Definire `__delayLoadHelper` nel file o nell'helper di caricamento ritardato *`.lib`* *`.obj`* .

## <a name="user-defined-helper-function"></a>Funzione helper definita dall'utente

Se è stata definita una funzione di supporto personalizzata e si usa la versione corrente di Visual C++, seguire questa procedura:

- Rinominare la funzione di supporto in `__delayLoadHelper2` .

- Poiché i puntatori nel descrittore di ritardo ( `ImgDelayDescr` in *`delayimp.h`* ) sono stati modificati da indirizzi assoluti (VAS) a indirizzi relativi (RVA) in modo che funzionino come previsto nei programmi a 32 bit e a 64 bit, è necessario convertire questi RVA nuovamente in puntatori. È stata introdotta una nuova funzione: `PFromRva` , disponibile in *`delayhlp.cpp`* . È possibile utilizzare questa funzione su ognuno dei campi del descrittore per convertirli nuovamente in puntatori a 32 bit o a 64 bit. La funzione di supporto del caricamento ritardato predefinito continua a essere un modello valido da usare come esempio.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a>Carica tutte le importazioni per una DLL a caricamento ritardato

Il linker è in grado di caricare tutte le importazioni da una DLL specificata per il caricamento ritardato. Per ulteriori informazioni, vedere [caricamento di tutte le importazioni per una dll a caricamento ritardato](loading-all-imports-for-a-delay-loaded-dll.md).

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
