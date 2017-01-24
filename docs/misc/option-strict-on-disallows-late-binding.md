---
title: "Option Strict On non consente l&#39;associazione tardiva | Microsoft Docs"
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
  - "bc30574"
  - "vbc30574"
helpviewer_keywords: 
  - "BC30574"
ms.assetid: 9da4b826-2e12-4a5d-9e17-762b0b68fc9b
caps.latest.revision: 11
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente l&#39;associazione tardiva
[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] consente conversioni implicite tra dati di qualsiasi tipo. Se, però, il valore viene convertito da un tipo di dati a un altro caratterizzato da un livello di precisione o da una capacità inferiore, possono verificarsi perdite di dati. In fase di compilazione con l'istruzione `Option Strict On` tali tipi di conversione vengono notificati in modo che possano essere evitati. Non è possibile usare `Option Strict On` con associazione tardiva.  
  
 L'esempio di codice seguente usa l'associazione tardiva e genera questo errore quando `Option Strict` è impostato su `On`.  
  
 [!CODE [VbVbalrOptionStrictError#1](VbVbalrOptionStrictError#1)]  
  
 **ID errore:** BC30574  
  
### Per correggere l'errore  
  
-   Modificare la dichiarazione dell'oggetto in modo da usare un tipo esplicito, come illustrato nell'esempio seguente:  
  
     [!CODE [VbVbalrOptionStrictError#2](VbVbalrOptionStrictError#2)]  
  
 \-oppure\-  
  
-   Modificare l'espressione ad associazione tardiva in modo da specificare un tipo esplicito, come illustrato nell'esempio seguente:  
  
     [!CODE [VbVbalrOptionStrictError#3](VbVbalrOptionStrictError#3)]  
  
 \-oppure\-  
  
-   Consentire al compilatore di dedurre un tipo esplicito, come illustrato nell'esempio seguente:  
  
     [!CODE [VbVbalrOptionStrictError#4](VbVbalrOptionStrictError#4)]  
  
 \-oppure\-  
  
-   Disattivare `Option Strict` rimuovendo la parola `On` che segue oppure specificando esplicitamente `Off`.  
  
## Vedere anche  
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)