---
title: Cast di tipo C con /clr (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- C-style casts and /clr
ms.assetid: d2a4401a-156a-4da9-8d12-923743e26913
ms.openlocfilehash: 2b7e492c62047e3b38224637f842d8a7fcbae84f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80172594"
---
# <a name="c-style-casts-with-clr-ccli"></a>Cast di tipo C con /clr (C++/CLI)

L'argomento seguente si applica solo a Common Language Runtime.

Se usato con tipi CLR, il compilatore prova a eseguire il mapping di cast di tipo C a uno dei cast elencati di seguito, nell'ordine indicato:

1. const_cast

2. safe_cast

3. safe_cast più const_cast

4. static_cast

5. static_cast più const_cast

Se nessuno dei cast elencati sopra è valido e se il tipo dell'espressione e il tipo di destinazione sono tipi riferimento CLR, il cast di tipo C viene mappato a un controllo in fase di esecuzione (istruzione MSIL castclass). In caso contrario, un cast di tipo C viene considerato non valido e il compilatore genera un errore.

## <a name="remarks"></a>Osservazioni

Un cast di tipo C non è consigliato. Quando si compila con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), usare [safe_cast](safe-cast-cpp-component-extensions.md).

L'esempio seguente mostra un cast di tipo C mappato a **const_cast**.

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

L'esempio seguente mostra un cast di tipo C mappato a **safe_cast**.

```cpp
// cstyle_casts_2.cpp
// compile with: /clr
using namespace System;
int main() {
   Object ^ o = "hello";
   String ^ s = (String^)o;
}
```

L'esempio seguente mostra un cast di tipo C mappato a **safe_cast** più **const_cast**.

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

L'esempio seguente mostra un cast di tipo C mappato a **static_cast**.

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

L'esempio seguente mostra un cast di tipo C mappato a **static_cast** più **const_cast**.

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

L'esempio seguente mostra un cast di tipo C mappato a un controllo in fase di esecuzione.

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

L'esempio seguente mostra un cast di tipo C non valido che fa sì che il compilatore generi un errore.

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

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
