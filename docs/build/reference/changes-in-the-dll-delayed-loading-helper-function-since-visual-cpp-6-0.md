---
title: 'Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0'
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, what's changed
- PFromRva method
- __delayLoadHelper2 function
- helper functions, what's changed
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
ms.openlocfilehash: 536729e27c89d068957ea451355957e4a35348ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320605"
---
# <a name="changes-in-the-dll-delayed-loading-helper-function-since-visual-c-60"></a>Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0

Se nel computer sono presenti più versioni di Visual C, o se è stata definita una funzione di supporto personalizzata, potrebbero essere interessate dalle modifiche apportate alla funzione di supporto di caricamento ritardato della DLL. Ad esempio:

- **__delayLoadHelper** è ora **__delayLoadHelper2**

- **__pfnDliNotifyHook** sta **__pfnDliNotifyHook2**

- **__pfnDliFailureHook** è ora **__pfnDliFailureHook2**

- **__FUnloadDelayLoadedDLL** è ora **__FUnloadDelayLoadedDLL2**

> [!NOTE]
> Se si utilizza la funzione di supporto predefinita, queste modifiche non avranno effetto sull'utente. Non sono state apportate modifiche per quanto riguarda la modalità di richiamo del linker.

## <a name="multiple-versions-of-visual-c"></a>Più versioni di Visual C

Se nel computer sono presenti più versioni di Visual C, assicurarsi che il linker corrisponda a delayimp.lib. Se si verifica una mancata corrispondenza, si `___delayLoadHelper2@8` `___delayLoadHelper@8` otterrà una segnalazione degli errori del linker o come simbolo esterno non risolto. Il primo implica un nuovo linker con un vecchio delayimp.lib, e il secondo implica un vecchio linker con un nuovo delayimp.lib.

Se si verifica un errore del linker non risolto, eseguire [dumpbin /linkermember](linkermember.md):1 nel file delayimp.lib che si prevede contenga la funzione di supporto per vedere quale funzione di supporto è invece definita. La funzione di supporto può anche essere definita in un file oggetto; eseguire [dumpbin /symbols](symbols.md) `delayLoadHelper(2)`e cercare .

Se si è a conoscenza del collegamento del linker di Visual C.NET 6.0:

- Eseguire dumpbin nel file lib o obj dell'helper di caricamento ritardato per determinare se definisce **__delayLoadHelper2**. In caso contrario, il collegamento avrà esito negativo.

- Definire **__delayLoadHelper** nel file lib o obj dell'helper di caricamento ritardato.

## <a name="user-defined-helper-function"></a>Funzione helper definita dall'utenteUser-Defined Helper Function

Se è stata definita una funzione di supporto personalizzata e si utilizza la versione corrente di Visual C, eseguire le operazioni seguenti:

- Rinominare la funzione di supporto **in __delayLoadHelper2**.

- Poiché i puntatori nel descrittore di ritardo (ImgDelayDescr in delayimp.h) sono stati modificati da indirizzi assoluti (VA) a indirizzi relativi (RVA) per funzionare come previsto in entrambi i programmi a 32 e 64 bit, è necessario riconvertirli in puntatori. È stata introdotta una nuova funzione: PFromRva, disponibile in delayhlp.cpp. È possibile utilizzare questa funzione su ognuno dei campi nel descrittore per convertirli nuovamente in puntatori a 32 o 64 bit. La funzione helper di caricamento ritardato predefinita continua a essere un buon modello da usare come esempio.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a>Caricamento di tutte le importazioni per una DLL a caricamento ritardatoLoad All Imports for a Delay-Loaded DLL

Il linker può caricare tutte le importazioni da una DLL specificata per il caricamento ritardato. Per ulteriori informazioni, vedere [Caricamento di tutte le importazioni per una DLL a caricamento ritardato.](loading-all-imports-for-a-delay-loaded-dll.md)

## <a name="see-also"></a>Vedere anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
