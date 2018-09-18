---
title: Errore dell'analizzatore di espressioni CXX0065 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0065
dev_langs:
- C++
helpviewer_keywords:
- CAN0065
- CXX0065
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c100b1edbd36f4384e8deb1abf5b36465e8da479
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024164"
---
# <a name="expression-evaluator-error-cxx0065"></a>Errore dell‘analizzatore di espressioni CXX0065

variabile richiede uno stack frame

Un'espressione contiene una variabile che esiste all'interno dell'ambito corrente, ma non è ancora stata creata.

Questo errore può verificarsi quando è stato eseguito il prologo di una funzione, ma non ancora configurare lo stack frame della funzione, o se è stato eseguito il codice di uscita per la funzione.

Eseguire il codice di prologo della query fino a quando non è stato impostato il frame dello stack prima della valutazione dell'espressione.

Questo errore è identico all'errore CAN0065.