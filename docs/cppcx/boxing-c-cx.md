---
title: La conversione boxing (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
ms.assetid: edfb12fa-2a9b-42f6-bdac-d4d76cb8274e
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 24fcd5b24d03b70901c0216c46211d2bdc935f21
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="boxing-ccx"></a>Boxing (C++/CX)
L'operazione*Boxing* esegue il wrapping di una variabile di tipo valore come [Windows::Foundation::DateTime](http://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx)o di un tipo scalare fondamentale come `int`in una classe di riferimento quando la variabile viene passata a un metodo che accetta [Platform::Object^](../cppcx/platform-object-class.md) come relativo tipo di input.  
  
## <a name="passing-a-value-type-to-an-object-parameter"></a>Passare un tipo di valore a un parametro Object^  
 Sebbene non sia necessario eseguire la conversione boxing di una variabile per passarla a un parametro di metodo di tipo [Platform::Object^](../cppcx/platform-object-class.md), è necessario eseguire esplicitamente il cast al tipo di origine quando si recuperano valori in precedenza sottoposti alla conversione boxing.  
  
 [!code-cpp[cx_boxing#01](../cppcx/codesnippet/CPP/cx_boxing/class1.cpp#01)]  
  
### <a name="using-platformiboxt-to-support-nullable-value-types"></a>Tramite platform:: ibox\<T > per supportare i tipi di valore nullable  
 C# e Visual Basic supportano il concetto dei tipi di valore nullable. In C + + CX, è possibile utilizzare il `Platform::IBox<T>` tipo per esporre metodi pubblici che supportano i parametri di tipo di valore nullable. Nell'esempio seguente viene illustrato C + + metodo pubblico CX che restituisce null quando un chiamante c# passa un valore null per uno degli argomenti.  
  
 [!code-cpp[cx_boxing#02](../cppcx/codesnippet/CPP/cx_boxing/class1.h#02)]  
  
 In un client XAML C# puoi utilizzarlo nel modo seguente:  
  
```  
  
// C# client code  
    BoxingDemo.Class1 obj = new BoxingDemo.Class1();  
    int? a = null;  
    int? b = 5;  
    var result = obj.Multiply(a,b); //result = null  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)   
 [Cast (C + + CX)](../cppcx/casting-c-cx.md)   
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)