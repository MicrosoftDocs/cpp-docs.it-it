---
title: Limitazioni ai gestori di terminazione
ms.date: 11/04/2016
helpviewer_keywords:
- termination handlers [C++], limitations
- restrictions, termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
ms.openlocfilehash: 7b092ee8682dfeef0c8151c56544e36427f40da0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62244489"
---
# <a name="restrictions-on-termination-handlers"></a>Limitazioni ai gestori di terminazione

Non è possibile usare una **goto** istruzione di passare in un **try** blocco di istruzioni o un **finally** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. (È possibile, tuttavia, passare direttamente su un **try** blocco di istruzioni.) Inoltre, è possibile annidare un gestore di eccezioni o un gestore di terminazione all'interno di un **finally** blocco.

Inoltre, alcuni tipi di codice consentiti in un gestore di terminazione producono risultati inaffidabili, pertanto è necessario utilizzarli con cautela. Uno è un **goto** istruzione che esegue il salto una **finally** blocco di istruzioni. Se il blocco viene eseguito come parte della terminazione normale, non si verifica nulla di anomalo. Tuttavia, se il sistema sta eseguendo la rimozione dello stack, tale rimozione viene arrestata e la funzione corrente acquisisce il controllo come se non si fosse verificata alcuna terminazione anomala.

Oggetto **restituire** istruzione all'interno di un **finally** blocco di istruzioni presenta all'incirca la stessa situazione. Il controllo torna al chiamante della funzione contenente il gestore di terminazione. Nel caso in cui il sistema stesse eseguendo la rimozione dello stack, tale processo viene interrotto e il programma procede come se non fosse stata generata alcuna eccezione.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)