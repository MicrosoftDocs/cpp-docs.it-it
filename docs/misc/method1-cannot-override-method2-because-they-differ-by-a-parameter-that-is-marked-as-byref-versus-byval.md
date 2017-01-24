---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per un parametro contrassegnato da una parte come &#39;ByRef&#39; e dall&#39;altra come &#39;ByVal&#39; | Microsoft Docs"
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
  - "vbc30398"
  - "bc30398"
helpviewer_keywords: 
  - "BC30398"
ms.assetid: 78d62276-4ad9-4876-8c35-a30c9c195638
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per un parametro contrassegnato da una parte come &#39;ByRef&#39; e dall&#39;altra come &#39;ByVal&#39;
Si è provato a eseguire l'override di un metodo con un altro metodo che si differenzia per un parametro contrassegnato come `ByRef` anziché `ByVal`. I membri sottoposti a override devono avere gli stessi argomenti dei membri ereditati dalla classe base.  
  
 **ID errore:** BC30398  
  
### Per correggere l'errore  
  
-   Verificare che i parametri siano entrambi `ByRef` o `ByVal`.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)