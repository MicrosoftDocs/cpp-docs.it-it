---
title: 'Procedura: Interoperabilità di marshalling di matrici usando C++'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- arrays [C++], marshaling
- marshaling [C++], arrays
- interop [C++], arrays
- C++ Interop, arrays
- data marshaling [C++], arrays
ms.assetid: c2b37ab1-8acf-4855-ad3c-7d2864826b14
ms.openlocfilehash: 0b27fd65b7d42bff2a009b14c39d9547d8a4a919
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57740004"
---
# <a name="how-to-marshal-arrays-using-c-interop"></a>Procedura: Interoperabilità di marshalling di matrici usando C++

In questo argomento viene illustrato un facet di interoperabilità di Visual C++. Per altre informazioni, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Il codice seguente usa gli esempi di [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma direttive per implementare funzioni gestite e nello stesso file, ma queste funzioni interagiscono nello stesso modo se definiti in file separati. Non è necessario essere compilato con file contenenti solo funzioni non gestite [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come passare una matrice gestita a una funzione non gestita. Usa la funzione gestita [pin_ptr (C + + / CLI)](../windows/pin-ptr-cpp-cli.md) per disattivare la garbage collection per la matrice prima di chiamare la funzione non gestita. Fornendo la funzione non gestita con un puntatore bloccato nell'heap del Garbage Collector, è possibile evitare il sovraccarico di creazione di una copia della matrice. Per dimostrare che la funzione non gestita accede alla memoria dell'heap di Garbage Collection, modifica il contenuto della matrice e le modifiche vengono applicate quando la funzione gestita riprende il controllo.

```
// PassArray1.cpp
// compile with: /clr
#ifndef _CRT_RAND_S
#define _CRT_RAND_S
#endif

#include <iostream>
#include <stdlib.h>
using namespace std;

using namespace System;

#pragma unmanaged

void TakesAnArray(int* a, int c) {
   cout << "(unmanaged) array received:\n";
   for (int i=0; i<c; i++)
      cout << "a[" << i << "] = " << a[i] << "\n";

   unsigned int number;
   errno_t err;

   cout << "(unmanaged) modifying array contents...\n";
   for (int i=0; i<c; i++) {
      err = rand_s( &number );
      if ( err == 0 )
         a[i] = number % 100;
   }
}

#pragma managed

int main() {
   array<int>^ nums = gcnew array<int>(5);

   nums[0] = 0;
   nums[1] = 1;
   nums[2] = 2;
   nums[3] = 3;
   nums[4] = 4;

   Console::WriteLine("(managed) array created:");
   for (int i=0; i<5; i++)
      Console::WriteLine("a[{0}] = {1}", i, nums[i]);

   pin_ptr<int> pp = &nums[0];
   TakesAnArray(pp, 5);

   Console::WriteLine("(managed) contents:");
   for (int i=0; i<5; i++)
      Console::WriteLine("a[{0}] = {1}", i, nums[i]);
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il passaggio di una matrice non gestita di una funzione gestita. La funzione gestita accede alla memoria matrice direttamente (anziché creando una matrice gestita e copiando il contenuto della matrice), che consente le modifiche apportate dalla funzione gestita a essere applicate anche la funzione non gestita quando acquisisca di nuovo controllo.

```
// PassArray2.cpp
// compile with: /clr
#include <iostream>
using namespace std;

using namespace System;

#pragma managed

void ManagedTakesAnArray(int* a, int c) {
   Console::WriteLine("(managed) array received:");
   for (int i=0; i<c; i++)
      Console::WriteLine("a[{0}] = {1}", i, a[i]);

   cout << "(managed) modifying array contents...\n";
   Random^ r = gcnew Random(DateTime::Now.Second);
   for (int i=0; i<c; i++)
      a[i] = r->Next(100);
}

#pragma unmanaged

void NativeFunc() {
   int nums[5] = { 0, 1, 2, 3, 4 };

   printf_s("(unmanaged) array created:\n");
   for (int i=0; i<5; i++)
      printf_s("a[%d] = %d\n", i, nums[i]);

   ManagedTakesAnArray(nums, 5);

   printf_s("(ummanaged) contents:\n");
   for (int i=0; i<5; i++)
      printf_s("a[%d] = %d\n", i, nums[i]);
}

#pragma managed

int main() {
   NativeFunc();
}
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
