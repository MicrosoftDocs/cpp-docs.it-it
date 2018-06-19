---
title: Errore del compilatore C2533 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2533
dev_langs:
- C++
helpviewer_keywords:
- C2533
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 06733dc8ee52462ab7fcac4255ee8fa697a9bac4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33229666"
---
# <a name="compiler-error-c2533"></a>Errore del compilatore C2533
'identifier': i costruttori non possono avere un tipo restituito  
  
 Un costruttore non può avere un tipo restituito (nemmeno un tipo restituito `void`).  
  
 Questo errore si verifica di solito a causa di un punto e virgola mancante tra la fine della definizione di una classe e l'implementazione del primo costruttore. Il compilatore riconosce la classe come definizione del tipo restituito per la funzione costruttore e genera l'errore C2533.  
  
 L'esempio seguente genera l'errore C2533 e mostra come risolverlo:  
  
```  
// C2533.cpp  
// compile with: /c  
class X {  
public:  
   X();     
};  
  
int X::X() {}   // C2533 - constructor return type not allowed  
X::X() {}   // OK - fix by using no return type  
```