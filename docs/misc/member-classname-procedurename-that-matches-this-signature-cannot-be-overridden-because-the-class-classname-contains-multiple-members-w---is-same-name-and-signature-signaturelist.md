---
title: "Non &#232; possibile eseguire l&#39;override del membro &#39;&lt;nomeclasse&gt;.&lt;nomeroutine&gt;&#39; corrispondente alla firma perch&#233; la classe &#39;&#39;&lt;nomeclasse&gt;&#39; contiene pi&#249; membri con nome e firma uguali: &lt;elencofirme&gt; | Microsoft Docs"
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
  - "bc30935"
  - "vbc30935"
helpviewer_keywords: 
  - "BC30935"
ms.assetid: 1165b630-668d-417d-9e18-9b8ffe7f6980
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile eseguire l&#39;override del membro &#39;&lt;nomeclasse&gt;.&lt;nomeroutine&gt;&#39; corrispondente alla firma perch&#233; la classe &#39;&#39;&lt;nomeclasse&gt;&#39; contiene pi&#249; membri con nome e firma uguali: &lt;elencofirme&gt;
Una routine o proprietà prova a eseguire l'override di una routine o proprietà ereditata, ma il compilatore rileva più di una versione di tale routine o proprietà di base con lo stesso nome e firma.  
  
 Questo errore può verificarsi in una situazione con tipi generici costruiti, come illustrano le seguenti dichiarazioni di struttura.  
  
```  
Public Class baseClass(Of t) Public Overridable Sub doSomething(ByVal inputValue As String) End Sub Public Overridable Sub doSomething(ByVal inputValue As t) End Sub End Class Public Class derivedClass Inherits baseClass(Of String) Overrides Sub doSomething(ByVal inputValue As String) End Sub End Class  
```  
  
 Dal momento che `derivedClass` eredita `baseClass` fornendo `String` al relativo parametro di tipo `t`, le due versioni di `doSomething` in `baseClass` assumono firme identiche per quanto riguarda `derivedClass`. Di conseguenza, il compilatore non riesce a determinare di quale versione eseguire l'override.  
  
 **ID errore:** BC30935  
  
### Per correggere l'errore  
  
-   Modificare l'argomento o gli argomenti di tipo che si forniscono alla classe base in modo che non comportino una o più firme identiche delle routine o proprietà del membro.  
  
     \-oppure\-  
  
-   Se è necessario ereditare la classe base con il set di argomenti di tipo in uso, non sostituire la routine o la proprietà citate in questo messaggio di errore.  
  
## Vedere anche  
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)