---
title: Errore irreversibile C1509 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1509
dev_langs:
- C++
helpviewer_keywords:
- C1509
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 837ab5b7cf76b724726c6c52fbfe974d4da6ca85
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033134"
---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509

limite del compilatore: troppi stati di gestore di eccezioni nella funzione 'function'. semplificare la funzione

Il codice supera un limite interno sugli stati di gestione delle eccezioni (32.768 stati).

La causa più comune è che la funzione contiene un'espressione complessa di variabili di classe definita dall'utente e gli operatori aritmetici.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplificare le espressioni tramite l'assegnazione di sottoespressioni comuni per le variabili temporanee.

1. Suddividere la funzione in funzioni più piccole.