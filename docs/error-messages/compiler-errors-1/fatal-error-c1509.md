---
description: 'Altre informazioni su: errore irreversibile C1509'
title: Errore irreversibile C1509
ms.date: 11/04/2016
f1_keywords:
- C1509
helpviewer_keywords:
- C1509
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
ms.openlocfilehash: dc2483ae96f599912b3ba6d1594257fec81ac251
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276348"
---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509

limite del compilatore: troppi Stati di gestione delle eccezioni nella funzione ' Function '. semplifica funzione

Il codice supera un limite interno per gli Stati del gestore di eccezioni (32.768 stati).

La ragione più comune è che la funzione contiene un'espressione complessa di variabili di classe definite dall'utente e operatori aritmetici.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplifica le espressioni assegnando sottoespressioni comuni a variabili temporanee.

1. Suddividere la funzione in funzioni più piccole.
