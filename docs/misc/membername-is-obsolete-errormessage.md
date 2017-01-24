---
title: "&#39;&lt;nomemembro&gt;&#39; &#232; obsoleto: &#39;&lt;messaggioerrore&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30668"
  - "vbc30668"
helpviewer_keywords: 
  - "BC30668"
ms.assetid: 25e5606c-2734-4f42-a2bc-1ad28ec1e892
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemembro&gt;&#39; &#232; obsoleto: &#39;&lt;messaggioerrore&gt;&#39;
Un'istruzione prova ad accedere a un membro di classe o di struttura che è stato contrassegnato con l'attributo <xref:System.ObsoleteAttribute> e la direttiva di considerarlo come un errore.  
  
 È possibile contrassegnare qualsiasi elemento di programmazione come non più in uso applicando <xref:System.ObsoleteAttribute> a tale elemento. In questo caso, è possibile impostare la proprietà <xref:System.ObsoleteAttribute.IsError%2A> dell'attributo su `True` o `False`. Se si imposta la proprietà su `True`, il compilatore considera il tentativo di usare l'elemento come un errore. Se si imposta la proprietà su `False`, o si lascia l'impostazione predefinita `False`, il compilatore genera un avviso se si prova a usare l'elemento.  
  
 **ID errore:** BC30668  
  
### Per correggere l'errore  
  
1.  Esaminare il messaggio di errore tra virgolette e intraprendere l'azione appropriata.  
  
2.  Verificare che nel riferimento del codice sorgente il nome del membro sia stato digitato correttamente.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)