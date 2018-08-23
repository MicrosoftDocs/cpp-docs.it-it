---
title: Esegue il cast di tipo C con - clr (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- C-style casts and /clr
ms.assetid: d2a4401a-156a-4da9-8d12-923743e26913
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 28a92f115e2d5fdd3185285f245abf6d282efa7a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595006"
---
# <a name="c-style-casts-with-clr-ccli"></a>Cast di tipo C con /clr (C++/CLI)

L'argomento seguente si applica solo a Common Language Runtime.

Se usato con i tipi CLR, il compilatore prova a eseguire il mapping di tipo C eseguire il cast a uno dei cast elencati di seguito, nell'ordine seguente:

1. const_cast

2. safe_cast

3. safe_cast plus const_cast

4. static_cast

5. static_cast plus const_cast

Se nessuno dei cast elencati in precedenza è valido e se il tipo dell'espressione e il tipo di destinazione sono tipi riferimento CLR, cast di tipo C esegue il mapping a un controllo di runtime (istruzione MSIL castclass). In caso contrario, un cast di tipo C viene considerato non valido e il compilatore genera un errore.

## <a name="remarks"></a>Note

Non è consigliato un cast di tipo C. Durante la compilazione con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), usare [safe_cast](../windows/safe-cast-cpp-component-extensions.md).

L'esempio seguente illustra un cast di tipo C che esegue il mapping a un **const_cast**.

```cpp
// cstyle_casts_1.cpp
// compile with: /clr
using namespace System;

ref struct R {};
int main() {
   const R^ constrefR = gcnew R();
   R^ nonconstR = (R^)(constrefR);
}
```

L'esempio seguente illustra un cast di tipo C che esegue il mapping a un **safe_cast**.

```cpp
// cstyle_casts_2.cpp
// compile with: /clr
using namespace System;
int main() {
   Object ^ o = "hello";
   String ^ s = (String^)o;
}
```

L'esempio seguente illustra un cast di tipo C che esegue il mapping a un **safe_cast** plus **const_cast**.

```cpp
// cstyle_casts_3.cpp
// compile with: /clr
using namespace System;

ref struct R {};
ref struct R2 : public R {};

int main() {
   const R^ constR2 = gcnew R2();
   try {
   R2^ b2DR = (R2^)(constR2);
   }
   catch(InvalidCastException^ e) {
      System::Console::WriteLine("Invalid Exception");
   }
}
```

L'esempio seguente illustra un cast di tipo C che esegue il mapping a un **static_cast**.

```cpp
// cstyle_casts_4.cpp
// compile with: /clr
using namespace System;

struct N1 {};
struct N2 {
   operator N1() {
      return N1();
   }
};

int main() {
   N2 n2;
   N1 n1 ;
   n1 = (N1)n2;
}
```

L'esempio seguente illustra un cast di tipo C che esegue il mapping a un **static_cast** plus **const_cast**.

```cpp
// cstyle_casts_5.cpp
// compile with: /clr
using namespace System;
struct N1 {};

struct N2 {
   operator const N1*() {
      static const N1 n1;
      return &n1;
   }
};

int main() {
   N2 n2;
   N1* n1 = (N1*)(const N1*)n2;   // const_cast + static_cast
}
```

L'esempio seguente mostra un cast di tipo C che esegue il mapping a un controllo in fase di esecuzione.

```cpp
// cstyle_casts_6.cpp
// compile with: /clr
using namespace System;

ref class R1 {};
ref class R2 {};

int main() {
   R1^ r  = gcnew R1();
   try {
      R2^ rr = ( R2^)(r);
   }
   catch(System::InvalidCastException^ e) {
      Console::WriteLine("Caught expected exception");
   }
}
```

L'esempio seguente mostra un valido cast di tipo C, in modo che il compilatore per l'emissione di un errore.

```cpp
// cstyle_casts_7.cpp
// compile with: /clr
using namespace System;
int main() {
   String^s = S"hello";
   int i = (int)s;   // C2440
}
```

## <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)