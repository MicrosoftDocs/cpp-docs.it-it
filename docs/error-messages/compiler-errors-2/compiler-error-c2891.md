---
title: Errore del compilatore C2891 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2891
dev_langs:
- C++
helpviewer_keywords:
- C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6c35294472fe4142e7e6689adfc5f5f71c27b664
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2891"></a>Errore del compilatore C2891
'parameter': Impossibile accettare l'indirizzo di un parametro di modello  
  
 È Impossibile accettare l'indirizzo di un parametro di modello, a meno che non è un lvalue. Parametri di tipo non sono lvalue poiché non dispongono di alcun indirizzo. I valori non di tipo nell'elenco di parametri di modello che non è lvalue non hanno anche un indirizzo. Questo è un esempio di codice che causa l'errore del compilatore C2891, perché il valore passato come parametro di modello è una copia generato dal compilatore di argomento del modello.  
  
```  
template <int i> int* f() { return &i; }  
```  
  
 Parametri di modello che sono lvalue, ad esempio tipi di riferimento, può avere il proprio indirizzo eseguito.  
  
```  
template <int& r> int* f() { return &r; }  
```  
  
 Per correggere l'errore, non accettare l'indirizzo di un parametro di modello se non si è un lvalue.
