---
title: "Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; ha lo stesso nome di un parametro di tipo di un tipo di inclusione | Microsoft Docs"
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
  - "vbc40048"
  - "bc40048"
helpviewer_keywords: 
  - "BC40048"
ms.assetid: d5428b36-88d3-42c4-a096-cbc7bb9571f2
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; ha lo stesso nome di un parametro di tipo di un tipo di inclusione
Un parametro di tipo di un tipo generico è dichiarato con lo stesso nome di un parametro di tipo di un tipo generico contenitore.  
  
 Nell'elenco di parametri di tipo di un tipo generico ogni parametro di tipo deve avere un nome diverso da quello di tutti i nomi seguenti:  
  
-   Ogni altro parametro di tipo nell'elenco di parametri dello stesso tipo,  
  
-   Ogni parametro di tipo nell'elenco dei parametri di tipo di qualsiasi tipo generico contenitore e  
  
-   Il nome del tipo generico stesso.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40048  
  
### Per correggere l'errore  
  
-   Rinominare il parametro di tipo in modo che sia diverso da qualsiasi altro nome presente nell'elenco in questa pagina della Guida.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)