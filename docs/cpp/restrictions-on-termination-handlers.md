---
title: Limitazioni ai gestori di terminazione
ms.date: 11/04/2016
helpviewer_keywords:
- termination handlers [C++], limitations
- restrictions, termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
ms.openlocfilehash: befe181a41ed418a4a824b131e741a9f02f90e38
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179068"
---
# <a name="restrictions-on-termination-handlers"></a>Limitazioni ai gestori di terminazione

Non è possibile usare un'istruzione **goto** per passare a un blocco di istruzioni **__try** o a un blocco di istruzioni **__finally** . È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È tuttavia possibile uscire da un blocco di istruzioni **__try** . Non è inoltre possibile annidare un gestore eccezioni o un gestore di terminazione all'interno di un blocco **__finally** .

Inoltre, alcuni tipi di codice consentiti in un gestore di terminazione producono risultati inaffidabili, pertanto è necessario utilizzarli con cautela. Uno è un'istruzione **goto** che salta da un blocco di istruzioni **__finally** . Se il blocco viene eseguito come parte della terminazione normale, non si verifica nulla di anomalo. Tuttavia, se il sistema sta eseguendo la rimozione dello stack, tale rimozione viene arrestata e la funzione corrente acquisisce il controllo come se non si fosse verificata alcuna terminazione anomala.

Un'istruzione **return** all'interno di un blocco di istruzioni **__finally** presenta approssimativamente la stessa situazione. Il controllo torna al chiamante della funzione contenente il gestore di terminazione. Nel caso in cui il sistema stesse eseguendo la rimozione dello stack, tale processo viene interrotto e il programma procede come se non fosse stata generata alcuna eccezione.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
