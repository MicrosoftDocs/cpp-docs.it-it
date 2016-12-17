---
title: "Non &#232; possibile implementare il membro &#39;&lt;nomeinterfaccia&gt;.&lt;nomeroutine&gt;&#39; corrispondente alla firma perch&#233; l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; contiene pi&#249; membri con nome e firma uguali: &lt;elencofirme&gt; | Microsoft Docs"
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
  - "vbc30937"
  - "bc30937"
helpviewer_keywords: 
  - "BC30937"
ms.assetid: e917d85e-95e0-431a-9d09-39ce5d4fc894
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile implementare il membro &#39;&lt;nomeinterfaccia&gt;.&lt;nomeroutine&gt;&#39; corrispondente alla firma perch&#233; l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; contiene pi&#249; membri con nome e firma uguali: &lt;elencofirme&gt;
Una routine o proprietà prova a implementare una routine o proprietà definita in un'interfaccia implementata, ma il compilatore trova più versioni della routine o della proprietà d'interfaccia con lo stesso nome e la stessa firma.  
  
 Questo errore può verificarsi in una situazione con tipi generici costruiti, come illustrano le seguenti dichiarazioni di struttura.  
  
```  
Public Interface baseInterface(Of t) Sub doSomething(ByVal inputValue As String) Sub doSomething(ByVal inputValue As t) End Class Public Class implementingClass Implements baseInterface(Of String) Sub doSomething(ByVal inputValue As String) _ Implements baseInterface(Of String).doSomething End Sub End Class  
```  
  
 Dal momento che `implementingClass` implementa `baseInterface` fornendo `String` al relativo parametro di tipo `t`, le due versioni di `doSomething` in `baseInterface` assumono firme identiche per quanto riguarda `implementingClass`. Di conseguenza, il compilatore non riesce a determinare quale versione implementare.  
  
 **ID errore:** BC30937  
  
### Per correggere l'errore  
  
-   Modificare l'argomento o gli argomenti di tipo che si forniscono alla classe base in modo che non comportino una o più firme identiche delle routine o proprietà del membro.  
  
     \-oppure\-  
  
-   Non implementare questa classe base. Non è possibile implementarla con la raccolta degli argomenti di tipo in uso perché altrimenti sarebbe necessario implementare ciascuno dei relativi membri.  
  
## Vedere anche  
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)