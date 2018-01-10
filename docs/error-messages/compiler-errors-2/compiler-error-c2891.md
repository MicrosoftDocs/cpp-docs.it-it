---
title: Errore del compilatore C2891 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2891
dev_langs: C++
helpviewer_keywords: C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 979d77ad5b5bd0b68dd539695d6cb1b60b099c55
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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