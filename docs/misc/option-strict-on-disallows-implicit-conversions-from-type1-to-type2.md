---
title: "Option Strict On non consente conversioni implicite da &#39;&lt;tipo1&gt;&#39; a &#39;&lt;tipo2&gt;&#39; | Microsoft Docs"
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
  - "bc30512"
  - "vbc30512"
helpviewer_keywords: 
  - "BC30512"
ms.assetid: b9756d48-05fa-4027-8a80-b4a0ef92099d
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente conversioni implicite da &#39;&lt;tipo1&gt;&#39; a &#39;&lt;tipo2&gt;&#39;
Si è provato a convertire un tipo in un altro tipo che potrebbe non essere in grado di contenere il valore, ad esempio da un tipo `Long` a un tipo `Integer`, mentre l'opzione di controllo del tipo \([Option Strict Statement](../Topic/Option%20Strict%20Statement.md)\) è impostata su `On`.  
  
 Questa conversione viene chiamata *conversione verso un tipo di dati più piccolo* e può non riuscire in fase di esecuzione. Per questo motivo, `Option Strict On` non consente le conversioni implicite verso un tipo di dati più piccolo.  
  
 **ID errore:** BC30512  
  
### Per correggere l'errore  
  
1.  Determinare se esiste una conversione di qualsiasi tipo da `<type1>` a `<type2>`. Se entrambi sono tipi elementari di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o sono entrambi istanze di classi, in genere è possibile determinare questo aspetto consultando la tabella in [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md).  
  
2.  Se esiste solo una conversione verso un tipo di dati più piccolo da `<type1>` a `<type2>`, è consigliabile usare il cast esplicito. Le parole chiave [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md) e [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md) generano un'eccezione in fase di esecuzione se la conversione non riesce. La parola chiave [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md) si applica solo ai tipi riferimento e restituisce [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md) se la conversione non riesce.  
  
3.  Se esiste una conversione verso un tipo di dati più piccolo e il programma può tollerare un errore in fase di esecuzione oppure si ritiene che un errore in fase di esecuzione sia improbabile, è possibile specificare `Option Strict Off` all'inizio del codice sorgente. È tuttavia necessario inserire la conversione in un blocco [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md) per evitare risultati imprevisti o una terminazione anticipata del programma.  
  
4.  Se non esiste alcuna conversione da `<type1>` a `<type2>`, è necessario rivalutare la logica del programma. Potrebbe essere possibile scrivere codice in grado di assegnare valori a `<type2>` corrispondenti ai valori previsti di `<type1>`.  
  
5.  Se non esiste alcuna conversione da `<type1>` a `<type2>` e uno dei tipi è una classe o una struttura definita, potrebbe essere possibile definire un operatore di conversione da questo tipo all'altro tipo o viceversa. Per altre informazioni, vedere [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md).  
  
6.  In tutti i casi e come indicazione generale, è consigliabile evitare di usare le conversioni verso un tipo di dati più piccolo, a meno che non sia possibile inserire gli errori in un blocco `Catch` e gestirli in modo efficace.  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md)   
 [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md)   
 [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)