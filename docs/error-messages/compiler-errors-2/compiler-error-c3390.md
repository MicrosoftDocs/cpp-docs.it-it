---
title: Errore del compilatore C3390
ms.date: 11/04/2016
f1_keywords:
- C3390
helpviewer_keywords:
- C3390
ms.assetid: 84800a87-c8e6-45aa-82ae-02f816dc8d97
ms.openlocfilehash: e1146bf0ed2dd6d38a3c67cc6799c0e73f253323
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532617"
---
# <a name="compiler-error-c3390"></a>Errore del compilatore C3390

'type_arg': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico. Deve essere un tipo riferimento

L'istanza di un tipo generico è stata creata in modo non corretto.  Controllare la definizione del tipo.  Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Nel primo esempio Usa c# per creare un componente che contiene un tipo generico con vincoli che non sono supportati durante la creazione di tipi generici in C + + / CLR. Per altre informazioni, vedere [Vincoli sui parametri di tipo](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```cs
// C3390.cs
// Compile by using: csc /target:library C3390.cs
// a C# program
public class GR<C, V, N>
where C : class
where V : struct
where N : new() {}
```

Quando il componente C3390.dll è disponibile, l'esempio seguente genera l'errore C3390.

```cpp
// C3390_b.cpp
// Compile by using: cl /clr C3390_b.cpp
#using <C3390.dll>
ref class R { R(int) {} };
value class V {};
ref struct N { N() {} };

int main () {
   GR<V, V, N^>^ gr2;   // C3390 first type must be a ref type
   GR<R^, V, N^>^ gr2b; // OK
}
```