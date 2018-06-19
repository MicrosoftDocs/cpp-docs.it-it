---
title: Errore del compilatore C2678 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2678
dev_langs:
- C++
helpviewer_keywords:
- C2678
ms.assetid: 1f0a4e26-b429-44f5-9f94-cb66441220c8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8fb294e567f759225a2899d39f2adaa7211d8d93
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234094"
---
# <a name="compiler-error-c2678"></a>Errore del compilatore C2678
'operator' binario: non è stato definito alcun operatore che accetti un operando sinistro di tipo 'type'. È anche possibile che non vi siano conversioni accettabili.  
  
 Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.  
  
## <a name="example"></a>Esempio  
 L'errore C2678 può verificarsi quando l'operando sinistro è qualificato da const, ma l'operatore è definito in modo da accettare un argomento non constante.  
  
 L'esempio seguente genera l'errore C2678 e mostra come risolverlo:  
  
```  
// C2678a.cpp  
// Compile by using: cl /EHsc /W4 C2678a.cpp  
struct Combo {  
   int number;  
   char letter;  
};  
  
inline Combo& operator+=(Combo& lhs, int rhs) {  
   lhs.number += rhs;  
   return lhs;  
}  
  
int main() {  
   Combo const combo1{ 42, 'X' };  
   Combo combo2{ 13, 'Z' };  
  
   combo1 += 6; // C2678  
   combo2 += 9; // OK - operator+= matches non-const Combo  
}  
```  
  
## <a name="example"></a>Esempio  
 L'errore C2678 può verificarsi anche se non si blocca un membro nativo prima di chiamare una funzione membro su di esso.  
  
 L'esempio seguente genera l'errore C2678 e mostra come risolverlo.  
  
```  
// C2678.cpp  
// compile with: /clr /c  
struct S { int _a; };  
  
ref class C {  
public:  
   void M( S param ) {  
      test = param;   // C2678  
  
      // OK  
      pin_ptr<S> ptest = &test;  
      *ptest = param;  
   }  
   S test;  
};  
```  
