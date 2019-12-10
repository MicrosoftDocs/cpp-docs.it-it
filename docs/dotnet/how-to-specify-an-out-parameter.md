---
title: 'Procedura: specificare un parametro out'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- function parameters
- out parameters
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
ms.openlocfilehash: 5f0b462e672de4408d50bf95d65c749bf1881078
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988434"
---
# <a name="how-to-specify-an-out-parameter"></a>Procedura: specificare un parametro out

In questo esempio viene illustrato come specificare che un parametro di funzione è un parametro out e come chiamare tale funzione da C# un programma.

Un parametro out viene specificato in Visual C++ con <xref:System.Runtime.InteropServices.OutAttribute>.

## <a name="example"></a>Esempio

La prima parte di questo esempio è una dll C++ visiva con un tipo che contiene una funzione con un parametro out.

```cpp
// cpp_out_param.cpp
// compile with: /LD /clr:safe
using namespace System;
public value struct TestStruct {
   static void Test([Runtime::InteropServices::Out] String^ %s) {
      s = "a string";
   }
};
```

## <a name="example"></a>Esempio

Si tratta di C# un client che utilizza il componente C++ visivo creato nell'esempio precedente.

```
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
