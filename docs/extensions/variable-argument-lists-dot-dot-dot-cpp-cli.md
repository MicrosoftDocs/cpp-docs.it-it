---
title: Elenchi di argomenti variabili (...) (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- variable argument lists
- parameter arrays
ms.assetid: db1a27f4-02a8-4318-8690-1f2893f52b38
ms.openlocfilehash: ec1e2cefa33bc9d749d0f05e170c2f2db9b25f02
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515956"
---
# <a name="variable-argument-lists--ccli"></a>Elenchi di argomenti variabili (...) (C++/CLI)

Questo esempio illustra come usare la sintassi `...` in C++/CLI per implementare funzioni che hanno un numero variabile di argomenti.

> [!NOTE]
> Questo argomento si riferisce a C++/CLI. Per informazioni sull'uso di `...` nel linguaggio C++ standard ISO, vedere [Ellissi e modelli variadic](../cpp/ellipses-and-variadic-templates.md) ed Ellissi e argomenti predefiniti in [Espressioni in forma suffissa](../cpp/postfix-expressions.md).

Il parametro che usa `...` deve essere l'ultimo parametro nell'elenco di parametri.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// mcppv2_paramarray.cpp
// compile with: /clr
using namespace System;
double average( ... array<Int32>^ arr ) {
   int i = arr->GetLength(0);
   double answer = 0.0;

   for (int j = 0 ; j < i ; j++)
      answer += arr[j];

   return answer / i;
}

int main() {
   Console::WriteLine("{0}", average( 1, 2, 3, 6 ));
}
```

```Output
3
```

## <a name="code-example"></a>Esempio di codice

L'esempio seguente mostra come chiamare da C# una funzione Visual C++ che accetta un numero variabile di argomenti.

```cpp
// mcppv2_paramarray2.cpp
// compile with: /clr:safe /LD
using namespace System;

public ref class C {
public:
   void f( ... array<String^>^ a ) {}
};
```

La funzione `f` può essere chiamata da C# o Visual Basic, ad esempio, come se fosse una funzione che può accettare un numero variabile di argomenti.

In C# un argomento passato a un parametro `ParamArray` può essere chiamato da un numero variabile di argomenti. L'esempio di codice seguente è in C#.

```cs
// mcppv2_paramarray3.cs
// compile with: /r:mcppv2_paramarray2.dll
// a C# program

public class X {
   public static void Main() {
      // Visual C# will generate a String array to match the
      // ParamArray attribute
      C myc = new C();
      myc.f("hello", "there", "world");
   }
}
```

Una chiamata a `f` in Visual C++ può passare una matrice inizializzata o una matrice a lunghezza variabile.

```cpp
// mcpp_paramarray4.cpp
// compile with: /clr
using namespace System;

public ref class C {
public:
   void f( ... array<String^>^ a ) {}
};

int main() {
   C ^ myc = gcnew C();
   myc->f("hello", "world", "!!!");
}
```

## <a name="see-also"></a>Vedere anche

[Matrici](arrays-cpp-component-extensions.md)