---
title: Errore del compilatore C3899 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3899
dev_langs:
- C++
helpviewer_keywords:
- C3899
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f40f1065514437463be06a89f01e067c4324cd2e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275996"
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