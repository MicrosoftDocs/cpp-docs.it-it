---
title: Errore del compilatore C2891 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2891
dev_langs:
- C++
helpviewer_keywords:
- C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 01741d1cc67f0045c46ab392212625b9e1a2d8ca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33246370"
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