---
description: 'Altre informazioni su: errore del compilatore C3392'
title: Errore del compilatore C3392
ms.date: 11/04/2016
f1_keywords:
- C3392
helpviewer_keywords:
- C3392
ms.assetid: e4757596-e2aa-4314-b01e-5c4bfd2110e9
ms.openlocfilehash: c64b49bee05079fd2d1b468d807af5b1fd89ba26
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316336"
---
# <a name="compiler-error-c3392"></a>Errore del compilatore C3392

'type_arg': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico. Deve avere un costruttore pubblico senza parametri

L'istanza di un tipo generico è stata creata in modo non corretto. Controllare la definizione del tipo. Per ulteriori informazioni, vedere  [generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene usato C# per creare un componente che contiene un tipo generico con determinati vincoli non supportati per la creazione di tipi generici in C++/CLI. Per altre informazioni, vedere [Vincoli sui parametri di tipo](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3392.cs
// Compile by using: csc /target:library C3392.cs
// a C# program
public class GR<C, V, N>
where C : class
where V : struct
where N : new() {}
```

Quando il componente C3392.dll è disponibile, l'esempio seguente genera l'C3392.

```cpp
// C3392_b.cpp
// Compile by using: cl /clr C3392_b.cpp
#using <C3392.dll>

ref class R { R(int) {} };
ref class N { N() {} };

value class V {};

ref class N2 { public: N2() {} };
ref class R2 { public: R2() {} };

int main () {
   GR<R^, V, N^>^ gr1;   // C3392
   GR<R^, V, N2^>^ gr1a; // OK

   GR<R^, N^, N^>^ gr3;  // C3392
   GR<R^, V, N2^>^ gr3a; // OK

   GR<R^, V, R^>^ gr4;   // C3392
   GR<R^, V, R2^>^ gr4a; // OK
}
```
