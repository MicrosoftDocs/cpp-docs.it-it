---
title: Errore irreversibile C1509
ms.date: 11/04/2016
f1_keywords:
- C1509
helpviewer_keywords:
- C1509
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
ms.openlocfilehash: efd5b9dd5cdd7ee174bc786c38d9dd841e2ad6ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397484"
---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509

limite del compilatore: troppi stati di gestore di eccezioni nella funzione 'function'. semplificare la funzione

Il codice supera un limite interno sugli stati di gestione delle eccezioni (32.768 stati).

La causa più comune è che la funzione contiene un'espressione complessa di variabili di classe definita dall'utente e gli operatori aritmetici.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplificare le espressioni tramite l'assegnazione di sottoespressioni comuni per le variabili temporanee.

1. Suddividere la funzione in funzioni più piccole.