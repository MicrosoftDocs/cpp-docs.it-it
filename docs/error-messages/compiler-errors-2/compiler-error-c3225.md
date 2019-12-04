---
title: Errore del compilatore C3225
ms.date: 11/04/2016
f1_keywords:
- C3225
helpviewer_keywords:
- C3225
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
ms.openlocfilehash: 1caa1e7ce787ffc14e615c946b5d670c75e0332a
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757618"
---
# <a name="compiler-error-c3225"></a>Errore del compilatore C3225

l'argomento di tipo generico per ' arg ' non può essere ' type '. deve essere un tipo di valore o un tipo di handle

Il tipo dell'argomento di tipo generico non è corretto.

Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Non è possibile creare un'istanza di un tipo generico con un tipo nativo. L'esempio seguente genera l'C3225.

```cpp
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

Nell'esempio seguente viene creato un componente C#utilizzando. Si noti che il vincolo specifica che è possibile creare un'istanza del tipo generico solo con un tipo di valore.

```
// C3225_b.cs
// compile with: /target:library
// a C# program
public class MyList<T> where T: struct {}
```

## <a name="example"></a>Esempio

In questo esempio viene utilizzato C#il componente creato da e viene violato il vincolo di cui è possibile creare un'istanza solo con un tipo di valore diverso da <xref:System.Nullable>. L'esempio seguente genera l'C3225.

```cpp
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
