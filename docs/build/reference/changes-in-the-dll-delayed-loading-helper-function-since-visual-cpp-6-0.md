---
title: 'Le modifiche nella DLL del caricamento di funzione di supporto rispetto a Visual C++ 6.0 ritardato: | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, what's changed
- PFromRva method
- __delayLoadHelper2 function
- helper functions, what's changed
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0caf74f02b005ef65e8ac30750fdf244ddeeed0d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712270"
---
# <a name="changes-in-the-dll-delayed-loading-helper-function-since-visual-c-60"></a>Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0

Se si dispone di più versioni di Visual C++ nel computer in uso o se è definita una funzione helper, potrebbe essere interessato da modifiche apportate alla DLL caricamento ritardato funzione di supporto. Ad esempio:

- **delayLoadHelper** è ora **__delayLoadHelper2**

- **pfnDliNotifyHook diventa** è ora **pfnDliNotifyHook2**

- **pfnDliFailureHook** è ora **pfnDliFailureHook2**

- **FUnloadDelayLoadedDLL** è ora **FUnloadDelayLoadedDLL2**

> [!NOTE]
>  Se si usa la funzione helper predefinite, queste modifiche non avranno effetto. Non sono presenti modifiche relative alle modalità di richiamo del linker.

## <a name="multiple-versions-of-visual-c"></a>Più versioni di Visual C++

Se si dispone di più versioni di Visual C++ nel computer in uso, assicurarsi che il linker corrisponde a delayimp. lib. Se è presente una mancata corrispondenza, si otterrà un errore del linker che segnalerà `___delayLoadHelper2@8` o `___delayLoadHelper@8` come un simbolo esterno non risolto. Il primo implica un linker nuovo con un vecchio delayimp. lib e quest'ultimo implica un linker precedente con un nuovo delayimp. lib.

Se si verifica un errore del linker non risolto, eseguire [dumpbin /linkermember](../../build/reference/linkermember.md): 1 sulla delayimp. lib che si prevede di includere la funzione helper per vedere quale funzione di supporto viene invece definita. La funzione di supporto può anche essere definita in un file oggetto. eseguire [dumpbin /symbols](../../build/reference/symbols.md) e cercare `delayLoadHelper(2)`.

Se si conosce il linker di Visual C++ 6.0, è possibile quindi:

- Eseguire dumpbin nel file lib o obj dell'helper a caricamento ritardato per determinare se definisce **__delayLoadHelper2**. In caso contrario, il collegamento avrà esito negativo.

- Definire **delayLoadHelper** il ritardo di caricare file con estensione obj o LIB dell'helper.

## <a name="user-defined-helper-function"></a>Funzione di supporto definito dall'utente

Se è definita una funzione helper e Usa la versione corrente di Visual C++, eseguire le operazioni seguenti:

- Rinominare la funzione di supporto per **__delayLoadHelper2**.

- Poiché i puntatori nel descrittore di ritardo (ImgDelayDescr in Delayimp. h) sono stati modificati da indirizzi assoluti (VAs) per gli indirizzi relativi (RVA) a funzionare come previsto in entrambi i programmi 32 e 64 bit, è necessario convertire questi back in puntatori. È stata introdotta una nuova funzione: PFromRva, trovato nel cpp. È possibile utilizzare questa funzione su ogni campo nel descrittore di convertirle puntatori a 32 o 64 bit. La funzione di supporto predefinito delay carico continua a essere il modello ottimale da usare come esempio.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a>Caricare tutte le importazioni per una DLL a caricamento ritardato

Il linker può caricare tutte le importazioni da una DLL a caricamento ritardato specificato. Visualizzare [caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)