---
title: Errore irreversibile C1509 | Documenti Microsoft
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
ms.openlocfilehash: fec83f6b6138eacc613e560b9da4557079d6677d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198794"
---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509
limite del compilatore: troppi stati di gestore di eccezioni nella funzione 'function'. semplificare la funzione  
  
 Il codice supera un limite interno sugli stati di gestione delle eccezioni (32.768 stati).  
  
 La causa più comune è che la funzione contiene un'espressione complessa di operatori aritmetici e variabili di classe definito dall'utente.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Tramite l'assegnazione di sottoespressioni comuni per le variabili temporanee, semplificare le espressioni.  
  
2.  Suddividere la funzione in funzioni più piccole.