---
title: "Procedura: Effettuare il marshalling di strutture utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- C++ Interop, structures
- structures [C++], marshaling
- data marshaling [C++], structures
- interop [C++], structures
- marshaling [C++], structures
ms.assetid: c2080200-f983-4d6e-a557-cd870f060a54
ms.openlocfilehash: 8ca53761647c1f3d5ea059ddf381cb334cd2a993
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91413840"
---
# <a name="how-to-marshal-structures-using-c-interop"></a>Procedura: Effettuare il marshalling di strutture utilizzando l'interoperabilità C++

In questo argomento viene illustrato un facet di interoperabilità Visual C++. Per ulteriori informazioni, vedere [utilizzo dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma queste funzioni interagiscono nello stesso modo se definite in file distinti. I file che contengono solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example-pass-structure-from-managed-to-unmanaged-function"></a>Esempio: passare la struttura dalla funzione gestita a quella non gestita

Nell'esempio seguente viene illustrato il passaggio di una struttura da una funzione gestita a una funzione non gestita, sia per valore che per riferimento. Poiché la struttura in questo esempio contiene solo tipi di dati intrinseci semplici (vedere [tipi copiabili e non copiabili](/dotnet/framework/interop/blittable-and-non-blittable-types)), non è richiesto alcun marshalling speciale. Per effettuare il marshalling di strutture non copiabili, ad esempio quelle che contengono puntatori, vedere [procedura: effettuare il marshalling di puntatori incorporati tramite l'interoperabilità C++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

```cpp
// PassStruct1.cpp
// compile with: /clr

#include <stdio.h>
#include <math.h>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

struct Location {
   int x;
   int y;
};

double GetDistance(Location loc1, Location loc2) {
   printf_s("[unmanaged] loc1(%d,%d)", loc1.x, loc1.y);
   printf_s(" loc2(%d,%d)\n", loc2.x, loc2.y);

   double h = loc1.x - loc2.x;
   double v = loc1.y = loc2.y;
   double dist = sqrt( pow(h,2) + pow(v,2) );

   return dist;
}

void InitLocation(Location* lp) {
   printf_s("[unmanaged] Initializing location...\n");
   lp->x = 50;
   lp->y = 50;
}

#pragma managed

int main() {
   Location loc1;
   loc1.x = 0;
   loc1.y = 0;

   Location loc2;
   loc2.x = 100;
   loc2.y = 100;

   double dist = GetDistance(loc1, loc2);
   Console::WriteLine("[managed] distance = {0}", dist);

   Location loc3;
   InitLocation(&loc3);
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);
}
```

## <a name="example-pass-structure-from-unmanaged-to-managed-function"></a>Esempio: passare la struttura dalla funzione non gestita a quella gestita

Nell'esempio seguente viene illustrato il passaggio di una struttura da una funzione non gestita a una funzione gestita, sia per valore che per riferimento. Poiché la struttura in questo esempio contiene solo tipi di dati intrinseci semplici (vedere [tipi copiabili e non copiabili](/dotnet/framework/interop/blittable-and-non-blittable-types)), non è necessario alcun marshalling speciale. Per effettuare il marshalling di strutture non copiabili, ad esempio quelle che contengono puntatori, vedere [procedura: effettuare il marshalling di puntatori incorporati tramite l'interoperabilità C++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

```cpp
// PassStruct2.cpp
// compile with: /clr
#include <stdio.h>
#include <math.h>
using namespace System;

// native structure definition
struct Location {
   int x;
   int y;
};

#pragma managed

double GetDistance(Location loc1, Location loc2) {
   Console::Write("[managed] got loc1({0},{1})", loc1.x, loc1.y);
   Console::WriteLine(" loc2({0},{1})", loc2.x, loc2.y);

   double h = loc1.x - loc2.x;
   double v = loc1.y = loc2.y;
   double dist = sqrt( pow(h,2) + pow(v,2) );

   return dist;
}

void InitLocation(Location* lp) {
   Console::WriteLine("[managed] Initializing location...");
   lp->x = 50;
   lp->y = 50;
}

#pragma unmanaged

int UnmanagedFunc() {
   Location loc1;
   loc1.x = 0;
   loc1.y = 0;

   Location loc2;
   loc2.x = 100;
   loc2.y = 100;

   printf_s("(unmanaged) loc1=(%d,%d)", loc1.x, loc1.y);
   printf_s(" loc2=(%d,%d)\n", loc2.x, loc2.y);

   double dist = GetDistance(loc1, loc2);
   printf_s("[unmanaged] distance = %f\n", dist);

   Location loc3;
   InitLocation(&loc3);
   printf_s("[unmanaged] got x=%d y=%d\n", loc3.x, loc3.y);

    return 0;
}

#pragma managed

int main() {
   UnmanagedFunc();
}
```

## <a name="see-also"></a>Vedere anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
