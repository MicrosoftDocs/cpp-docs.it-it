---
title: Errore del compilatore C3391 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3391
dev_langs:
- C++
helpviewer_keywords:
- C3391
ms.assetid: c32532b9-7db4-4ccd-84b9-479e5a1a19d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0dfe3db16954dff3dc76f707c4a14f5d56d53e18
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056430"
---
# <a name="compiler-error-c3391"></a>Errore del compilatore C3391

'type_arg': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico deve essere un tipo di valore non nullable

L'istanza di un tipo generico è stata creata in modo non corretto. Controllare la definizione del tipo. Per altre informazioni, vedere <xref:System.Nullable> e [Generics](../../windows/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente usa c# per creare un componente che contiene un tipo generico con vincoli che non sono supportati durante la creazione di tipi generici in C + + / CLI. Per altre informazioni, vedere [Vincoli sui parametri di tipo](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```cs
// C3391.cs
// Compile by using: csc /target:library C3391.cs
// a C# program
public class GR<N>
where N : struct {}
```

Quando il componente C3391.dll è disponibile, l'esempio seguente genera l'errore C3391.

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