---
title: Limitazioni ai gestori di terminazione
description: Restrizioni relative ai gestori di terminazione di gestione delle eccezioni strutturate.
ms.date: 08/24/2020
helpviewer_keywords:
- termination handlers [C++], limitations
- restrictions, termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
ms.openlocfilehash: 60fdb4c2a105f2fce4a32f475563a04f8e7bfaf9
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898264"
---
# <a name="restrictions-on-termination-handlers"></a>Limitazioni ai gestori di terminazione

Non è possibile usare un' **`goto`** istruzione per passare a un **`__try`** blocco di istruzioni o a un blocco di **`__finally`** istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È tuttavia possibile uscire da un **`__try`** blocco di istruzioni. Non è inoltre possibile annidare un gestore eccezioni o un gestore di terminazione all'interno di un **`__finally`** blocco.

Alcuni tipi di codice consentiti in un gestore di terminazione producono risultati discutibili, pertanto è consigliabile usarli con cautela. Uno è un' **`goto`** istruzione che salta da un **`__finally`** blocco di istruzioni. Se il blocco viene eseguito come parte della terminazione normale, non si verifica alcun evento insolito. Tuttavia, se il sistema sta rimuovendo lo stack, la rimozione viene arrestata. Quindi, la funzione corrente acquisisce il controllo come se non si fosse verificata alcuna terminazione anomala.

Un' **`return`** istruzione all'interno di un **`__finally`** blocco di istruzioni presenta approssimativamente la stessa situazione. Il controllo torna al chiamante immediato della funzione che contiene il gestore di terminazione. Se lo stack è stato rimosso dal sistema, questo processo viene interrotto. Quindi, il programma procede come se non fosse stata generata alcuna eccezione.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
