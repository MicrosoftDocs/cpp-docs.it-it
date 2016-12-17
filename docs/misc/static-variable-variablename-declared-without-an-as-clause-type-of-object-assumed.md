---
title: "Variabile statica &#39;&lt;nomevariabile&gt;&#39; dichiarata senza clausola &#39;As&#39;. Verr&#224; utilizzato il tipo Object | Microsoft Docs"
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
  - "vbc42111"
  - "bc42111"
helpviewer_keywords: 
  - "BC42111"
ms.assetid: ca6b625c-21a5-45f7-ac67-282f6993a724
caps.latest.revision: 15
caps.handback.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Variabile statica &#39;&lt;nomevariabile&gt;&#39; dichiarata senza clausola &#39;As&#39;. Verr&#224; utilizzato il tipo Object
Il compilatore non deduce il tipo di dati delle variabili locali statiche. Nell'esempio seguente, con `Option Strict` impostato su `Off`, il tipo di `m` sarà `Object`, indipendentemente dal fatto che `Option Infer` è impostato su `On` o `Off`. L'inferenza del tipo di variabile locale non è applicabile.  
  
```  
Sub Main() Static m = 10 End Sub  
```  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42111  
  
### Per risolvere questo avviso  
  
-   Specificare il tipo di dati per le variabili locali statiche.  
  
     Ad esempio, se si vuole che `m` nell'esempio precedente sia di tipo `Integer`, specificare il tipo nella dichiarazione.  
  
    ```  
    Sub Main() Static m As Integer = 10 End Sub  
  
    ```  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD Procedura: Estendere la durata di una variabile](http://msdn.microsoft.com/it-it/04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Local Type Inference](../Topic/Local%20Type%20Inference%20\(Visual%20Basic\).md)   
 [Option Infer Statement](../Topic/Option%20Infer%20Statement.md)   
 [Static](../Topic/Static%20\(Visual%20Basic\).md)