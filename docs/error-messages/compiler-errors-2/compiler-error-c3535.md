---
title: Errore del compilatore C3535 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3535
dev_langs: C++
helpviewer_keywords: C3535
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5797d644ec13ed89bad3ddcda23be109df067b03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3535"></a>Errore del compilatore C3535
non è possibile dedurre il tipo per 'type1' da 'type2'  
  
 Il tipo della variabile dichiarata per il `auto` parola chiave non può essere dedotto dal tipo dell'espressione di inizializzazione. Questo errore si verifica ad esempio, se viene valutata l'espressione di inizializzazione `void`, che non è un tipo.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che il tipo dell'espressione di inizializzazione non è `void`.  
  
2.  Verificare che la dichiarazione non è un puntatore a un tipo fondamentale. Per ulteriori informazioni, vedere [tipi fondamentali](../../cpp/fundamental-types-cpp.md).  
  
3.  Verificare se la dichiarazione è un puntatore a un tipo, l'espressione di inizializzazione è un tipo puntatore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché l'espressione di inizializzazione restituisce `void`.  
  
```  
// C3535a.cpp  
// Compile with /Zc:auto  
void f(){}  
int main()  
{  
   auto x = f();   //C3535  
   return 0;  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché l'istruzione dichiara una variabile `x` come un puntatore a un tipo dedotto, ma il tipo dell'inizializzatore di espressione è double. Di conseguenza, il compilatore non è possibile dedurre il tipo della variabile.  
  
```  
// C3535b.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto* x = 123.0;   // C3535  
   return 0;  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché variabile `p` dichiara un puntatore a un tipo dedotto, ma l'espressione di inizializzazione non è un tipo di puntatore.  
  
```  
// C3535c.cpp  
// Compile with /Zc:auto  
class A { };  
A x;  
auto *p = x;  // C3535  
```  
  
## <a name="see-also"></a>Vedere anche  
 [parola chiave Auto](../../cpp/auto-keyword.md)   
 [Tipi fondamentali](../../cpp/fundamental-types-cpp.md)