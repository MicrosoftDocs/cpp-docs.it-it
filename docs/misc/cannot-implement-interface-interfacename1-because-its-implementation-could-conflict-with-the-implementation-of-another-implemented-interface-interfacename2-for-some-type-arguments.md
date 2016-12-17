---
title: "Non &#232; possibile eseguire l&#39;implementazione dell&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;&#39; perch&#233; potrebbe essere in conflitto con l&#39;implementazione di un&#39;altra interfaccia &#39;&lt;nomeinterfaccia2&gt;&#39; per alcuni argomenti di tipo | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BC32072"
  - "vbc32072"
helpviewer_keywords: 
  - "BC32072"
ms.assetid: af1cc688-c8cf-4cb2-a8a9-310f5139fe7b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile eseguire l&#39;implementazione dell&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;&#39; perch&#233; potrebbe essere in conflitto con l&#39;implementazione di un&#39;altra interfaccia &#39;&lt;nomeinterfaccia2&gt;&#39; per alcuni argomenti di tipo
Una dichiarazione di classe include un'istruzione `Implements` che specifica due o più interfacce, di cui almeno una delle due è generica e due delle implementazioni potrebbero entrare in conflitto per alcuni valori degli argomenti di tipo.  
  
 Le istruzioni seguenti possono generare questo errore.  
  
```  
Public Interface iFace1 Sub testSub(ByVal arg As String) End Interface Public Interface iFace2(Of t) Sub testSub(ByVal arg As t) End Interface Public Class testClass Implements iFace1, iFace2(Of String) End Class  
```  
  
 Poiché `iFace2` viene creato usando `String`, `testClass` deve implementare due versioni di `testSub` con firme identiche. In questo modo si produrrebbe un'ambiguità sulla versione a cui accedere.  
  
 **ID errore:** BC32072  
  
### Per correggere l'errore  
  
-   Modificare l'argomento di tipo fornito all'interfaccia generica in modo che non vi siano conflitti.  
  
     \-oppure\-  
  
-   Rimuovere dall'istruzione `Implements` una delle interfacce che producono il conflitto di implementazione.  
  
## Vedere anche  
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)