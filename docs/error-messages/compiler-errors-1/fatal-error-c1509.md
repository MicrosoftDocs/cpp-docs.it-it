---
title: Errore irreversibile C1509 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1509
dev_langs:
- C++
helpviewer_keywords:
- C1509
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3d3fc7a7be867a7137dab4155984cf1844b661ea
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="fatal-error-c1509"></a>Errore irreversibile C1509
limite del compilatore: troppi stati di gestore di eccezioni nella funzione 'function'. semplificare la funzione  
  
 Il codice supera un limite interno sugli stati di gestione delle eccezioni (32.768 stati).  
  
 La causa più comune è che la funzione contiene un'espressione complessa di operatori aritmetici e variabili di classe definito dall'utente.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Tramite l'assegnazione di sottoespressioni comuni per le variabili temporanee, semplificare le espressioni.  
  
2.  Suddividere la funzione in funzioni più piccole.
