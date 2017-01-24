---
title: "La variabile &#39;&lt;nomevariabile&gt;&#39; &#232; stata passata per riferimento prima dell&#39;assegnazione di un valore | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc42108"
  - "vbc42108"
helpviewer_keywords: 
  - "BC42108"
ms.assetid: 8f858dd7-db04-408e-ae67-e4ff2f0e5e30
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile &#39;&lt;nomevariabile&gt;&#39; &#232; stata passata per riferimento prima dell&#39;assegnazione di un valore
La variabile '\<nomevariabile\>' è stata passata per riferimento prima dell'assegnazione di un valore. È possibile che venga restituita un'eccezione di riferimento null al runtime. Verificare che la struttura o tutti i membri del riferimento siano inizializzati prima di usarli  
  
 Una chiamata di routine passa una variabile di struttura come argomento a un parametro `ByRef` prima dell'assegnazione di qualsiasi valore alla variabile.  
  
 Se a una variabile di struttura non è mai stato assegnato alcun valore, ogni membro della struttura conterrà il valore predefinito per il tipo di dati. Per un tipo di dati di riferimento, il valore predefinito è [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md). La lettura di un membro di riferimento con un valore `Nothing` può causare un'eccezione <xref:System.NullReferenceException> in alcune circostanze.  
  
 Il passaggio di un argomento a una routine `ByRef` espone la variabile sottostante all'argomento a possibili modifiche da parte della routine.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42108  
  
### Per correggere l'errore  
  
-   Se si vuole che la routine assegni un valore ai membri di struttura attraverso l'argomento `ByRef` e se il fatto che il membro contiene già un valore non è importante, non è necessaria alcuna operazione.  
  
-   Se la logica presente nella routine legge un membro di struttura prima di assegnargli un valore e se il membro è un tipo valore, accertarsi che la logica della routine non dipenda dalla presenza di un valore predefinito nel membro.  
  
-   Se la logica della routine legge un membro di struttura prima di assegnargli un valore e se il membro è un tipo riferimento, accertarsi che la logica della routine sia in grado di gestire un valore di `Nothing`. Potrebbe ad esempio usare un'istruzione [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md) per intercettare un'eccezione <xref:System.NullReferenceException>.  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)   
 [ByRef](../Topic/ByRef%20\(Visual%20Basic\).md)   
 [Dichiarazione di variabili](../Topic/Variable%20Declaration%20in%20Visual%20Basic.md)   
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)   
 [Risoluzione dei problemi relativi alle variabili](../Topic/Troubleshooting%20Variables%20in%20Visual%20Basic.md)