---
title: "Il parametro di tipo &#39;&lt;nometipoparametro1&gt;&#39; deve contenere un vincolo &#39;New&#39; o &#39;Structure&#39; per soddisfare il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nometipoparametro2&gt;&#39; | Microsoft Docs"
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
  - "vbc32084"
  - "BC32084"
helpviewer_keywords: 
  - "BC32084"
ms.assetid: a7ff58d3-8c67-40e4-9fd8-92cc00524c22
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo &#39;&lt;nometipoparametro1&gt;&#39; deve contenere un vincolo &#39;New&#39; o &#39;Structure&#39; per soddisfare il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nometipoparametro2&gt;&#39;
Un'istruzione crea un tipo generico che passa un parametro di tipo che non è vincolato per soddisfare un vincolo `New`.  
  
 Il vincolo `New` indica che l'argomento di tipo fornito a tale parametro di tipo deve esporre un costruttore senza parametri accessibile al codice che crea oggetti in base ad esso. Tutti i tipi valore hanno costruttori senza parametri, ma non tutti i tipi riferimento li hanno. Di conseguenza il vincolo `Structure` soddisfa il vincolo `New`, ma il vincolo `Class` o un nome della classe o interfaccia, non lo soddisfa.  
  
 Le istruzioni seguenti possono generare questo errore.  
  
```  
Public Class c1(Of t As New) End Class Public Class c2(Of u) Public testObject As New c1(Of u) End Class  
```  
  
 Quando la classe `c2` crea un oggetto in base a `c1`, il parametro di tipo `u` non soddisfa il vincolo di `New` sul parametro di tipo `t`.  
  
 **ID errore:** BC32084  
  
### Per correggere l'errore  
  
-   Se il parametro di tipo che deve essere passato al tipo generico può soddisfare il vincolo `Structure` o `New`, aggiungere il vincolo appropriato alla relativa definizione.  
  
    ```  
    Public Class c2(Of u As Structure)  
    ```  
  
-   Se il parametro di tipo non riesce a soddisfare il vincolo `Structure` o `New`, non passarlo al tipo generico. È necessario passare qualcos'altro come argomento di tipo.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)