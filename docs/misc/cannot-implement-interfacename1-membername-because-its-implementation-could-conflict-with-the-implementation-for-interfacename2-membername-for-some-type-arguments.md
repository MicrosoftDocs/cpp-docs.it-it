---
title: "Impossibile implementare l&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;.&lt;nomemembro&gt;&#39;. La sua implementazione potrebbe essere in conflitto con l&#39;implementazione di &#39;&lt;nomeinterfaccia2&gt;.&lt;nomemembro&gt;&#39; per alcuni argomenti di tipo | Microsoft Docs"
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
  - "bc32125"
  - "vbc32125"
helpviewer_keywords: 
  - "BC32125"
ms.assetid: 74321d27-4ff8-440c-b5de-d67e98fff274
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile implementare l&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;.&lt;nomemembro&gt;&#39;. La sua implementazione potrebbe essere in conflitto con l&#39;implementazione di &#39;&lt;nomeinterfaccia2&gt;.&lt;nomemembro&gt;&#39; per alcuni argomenti di tipo
Una classe implementa più di un'interfaccia generica, una delle quali eredita dall'altra, e le due implementazioni di un membro di interfaccia potrebbero essere in conflitto per determinati valori di argomenti di tipo.  
  
 Le istruzioni seguenti possono generare questo errore.  
  
```  
Public Interface iFace1(Of t) Sub testSub() End Interface Public Interface iFace2(Of u) Inherits iFace1(Of u) End Interface Public Class testClass(Of y, z) Implements iFace1(Of y), iFace2(Of z) Public Sub testSuby() Implements iFace1(Of y).testSub End Sub Public Sub testSubz() Implements iFace1(Of z).testSub End Sub End Class  
```  
  
 Dal momento che `iFace2` eredita da `iFace1` usando il relativo parametro di tipo \(`u`\), `testClass` implementerebbe due versioni di `iFace1.testSub` con firme identiche se lo stesso argomento di tipo venisse passato a `y` e `z`. In questo modo si produrrebbe un'ambiguità sulla versione a cui accedere.  
  
 **ID errore:** BC32125  
  
### Per correggere l'errore  
  
-   Modificare la struttura di ereditarietà delle interfacce in modo che `iFace1` non possa essere implementata con due differenti argomenti di tipo.  
  
     \-oppure\-  
  
-   Rimuovere dall'istruzione `Implements` una delle interfacce che producono il conflitto di implementazione.  
  
## Vedere anche  
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)