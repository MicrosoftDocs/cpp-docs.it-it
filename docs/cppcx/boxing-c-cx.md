---
title: "Boxing (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: edfb12fa-2a9b-42f6-bdac-d4d76cb8274e
caps.latest.revision: 12
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 12
---
# Boxing (C++/CX)
L'operazione *Boxing* esegue il wrapping di una variabile di tipo valore come [Windows::Foundation::DateTime](http://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx) o di un tipo scalare fondamentale come `int` in una classe di riferimento quando la variabile viene passata a un metodo che accetta [Platform::Object^](../cppcx/platform-object-class.md) come relativo tipo di input.  
  
## Passare un tipo di valore a un parametro Object^  
 Sebbene non sia necessario eseguire la conversione boxing di una variabile per passarla a un parametro di metodo di tipo [Platform::Object^](../cppcx/platform-object-class.md), è necessario eseguire esplicitamente il cast al tipo di origine quando si recuperano valori in precedenza sottoposti alla conversione boxing.  
  
 [!code-cpp[cx_boxing#01](../snippets/cpp/VS_Snippets_Misc/cx_boxing/cpp/class1.cpp#01)]  
  
### Uso di Platform::IBox\<T\> per supportare i tipi di valore nullable  
 C\# e Visual Basic supportano il concetto dei tipi di valore nullable. In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] puoi utilizzare il tipo `Platform::IBox<T>` per esporre metodi pubblici che supportano i parametri di tipo di valore nullable. Nell'esempio riportato di seguito viene mostrato un metodo pubblico [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] che restituisce Null quando un chiamante C\# passa un valore Null per uno degli argomenti.  
  
 [!code-cpp[cx_boxing#02](../snippets/cpp/VS_Snippets_Misc/cx_boxing/cpp/class1.h#02)]  
  
 In un client XAML C\# puoi utilizzarlo nel modo seguente:  
  
```  
  
// C# client code BoxingDemo.Class1 obj = new BoxingDemo.Class1(); int? a = null; int? b = 5; var result = obj.Multiply(a,b); //result = null  
  
```  
  
## Vedere anche  
 [Sistema di tipi \(C\+\+\/CX\)](../cppcx/type-system-c-cx.md)   
 [Cast \(C\+\+\/CX\)](../cppcx/casting-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)