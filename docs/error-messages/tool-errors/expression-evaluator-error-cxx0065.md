---
title: Errore dell‘analizzatore di espressioni CXX0065
ms.date: 11/04/2016
f1_keywords:
- CXX0065
helpviewer_keywords:
- CAN0065
- CXX0065
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
ms.openlocfilehash: 7b62e42da2a74d910e2dc56ce2dfcb5cb38f2bfa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571782"
---
# <a name="expression-evaluator-error-cxx0065"></a>Errore dell‘analizzatore di espressioni CXX0065

variabile richiede uno stack frame

Un'espressione contiene una variabile che esiste all'interno dell'ambito corrente, ma non è ancora stata creata.

Questo errore può verificarsi quando è stato eseguito il prologo di una funzione, ma non ancora configurare lo stack frame della funzione, o se è stato eseguito il codice di uscita per la funzione.

Eseguire il codice di prologo della query fino a quando non è stato impostato il frame dello stack prima della valutazione dell'espressione.

Questo errore è identico all'errore CAN0065.