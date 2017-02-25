---
title: "Errore del compilatore C3821 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3821"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3821"
ms.assetid: 2b327c7a-5faf-443c-ae82-944fae25b4df
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C3821
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': impossibile utilizzare un tipo o una funzione gestita all'interno di una funzione non gestita  
  
 Le funzioni con assembly inline o [setjmp](../../c-runtime-library/reference/setjmp.md) non possono contenere tipi valore o classi gestite.  Per correggere questo errore, rimuovere l'assembly inline e `setjmp` oppure gli oggetti gestiti.  
  
 L'errore C3821 può inoltre verificarsi se si tenta di utilizzare l'archiviazione automatica in una funzione vararg.  Per ulteriori informazioni, vedere [Variable Argument Lists \(...\) \(C\+\+\/CLI\)](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md) e [Semantica dello stack C\+\+ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3821:  
  
```  
// C3821a.cpp  
// compile with: /clr /c  
public ref struct R {};  
void test1(...) {  
   R r;   // C3821  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3821:  
  
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
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3821:  
  
```  
// C3821c.cpp  
// compile with: /clr:oldSyntax  
// processor: /x86  
__gc  class A {  
   public:  
   int i;  
};  
  
int main() {  
   // cannot use managed classes in this function  
   A *a;     
  
   __asm {  
      nop  
   }  
} // C3821  
```