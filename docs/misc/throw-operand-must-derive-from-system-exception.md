---
title: "L&#39;operando &#39;Throw&#39; deve derivare da &#39;System.Exception&#39; | Microsoft Docs"
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
  - "vbc30665"
  - "bc30665"
helpviewer_keywords: 
  - "BC30665"
ms.assetid: 7c228087-39ea-4b30-a410-6ba711e67e5e
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando &#39;Throw&#39; deve derivare da &#39;System.Exception&#39;
L'argomento fornito a `Throw` deve essere un'istanza di `System.Exception` o un'istanza di una classe derivata da `System.Exception`.  
  
 **ID errore:** BC30665  
  
### Per correggere l'errore  
  
-   Usare un argomento derivato da `System.Exception`, come nell'esempio seguente.  
  
    ```  
    Throw New System.Exception("This is an error.")  
    ```  
  
## Vedere anche  
 [Throw Statement](../Topic/Throw%20Statement%20\(Visual%20Basic\).md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Classe di eccezione in Visual Basic](http://msdn.microsoft.com/it-it/9aac396f-34ca-4afb-8e6c-e523cb690ba9)   
 [Gestione di eccezioni ed errori in Visual Basic](http://msdn.microsoft.com/it-it/3e351e73-cf23-40ab-8b60-05794160529e)