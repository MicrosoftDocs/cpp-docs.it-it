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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8190511605a7f01dc399e1d8a8b4af96477fa407
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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