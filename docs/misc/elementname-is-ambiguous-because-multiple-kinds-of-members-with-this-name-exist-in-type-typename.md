---
title: "&#39;&lt;nomeelemento&gt;&#39; &#232; ambiguo perch&#233; esistono diversi tipi di membri con lo stesso nome in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31429"
  - "vbc31429"
helpviewer_keywords: 
  - "BC31429"
ms.assetid: fdc92c16-934d-47c0-9c44-332cbd58b73b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeelemento&gt;&#39; &#232; ambiguo perch&#233; esistono diversi tipi di membri con lo stesso nome in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39;
Un'espressione accede a un elemento di programmazione definito in una classe, una struttura, un modulo o un'interfaccia che contiene più membri con lo stesso nome.  
  
 La causa più probabile di questo errore è la *distinzione tra maiuscole e minuscole*. I nomi in Visual Basic non fanno distinzione tra maiuscole e minuscole, dunque è possibile scriverli usando le maiuscole e le minuscole in modo diverso in posizioni differenti del codice. Ad esempio, se si definisce una variabile con il nome `XYZ` e in seguito vi si accede come `xyz`, il compilatore considera i due nomi equivalenti.  
  
 Altri linguaggi, tuttavia, ad esempio [C\#](../Topic/C%23.md) e [Visual C\+\+](../top/visual-cpp-in-visual-studio-2015.md), rilevano la differenza tra maiuscole e minuscole. In questi linguaggi, `XYZ` e `xyz` non sono considerati uguali. Di conseguenza, una classe scritta in un linguaggio di questo tipo potrebbe definire una variabile denominata `XYZ` e una proprietà denominata `xyz`. Common Language Runtime conserva la distinzione tra maiuscole e minuscole negli assembly. Se però un'applicazione di Visual Basic accede a un assembly con i nomi `XYZ` e `xyz`, i nomi appariranno come uguali.  
  
 **ID errore:** BC31429  
  
### Per correggere l'errore  
  
1.  Se si ha il controllo sul codice sorgente del tipo di definizione, rinominare i membri in modo che non differiscano solo per la combinazione di maiuscole e minuscole. Questa operazione potrebbe non essere possibile se il tipo di definizione è già stato pubblicato ed è già usato da altre applicazioni.  
  
2.  Se non è possibile rinominare i membri nel tipo di definizione, rimuovere l'elemento di programmazione dal codice. Non è possibile accedere a un elemento a cui in Visual Basic corrispondono più definizioni.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Risoluzione dei problemi relativi alle variabili](../Topic/Troubleshooting%20Variables%20in%20Visual%20Basic.md)   
 [Common Language Runtime](../Topic/Common%20Language%20Runtime%20\(CLR\).md)