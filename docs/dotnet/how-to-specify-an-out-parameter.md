---
title: 'Procedura: specificare un timeout parametro | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- function parameters
- out parameters
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c755be8e9a2358935bcfe9892f308cd2faedacd3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-specify-an-out-parameter"></a>Procedura: specificare un parametro out
In questo esempio viene illustrato come specificare che un parametro di funzione è un parametro out e come chiamare la funzione da un programma c#.  
  
 Viene specificato un parametro out in Visual C++ con <xref:System.Runtime.InteropServices.OutAttribute> .  
  
## <a name="example"></a>Esempio  
 La prima parte di questo esempio è una DLL Visual C++ con un tipo che contiene una funzione con un parametro out.  
  
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
 Si tratta di un client c# che utilizza il componente di Visual C++ creato nell'esempio precedente.  
  
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