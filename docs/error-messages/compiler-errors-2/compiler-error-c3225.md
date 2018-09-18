---
title: Errore del compilatore C3225 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3225
dev_langs:
- C++
helpviewer_keywords:
- C3225
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8d8b1251b9c13a71faf771c85924a75681deab7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033251"
---
# <a name="compiler-error-c3225"></a>Errore del compilatore C3225

argomento di tipo generico per 'arg' non può essere 'type', deve essere un tipo valore o tipo di handle

L'argomento tipo generico non è del tipo corretto.

Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

È possibile creare istanze di un tipo generico con un tipo nativo. L'esempio seguente genera l'errore C3225.

```
// C3225.cpp
// compile with: /clr
class A {};

ref class B {};

generic <class T>
ref class C {};

int main() {
   C<A>^ c = gcnew C<A>;   // C3225
   C<B^>^ c2 = gcnew C<B^>;   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente crea un componente utilizzando il linguaggio c#. Si noti che il vincolo specifica che è possibile creare istanze del tipo generico solo con un tipo valore.

```
// C3225_b.cs
// compile with: /target:library
// a C# program
public class MyList<T> where T: struct {}
```

## <a name="example"></a>Esempio

Questo esempio viene utilizzato il linguaggio c#-componente creato e viola il vincolo che può essere solo MyList creata un'istanza con un tipo di valore diverso da <xref:System.Nullable>. L'esempio seguente genera l'errore C3225.

```
// C3225_c.cpp
// compile with: /clr
#using "C3225_b.dll"
ref class A {};
value class B {};
int main() {
   MyList<A> x;   // C3225
   MyList<B> y;   // OK
}
```