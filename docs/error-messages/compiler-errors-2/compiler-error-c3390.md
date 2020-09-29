---
title: Errore del compilatore C3390
description: Errore del compilatore Microsoft C++ C3390, le sue cause e come risolverli.
ms.date: 09/26/2020
f1_keywords:
- C3390
helpviewer_keywords:
- C3390
ms.assetid: 84800a87-c8e6-45aa-82ae-02f816dc8d97
ms.openlocfilehash: 467b379d7f5a349a217b566dc55b28d5fbd789da
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414360"
---
# <a name="compiler-error-c3390"></a>Errore del compilatore C3390

> '*type_arg*': argomento di tipo non valido per il parametro generico '*param*' del '*generic_type*' generico. deve essere un tipo riferimento

L'istanza di un tipo generico è stata creata in modo non corretto. Controllare la definizione del tipo.

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Nel primo esempio viene usato C# per creare un componente che contiene un tipo generico. Questo tipo presenta alcuni vincoli che non sono supportati durante la creazione di tipi generici in C++/CLI. Per altre informazioni, vedere [Vincoli sui parametri di tipo](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3390.cs
// Compile by using: csc /target:library C3390.cs
// a C# program
public class GR<C, V, N>
where C : class
where V : struct
where N : new() {}
```

Quando il componente C3390.dll è disponibile, l'esempio seguente genera l'C3390.

```cpp
// C3390_b.cpp
// Compile by using: cl /clr C3390_b.cpp
#using <C3390.dll>
ref class R { R(int) {} };
value class V {};
ref struct N { N() {} };

int main () {
   GR<V, V, N^>^ gr2;   // C3390 first type must be a ref type
   GR<R^, V, N^>^ gr2b; // OK - do this instead
}
```
