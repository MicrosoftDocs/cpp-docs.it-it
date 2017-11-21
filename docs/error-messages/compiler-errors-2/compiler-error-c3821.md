---
title: Errore del compilatore C3821 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3821
dev_langs: C++
helpviewer_keywords: C3821
ms.assetid: 2b327c7a-5faf-443c-ae82-944fae25b4df
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 47e0a2ed3c824ed1598f7e998d4966b95cc9233b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3821"></a>Errore del compilatore C3821
'function': funzione o un tipo gestito non può essere utilizzato in una funzione non gestita  
  
 Funzioni con assembly inline o [setjmp](../../c-runtime-library/reference/setjmp.md) non può contenere tipi di valore o classi gestite. Per correggere l'errore, rimuovere l'assembly inline e `setjmp` o rimuovere gli oggetti gestiti.  
  
 C3821 può verificarsi anche se si tenta di utilizzare l'archiviazione automatica in una funzione vararg.  Per ulteriori informazioni, vedere [elenchi di argomenti variabili (...) (C + C++ /CLI) ](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md) e [semantica dello Stack C++ per i tipi riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3821.  
  
```  
// C3821a.cpp  
// compile with: /clr /c  
public ref struct R {};  
void test1(...) {  
   R r;   // C3821  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3821.  
  
```  
// C3821b.cpp  
// compile with: /clr  
// processor: /x86  
ref class A {  
   public:  
   int i;  
};  
  
int main() {  
   // cannot use managed classes in this function  
   A ^a;     
  
   __asm {  
      nop  
   }  
} // C3821  
```  
