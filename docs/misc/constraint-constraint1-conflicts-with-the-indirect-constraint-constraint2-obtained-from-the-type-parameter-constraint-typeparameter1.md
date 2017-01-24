---
title: "Il vincolo &#39;&lt;vincolo1&gt;&#39; &#232; in conflitto con il vincolo indiretto &#39;&lt;vincolo2&gt;&#39; ottenuto dal vincolo del parametro di tipo &#39;&lt;parametrotipo1&gt;&#39; | Microsoft Docs"
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
  - "bc32110"
  - "vbc32110"
helpviewer_keywords: 
  - "BC32110"
ms.assetid: e799214d-23b4-4a3f-b61a-0b9d3387ead3
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il vincolo &#39;&lt;vincolo1&gt;&#39; &#232; in conflitto con il vincolo indiretto &#39;&lt;vincolo2&gt;&#39; ottenuto dal vincolo del parametro di tipo &#39;&lt;parametrotipo1&gt;&#39;
È stato dichiarato un tipo generico con vincoli in conflitto a causa di una combinazione di vincoli diretti e indiretti.  
  
 L'istruzione seguente può generare questo errore.  
  
 `Public Class testClass(Of t1 As {Structure, t2}, t2 As Class)`  
  
 Il vincolo diretto `Structure` e il vincolo indiretto `Class` determinano un conflitto per il parametro di tipo `t1` perché per il vincolo `Structure` l'argomento di tipo corrispondente deve essere un tipo valore, mentre per l'oggetto `Class` deve essere un tipo riferimento.  
  
 **ID errore:** BC32110  
  
### Per correggere l'errore  
  
-   Modificare i vincoli del parametro di tipo per evitare l'insorgere di conflitti.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)