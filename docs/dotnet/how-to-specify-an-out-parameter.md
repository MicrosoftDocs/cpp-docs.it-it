---
title: 'Procedura: specificare un parametro out'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- function parameters
- out parameters
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
ms.openlocfilehash: 4bd6ad1d3009adcc124bdeb90d9d67de07112de2
ms.sourcegitcommit: c4528a7424d35039454f17778baf1b5f98fbbee7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2020
ms.locfileid: "76912790"
---
# <a name="how-to-specify-an-out-parameter"></a>Procedura: specificare un parametro out

In questo esempio viene illustrato come specificare che un parametro di funzione è un parametro di `out` e come chiamare tale funzione da C# un programma.

Un parametro `out` viene specificato in C++ utilizzando <xref:System.Runtime.InteropServices.OutAttribute>.

## <a name="example"></a>Esempio

Nella prima parte di questo esempio viene creata C++ una dll. Definisce un tipo che contiene una funzione con un parametro `out`.

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

Questo file di origine è C# un client che utilizza il C++ componente creato nell'esempio precedente.

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

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
