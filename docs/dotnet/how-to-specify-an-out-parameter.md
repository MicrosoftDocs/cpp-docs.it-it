---
description: 'Altre informazioni su: procedura: specificare un parametro out'
title: 'Procedura: Specificare un parametro out'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- function parameters
- out parameters
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
ms.openlocfilehash: b43930557b4bdfd22bf902a6d9adf95eb8ba4d01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286338"
---
# <a name="how-to-specify-an-out-parameter"></a>Procedura: Specificare un parametro out

In questo esempio viene illustrato come specificare che un parametro di funzione è un `out` parametro e come chiamare tale funzione da un programma C#.

Un `out` parametro viene specificato in C++ tramite <xref:System.Runtime.InteropServices.OutAttribute> .

## <a name="example"></a>Esempio

La prima parte di questo esempio crea una DLL C++. Definisce un tipo che contiene una funzione con un `out` parametro.

```cpp
// cpp_out_param.cpp
// compile with: /LD /clr
using namespace System;
public value struct TestStruct {
   static void Test([Runtime::InteropServices::Out] String^ %s) {
      s = "a string";
   }
};
```

Questo file di origine è un client C# che utilizza il componente C++ creato nell'esempio precedente.

```csharp
// cpp_out_param_2.cs
// compile with: /reference:cpp_out_param.dll
using System;
class TestClass {
   public static void Main() {
      String t;
      TestStruct.Test(out t);
      System.Console.WriteLine(t);
   }
}
```

```Output
a string
```

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
