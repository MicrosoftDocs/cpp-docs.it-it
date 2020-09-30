---
title: Errore del compilatore C3899
ms.date: 11/04/2016
f1_keywords:
- C3899
helpviewer_keywords:
- C3899
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
ms.openlocfilehash: f3650d994e3102f71ab1d3598a4d1482f50b3334
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510035"
---
# <a name="compiler-error-c3899"></a>Errore del compilatore C3899

' var ': utilizzo l-value del membro dati initonly non consentito direttamente in un'area parallela della classe ' Class '

Un membro dati [initonly (C++/CLI)](../../dotnet/initonly-cpp-cli.md) non può essere inizializzato all'interno di tale parte di un costruttore che si trova in un'area [parallela](../../parallel/openmp/reference/openmp-directives.md#parallel) .  Questo è dovuto al fatto che il compilatore esegue una rilocazione interna di tale codice, in modo che non fa più parte del costruttore.

Per risolvere il tentativo, inizializzare il membro dati initonly nel costruttore, ma all'esterno dell'area parallela.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3899.

```cpp
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
