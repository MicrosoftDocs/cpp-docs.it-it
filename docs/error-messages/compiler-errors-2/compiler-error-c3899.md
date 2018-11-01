---
title: Errore del compilatore C3899
ms.date: 11/04/2016
f1_keywords:
- C3899
helpviewer_keywords:
- C3899
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
ms.openlocfilehash: 26860ba0e8fd92f491ee389147605ba82cecf25c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598393"
---
# <a name="compiler-error-c3899"></a>Errore del compilatore C3899

'var': utilizzo l-value del membro dati initonly non è consentito direttamente in un'area parallela nella classe 'class'

Un' [initonly (C + c++ /CLI CLI)](../../dotnet/initonly-cpp-cli.md) Impossibile inizializzare il membro dati all'interno di tale parte di un costruttore che si trova in un [parallele](../../parallel/openmp/reference/parallel.md) area.  Questo è perché il compilatore esegue una rilocazione interna di tale codice, tale che, in modo efficace non è più parte del costruttore.

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