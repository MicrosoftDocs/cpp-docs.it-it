---
description: 'Altre informazioni su: modifiche della funzione di supporto per il caricamento ritardato della DLL dal Visual C++ 6,0'
title: 'Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0'
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, what's changed
- PFromRva method
- __delayLoadHelper2 function
- helper functions, what's changed
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
ms.openlocfilehash: 0141467aab0b804cf82d21c15510d8f9941853a6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182489"
---
# <a name="changes-in-the-dll-delayed-loading-helper-function-since-visual-c-60"></a>Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0

Se nel computer sono presenti più versioni di Visual C++ o se è stata definita una funzione di supporto personalizzata, è possibile che le modifiche apportate alla funzione di supporto per il caricamento posticipato della DLL siano influenzate. Ad esempio:

- **__delayLoadHelper** è ora **__delayLoadHelper2**

- **__pfnDliNotifyHook** è ora **__pfnDliNotifyHook2**

- **__pfnDliFailureHook** è ora **__pfnDliFailureHook2**

- **__FUnloadDelayLoadedDLL** è ora **__FUnloadDelayLoadedDLL2**

> [!NOTE]
> Se si utilizza la funzione di supporto predefinita, queste modifiche non avranno effetto sull'utente. Non sono state apportate modifiche relative alla modalità di chiamata del linker.

## <a name="multiple-versions-of-visual-c"></a>Più versioni di Visual C++

Se nel computer sono presenti più versioni di Visual C++, assicurarsi che il linker corrisponda a Delayimp. lib. Se si verifica una mancata corrispondenza, si otterrà una segnalazione errori del linker `___delayLoadHelper2@8` o un `___delayLoadHelper@8` simbolo esterno non risolto. Il primo implica un nuovo linker con un vecchio delayimp. lib e il secondo implica un vecchio linker con un nuovo delayimp. lib.

Se viene visualizzato un errore del linker non risolto, eseguire [dumpbin/linkermember](linkermember.md): 1 in Delayimp. lib, che dovrebbe contenere la funzione helper per vedere quale funzione di supporto è invece definita. È anche possibile definire la funzione helper in un file oggetto; eseguire [dumpbin/symbols](symbols.md) e cercare `delayLoadHelper(2)` .

Se si è certi di disporre del linker Visual C++ 6,0, eseguire le operazioni seguenti:

- Eseguire DUMPBIN sul file. lib o. obj dell'helper di caricamento ritardato per determinare se definisce **__delayLoadHelper2**. In caso contrario, il collegamento avrà esito negativo.

- Definire **__delayLoadHelper** nel file con estensione LIB o obj del supporto di caricamento ritardato.

## <a name="user-defined-helper-function"></a>User-Defined funzione helper

Se è stata definita una funzione di supporto personalizzata e si utilizza la versione corrente di Visual C++, eseguire le operazioni seguenti:

- Rinominare la funzione helper per **__delayLoadHelper2**.

- Poiché i puntatori nel descrittore di ritardo (ImgDelayDescr in Delayimp. h) sono stati modificati da indirizzi assoluti (VAs) a indirizzi relativi (RVA) in modo che funzionino come previsto nei programmi 32 e 64 bit, è necessario convertirli nuovamente in puntatori. È stata introdotta una nuova funzione: PFromRva, disponibile in delayhlp. cpp. È possibile utilizzare questa funzione su ognuno dei campi del descrittore per convertirli nuovamente in puntatori 32 o 64 bit. La funzione di supporto del caricamento ritardato predefinito continua a essere un modello valido da usare come esempio.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a>Carica tutte le importazioni per una DLL Delay-Loaded

Il linker è in grado di caricare tutte le importazioni da una DLL specificata per il caricamento ritardato. Per ulteriori informazioni, vedere [caricamento di tutte le importazioni per una DLL Delay-Loaded](loading-all-imports-for-a-delay-loaded-dll.md) .

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione helper](understanding-the-helper-function.md)
