---
title: Errore del compilatore C2299 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2299
dev_langs:
- C++
helpviewer_keywords:
- C2299
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4c0b18818ac45dea56d94b6046c8772710f02f56
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2299"></a>Errore del compilatore C2299
'function': modifica del comportamento: una specializzazione esplicita non può essere un costruttore di copia o operatore di assegnazione di copia  
  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: le versioni precedenti di Visual C++ consentivano specializzazioni esplicite per un costruttore di copia o un operatore di assegnazione di copia.  
  
 Per risolvere l'errore C2299, non apportare il costruttore di copia o operatore di assegnazione di una funzione di modello, ma piuttosto una funzione non modello che accetta un tipo di classe. Qualsiasi codice che chiama il costruttore di copia o di un operatore di assegnazione, in modo esplicito specificando gli argomenti di modello è necessario rimuovere gli argomenti di modello.  
  
 L'esempio seguente genera l'errore C2299:  
  
```  
// C2299.cpp  
// compile with: /c  
class C {  
   template <class T>  
   C (T t);  
  
   template <> C (const C&);   // C2299  
   C (const C&);   // OK  
};  
```
