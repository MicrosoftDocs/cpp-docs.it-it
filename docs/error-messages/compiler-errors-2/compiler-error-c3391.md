---
description: 'Altre informazioni su: errore del compilatore C3391'
title: Errore del compilatore C3391
ms.date: 11/04/2016
f1_keywords:
- C3391
helpviewer_keywords:
- C3391
ms.assetid: c32532b9-7db4-4ccd-84b9-479e5a1a19d1
ms.openlocfilehash: 1bac535136b2c6115bf0f5ff31c9e098407e03bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313398"
---
# <a name="compiler-error-c3391"></a>Errore del compilatore C3391

' type_arg ': argomento di tipo non valido per il parametro generico ' param ' del ' generic_type ' generico. deve essere un tipo di valore non nullable

L'istanza di un tipo generico è stata creata in modo non corretto. Controllare la definizione del tipo. Per ulteriori informazioni, vedere <xref:System.Nullable> e [generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene usato C# per creare un componente che contiene un tipo generico con determinati vincoli non supportati per la creazione di tipi generici in C++/CLI. Per altre informazioni, vedere [Vincoli sui parametri di tipo](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3391.cs
// Compile by using: csc /target:library C3391.cs
// a C# program
public class GR<N>
where N : struct {}
```

Quando il componente C3391.dll è disponibile, l'esempio seguente genera l'C3391.

```cpp
// C3391_b.cpp
// Compile by using: cl /clr C3391_b.cpp
#using <C3391.dll>
using namespace System;
value class VClass {};

int main() {
   GR< Nullable<VClass> >^ a =
      gcnew GR< Nullable<VClass> >();   // C3391 can't be Nullable
   GR<VClass>^ aa = gcnew GR<VClass>(); // OK
}
```
