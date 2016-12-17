---
title: "Le istruzioni &#39;On Error&#39; non sono valide all&#39;interno di istruzioni &#39;Using&#39; | Microsoft Docs"
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
  - "vbc36013"
  - "bc36013"
helpviewer_keywords: 
  - "BC36013"
ms.assetid: 5b399bf9-6595-46e0-a808-378f6c28568b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;On Error&#39; non sono valide all&#39;interno di istruzioni &#39;Using&#39;
Un'istruzione `On Error` viene visualizzata all'interno di un'istruzione `Using` ma non è valida in tale contesto.  
  
 **ID errore:** BC36013  
  
### Per correggere l'errore  
  
-   Usare una gestione degli errori strutturata, ad esempio un blocco `Try…Catch`, invece dell'istruzione `On Error`.  
  
## Vedere anche  
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)   
 [Definizione delle circostanze di utilizzo della gestione delle eccezioni strutturata o non strutturata \(Visual Basic\)](http://msdn.microsoft.com/it-it/e897d7ca-07e8-45dd-8a6d-a5b2a2fc9b9a)   
 [On Error Statement](../Topic/On%20Error%20Statement%20\(Visual%20Basic\).md)   
 [Procedura: Testare il codice con un blocco try…catch in Visual Basic](http://msdn.microsoft.com/it-it/8368e205-ed73-4185-a247-af84fb4fafa9)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)