---
title: Errore irreversibile C1509
ms.date: 11/04/2016
f1_keywords:
- C1509
helpviewer_keywords:
- C1509
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
ms.openlocfilehash: 0d1d7255dd64239a6a76bb15a1f309b43eac0d4b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202956"
---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509

limite del compilatore: troppi Stati di gestione delle eccezioni nella funzione ' Function '. semplifica funzione

Il codice supera un limite interno per gli Stati del gestore di eccezioni (32.768 stati).

La ragione più comune è che la funzione contiene un'espressione complessa di variabili di classe definite dall'utente e operatori aritmetici.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplifica le espressioni assegnando sottoespressioni comuni a variabili temporanee.

1. Suddividere la funzione in funzioni più piccole.
