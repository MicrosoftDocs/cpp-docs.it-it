---
title: "La funzione di accesso &#39;&lt;parolachiave&gt;&#39; di &#39;&lt;nomepropriet&#224;&gt;&#39; &#232; obsoleta: &#39;&lt;messaggioerrore&gt;&#39; (errore di Visual Basic) | Microsoft Docs"
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
  - "vbc30911"
  - "bc30911"
helpviewer_keywords: 
  - "BC30911"
ms.assetid: b690be0c-4dca-4f79-88ed-4ee3e3f1f90b
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La funzione di accesso &#39;&lt;parolachiave&gt;&#39; di &#39;&lt;nomepropriet&#224;&gt;&#39; &#232; obsoleta: &#39;&lt;messaggioerrore&gt;&#39; (errore di Visual Basic)
Un'istruzione prova a leggere o scrivere una proprietà per cui la routine corrispondente è stata contrassegnata con l'attributo <xref:System.ObsoleteAttribute> e la direttiva di considerarla come un errore.  
  
 È possibile contrassegnare qualsiasi elemento di programmazione come non più in uso applicando <xref:System.ObsoleteAttribute> a tale elemento. In questo caso, è possibile impostare la proprietà <xref:System.ObsoleteAttribute.IsError%2A> dell'attributo su `True` o `False`. Se si imposta la proprietà su `True`, il compilatore considera il tentativo di usare l'elemento come un errore. Se si imposta la proprietà su `False`, o si lascia l'impostazione predefinita `False`, il compilatore genera un avviso se si prova a usare l'elemento.  
  
 **ID errore:** BC30911  
  
### Per correggere l'errore  
  
1.  Esaminare il messaggio di errore tra virgolette e intraprendere l'azione appropriata.  
  
2.  Verificare che nel riferimento del codice sorgente il nome della proprietà sia stato digitato correttamente.  
  
3.  Evitare l'accesso alla proprietà nel modo \(lettura o scrittura\) che ha generato questo messaggio.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)