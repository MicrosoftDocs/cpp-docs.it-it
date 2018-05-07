---
title: Errore del compilatore C2243 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2243
dev_langs:
- C++
helpviewer_keywords:
- C2243
ms.assetid: b90065bb-d251-4ba9-8b4c-280ee13fa9c0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16bc95540488b0723869c735b7fc80b15f6e763b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2243"></a>Errore del compilatore C2243
conversione 'conversion type' da 'type1' a 'type2' esistente ma inaccessibile  
  
 La protezione dell'accesso (`protected` o `private`) ha impedito la conversione da un puntatore a una classe derivata a un puntatore alla classe di base.  
  
 L'esempio seguente genera l'errore C2243:  
  
```  
// C2243.cpp  
// compile with: /c  
class B {};  
class D : private B {};  
class E : public B {};  
  
D d;  
B *p = &d;   // C2243  
  
E e;  
B *p2 = &e;  
```  
  
 Le classi di base con accesso `protected` o `private` non sono accessibili ai client della classe derivata. Questi livelli di controllo di accesso vengono usati per indicare che la classe di base è un dettaglio dell'implementazione che non dovrebbe essere visibile ai client. Usare la derivazione pubblica se si vuole che i client della classe derivata abbiano accesso alla conversione implicita di un puntatore a una classe derivata in un puntatore alla classe di base.