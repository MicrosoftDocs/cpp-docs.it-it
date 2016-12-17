---
title: "Impossibile copiare il valore del parametro &#39;ByRef&#39; &#39;&lt;nome parametro&gt;&#39; nell&#39;argomento corrispondente perch&#233; il tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; essere convertito nel tipo &#39;&lt;nometipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc33037"
  - "BC33037"
helpviewer_keywords: 
  - "BC33037"
ms.assetid: 3ff137e2-e062-4e54-abf5-e902e2d18968
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile copiare il valore del parametro &#39;ByRef&#39; &#39;&lt;nome parametro&gt;&#39; nell&#39;argomento corrispondente perch&#233; il tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; essere convertito nel tipo &#39;&lt;nometipo2&gt;&#39;
Una routine è dichiarata con un tipo di parametro che non può essere riconvertito nel tipo dell'argomento chiamante.  
  
 Quando si definisce una classe o una struttura, è possibile definire uno o più operatori di conversione per convertire il tipo della classe o della struttura in altri tipi. È anche possibile definire operatori di conversione inversi per riconvertire gli altri tipi nel tipo della classe o della struttura originale. Quando il tipo della classe o della struttura viene usato in una chiamata di routine, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] può usare questi operatori di conversione per convertire il tipo di un argomento nel tipo del parametro corrispondente.  
  
 Se si passa l'argomento [ByRef](../Topic/ByRef%20\(Visual%20Basic\).md), [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] copia a volte il valore dell'argomento in una variabile locale nella routine invece di passare un riferimento. In un caso simile, alla restituzione della routine [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] deve quindi ricopiare il valore della variabile locale nell'argomento nel codice chiamante.  
  
 Se un valore dell'argomento `ByRef` viene copiato nella routine e l'argomento e il parametro sono dello stesso tipo, non è necessaria alcuna conversione. Se invece i tipi sono diversi, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] deve eseguire la conversione in entrambe le direzioni. Se uno dei tipi è il tipo della classe o della struttura, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] deve convertirlo nell'altro tipo e dall'altro tipo. Questo significa che è necessario definire operatori di conversione in entrambe le direzioni.  
  
 **ID errore:** BC33037  
  
### Per correggere l'errore  
  
-   Se possibile, usare un argomento chiamante dello stesso tipo del parametro della routine, in modo che [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non debba eseguire alcuna conversione.  
  
-   Se è necessario chiamare la routine con un tipo di argomento diverso dal tipo del parametro, ma non è necessario restituire un valore nell'argomento chiamante, definire il parametro in modo che sia [ByVal](../Topic/ByVal%20\(Visual%20Basic\).md) invece che `ByRef`.  
  
-   Se è necessario restituire un valore nell'argomento chiamante, definire l'operatore di conversione inverso in modo che [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] possa eseguire la riconversione al tipo dell'argomento chiamante.  
  
## Vedere anche  
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)   
 [Procedure Parameters and Arguments](../Topic/Procedure%20Parameters%20and%20Arguments%20\(Visual%20Basic\).md)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)