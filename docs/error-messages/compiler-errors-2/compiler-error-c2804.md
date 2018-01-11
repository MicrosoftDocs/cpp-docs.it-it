---
title: Errore del compilatore C2804 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2804
dev_langs: C++
helpviewer_keywords: C2804
ms.assetid: b066e563-cca4-450c-8ba7-3b0d7a89f3ea
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3d6dd8bb7afe1416739d9ee4c889d0d850778b09
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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