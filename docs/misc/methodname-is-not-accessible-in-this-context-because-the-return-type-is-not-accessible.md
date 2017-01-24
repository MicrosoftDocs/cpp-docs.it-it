---
title: "&#39;&lt;nomemetodo&gt;&#39; non &#232; accessibile in questo contesto perch&#233; il tipo restituito non &#232; accessibile | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36665"
  - "vbc36666"
  - "bc36666"
  - "vbc36665"
helpviewer_keywords: 
  - "BC36666"
  - "BC36665"
ms.assetid: 8f29eb7e-351f-486c-9d1f-3556cc11b7c5
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemetodo&gt;&#39; non &#232; accessibile in questo contesto perch&#233; il tipo restituito non &#232; accessibile
È stata chiamata una funzione con un tipo restituito a cui non è possibile accedere dall'istruzione di chiamata. Nel codice seguente, ad esempio, la chiamata da `Main` a `PublicMethod` non riesce perché il tipo restituito, `PrivateType`, viene dichiarato con il modificatore di accesso `Private` nella classe `TestClass`. Di conseguenza, il contesto all'interno del quale è possibile accedere a `PrivateType` è limitato a `TestClass`.  
  
```vb#  
Class TestClass  
  
    Dim pT As New PrivateType  
  
    Private Class PrivateType  
    End Class  
  
    '' A corresponding error is returned in this line: 'PublicMethod   
    '' cannot expose 'PrivateType' in namespace 'ConsoleApplication1'   
    '' through class 'TestClass'.  
    'Public Function PublicMethod() As PrivateType  
    '    Return Nothing  
    'End Function  
  
End Class  
  
Module Module1  
  
    Sub Main()  
  
        Dim tc As TestClass  
        '' This error occurs here, because the data type returned by   
        '' PublicMethod()is declared Private in class TestClass and   
        '' cannot be accessed from here.  
        'Console.WriteLine(tc.PublicMethod())  
  
    End Sub  
  
End Module  
```  
  
 **ID errore:** BC36665 e BC36666  
  
### Per correggere l'errore  
  
-   Se la definizione del tipo è accessibile, impostare il modificatore di accesso da `Private` su `Public`.  
  
-   Se si ha accesso, modificare il tipo restituito della funzione.  
  
-   Scrivere un metodo o un metodo di estensione che restituisca un tipo accessibile.  
  
## Vedere anche  
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)