---
title: Limitazioni ai gestori di terminazione
ms.date: 11/04/2016
helpviewer_keywords:
- termination handlers [C++], limitations
- restrictions, termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
ms.openlocfilehash: d53792afbc3d25fb21edafa7817919b63b79ab65
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225891"
---
# <a name="restrictions-on-termination-handlers"></a>Limitazioni ai gestori di terminazione

Non è possibile usare un' **`goto`** istruzione per passare a un blocco di istruzioni **__try** o a un **`__finally`** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È tuttavia possibile uscire da un blocco di istruzioni **__try** . Non è inoltre possibile annidare un gestore eccezioni o un gestore di terminazione all'interno di un **`__finally`** blocco.

Inoltre, alcuni tipi di codice consentiti in un gestore di terminazione producono risultati inaffidabili, pertanto è necessario utilizzarli con cautela. Uno è un' **`goto`** istruzione che salta da un **`__finally`** blocco di istruzioni. Se il blocco viene eseguito come parte della terminazione normale, non si verifica nulla di anomalo. Tuttavia, se il sistema sta eseguendo la rimozione dello stack, tale rimozione viene arrestata e la funzione corrente acquisisce il controllo come se non si fosse verificata alcuna terminazione anomala.

Un' **`return`** istruzione all'interno di un **`__finally`** blocco di istruzioni presenta approssimativamente la stessa situazione. Il controllo torna al chiamante della funzione contenente il gestore di terminazione. Nel caso in cui il sistema stesse eseguendo la rimozione dello stack, tale processo viene interrotto e il programma procede come se non fosse stata generata alcuna eccezione.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
