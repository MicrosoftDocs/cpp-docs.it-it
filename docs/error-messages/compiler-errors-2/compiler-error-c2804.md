---
title: Errore del compilatore C2804 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2804
dev_langs:
- C++
helpviewer_keywords:
- C2804
ms.assetid: b066e563-cca4-450c-8ba7-3b0d7a89f3ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47a0c9a785ae47e6df00b1303553228521d20d00
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2804"></a>Errore del compilatore C2804
'operator operator' (binario) ha troppi parametri  
  
 La funzione membro dell'operatore binario in overload è stata dichiarata con più di un parametro. Il primo parametro dell'operando di una funzione membro dell'operatore binario, il cui tipo è il tipo di inclusione dell'operatore, è implicito.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2804 e mostra come risolverlo.  
  
```  
// C2804.cpp  
// compile by using: cl /c /W4 C2804.cpp  
class X {  
public:  
   X& operator+= (const X &left, const X &right);   // C2804  
   X& operator+= (const X &right);   // OK - left operand implicitly *this  
};  
  
int main() {  
   X x, y;  
   x += y;   // equivalent to x.operator+=(y)  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2804 e mostra come risolverlo.  
  
```  
// C2804_2.cpp  
// compile with: /clr /c  
ref struct Y {  
   Y^ operator +(Y^ hY, int i);   // C2804  
   static Y^ operator +(Y^ hY, int i);   // OK  
   Y^ operator +(int i);   // OK  
};  
```