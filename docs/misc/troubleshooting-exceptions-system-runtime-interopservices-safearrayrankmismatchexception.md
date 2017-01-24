---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Runtime.InteropServices.SafeArrayRankMismatchException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHSafeArrayRankMismatch"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "SafeArrayRankMismatchException (classe)"
ms.assetid: 6c69355c-8bfd-49bb-acad-b4d7236ae2e7
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Runtime.InteropServices.SafeArrayRankMismatchException
Un'eccezione <xref:System.Runtime.InteropServices.SafeArrayRankMismatchException> viene generata quando il numero di dimensioni di un SAFEARRAY in ingresso non corrisponde al numero di dimensioni specificato nella firma gestita.  
  
## Suggerimenti associati  
 **Verificare che la matrice disponga del numero di dimensioni necessario.**  
 Poiché il numero di dimensioni e i limiti di una matrice sicura non possono essere determinati dalla libreria dei tipi, si presuppone che il numero di dimensioni sia pari a 1 e che il limite inferiore sia pari a 0. Il numero di dimensioni e i limiti devono essere definiti nella firma gestita prodotta da [Tlbimp.exe \(Type Library Importer\)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md).  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.SafeArrayRankMismatchException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Default Marshaling for Arrays](../Topic/Default%20Marshaling%20for%20Arrays.md)   
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)