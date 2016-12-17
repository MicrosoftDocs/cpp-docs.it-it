---
title: "Errore del compilatore C3899 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3899"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3899"
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3899
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': utilizzo l\-value del membro dati initonly non consentito direttamente in un'area parallela della classe 'classe'  
  
 Un membro dati [initonly](../../dotnet/initonly-cpp-cli.md) non può essere inizializzato nella parte di un costruttore che si trova in un'area [parallel](../../parallel/openmp/reference/parallel.md),  perché il compilatore esegue una rilocazione interna di tale codice, che quindi non è più parte effettiva del costruttore.  
  
 Per correggere l'errore, inizializzare il membro dati initonly nel costruttore, ma all'esterno dell'area parallela.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3899:  
  
```  
// C3899.cpp  
// compile with: /clr /openmp  
#include <omp.h>   
  
public ref struct R {  
   initonly int x;  
   R() {  
      x = omp_get_thread_num() + 1000;   // OK  
      #pragma omp parallel num_threads(5)  
      {  
         // cannot assign to 'x' here  
         x = omp_get_thread_num() + 1000;   // C3899  
         System::Console::WriteLine("thread {0}", omp_get_thread_num());  
      }  
      x = omp_get_thread_num() + 1000;   // OK  
   }  
};  
  
int main() {  
   R^ r = gcnew R;  
   System::Console::WriteLine(r->x);  
}  
```