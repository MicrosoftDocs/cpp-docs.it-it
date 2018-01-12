---
title: Errore del compilatore C3899 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3899
dev_langs: C++
helpviewer_keywords: C3899
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6faa02f969815964a720b8f1084298eeb71227cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3899"></a>Errore del compilatore C3899
'var': utilizzo l-value del membro dati initonly non è consentito direttamente in un'area parallela della classe 'class'  
  
 Un [initonly (C + + CLI)](../../dotnet/initonly-cpp-cli.md) membro dati non può essere inizializzato nella parte di un costruttore in un [parallela](../../parallel/openmp/reference/parallel.md) area.  In questo modo il compilatore esegue una rilocazione interna del codice, in modo che, in modo efficace non fa parte del costruttore.  
  
 Per risolvere, inizializzare il membro dati initonly nel costruttore, ma all'esterno dell'area parallela.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3899.  
  
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