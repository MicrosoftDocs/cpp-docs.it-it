---
title: Elenchi di argomenti variabili (...) (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- variable argument lists
- parameter arrays
ms.assetid: db1a27f4-02a8-4318-8690-1f2893f52b38
ms.openlocfilehash: ccbd8cf608b5041a0c8a64235cf0b4a0c2e02051
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630063"
---
# <a name="variable-argument-lists--ccli"></a>Elenchi di argomenti variabili (...) (C++/CLI)

Questo esempio viene illustrato come utilizzare il `...` sintassi in C + + c++ /CLI per implementare le funzioni che hanno un numero variabile di argomenti della riga di comando.

> [!NOTE]
> Questo argomento si riferisce a C + + / CLI. Per informazioni sull'uso di `...` in C++ Standard ISO, vedere [ellissi e modelli Variadic](../cpp/ellipses-and-variadic-templates.md) e sui puntini di sospensione e argomenti predefiniti in [espressioni in forma suffissa](../cpp/postfix-expressions.md).

Il parametro che utilizza `...` deve essere l'ultimo parametro nell'elenco dei parametri.

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

Nell'esempio seguente viene illustrato come chiamare da c# una funzione di Visual C++ che accetta un numero variabile di argomenti.

```cpp
// mcppv2_paramarray2.cpp
// compile with: /clr:safe /LD
using namespace System;

public ref class C {
public:
   void f( ... array<String^>^ a ) {}
};
```

La funzione `f` può essere chiamato da codice c# o Visual Basic, ad esempio, come se fosse una funzione che può accettare un numero variabile di argomenti.

In c#, un argomento passato a un `ParamArray` parametro può essere chiamato da un numero variabile di argomenti. Esempio di codice seguente è nel linguaggio c#.

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

[Matrici](../windows/arrays-cpp-component-extensions.md)