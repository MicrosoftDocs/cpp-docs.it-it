---
title: 'Procedura: specificare un parametro out'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- function parameters
- out parameters
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
ms.openlocfilehash: 8c3499a2916eda7ab96f7958df190c803206741e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437081"
---
# <a name="how-to-specify-an-out-parameter"></a>Procedura: specificare un parametro out

Questo esempio viene illustrato come specificare che un parametro di funzione è un parametro out e come tale funzione viene chiamata da un programma c#.

Viene specificato un parametro out in Visual C++ con <xref:System.Runtime.InteropServices.OutAttribute> .

## <a name="example"></a>Esempio

La prima parte di questo esempio è una DLL di Visual C++ con un tipo che contiene una funzione con un parametro out.

```
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

Si tratta di un client c# che utilizza il componente Visual C++ creato nell'esempio precedente.

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