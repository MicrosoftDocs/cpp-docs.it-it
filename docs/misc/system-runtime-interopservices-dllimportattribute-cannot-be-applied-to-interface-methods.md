---
title: "Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a metodi di interfaccia | Microsoft Docs"
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
  - "bc31530"
  - "vbc31530"
helpviewer_keywords: 
  - "BC31530"
ms.assetid: e63f1f7d-b7df-4637-a0f4-2783479ca1af
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a metodi di interfaccia
All'interno di un'interfaccia è stata definita una routine, ma la definizione di quest'ultima applica <xref:System.Runtime.InteropServices.DllImportAttribute>.  
  
 Common Language Runtime \(CLR\) rileva che questo attributo e la relativa proprietà <xref:System.Runtime.InteropServices._Assembly.EntryPoint%2A> designano una routine di sostituzione definita in una libreria di collegamento dinamico \(DLL\) non gestita all'esterno di .NET Framework. Quando il codice chiama la routine a cui è applicato <xref:System.Runtime.InteropServices.DllImportAttribute>, Common Language Runtime chiama invece la routine non gestita designata.  
  
 La definizione di una routine all'interno di un'interfaccia non include alcuna implementazione e non può quindi interagire con le piattaforme non gestite all'esterno di .NET Framework.  
  
 **ID errore:** BC31530  
  
### Per correggere l'errore  
  
-   Rimuovere <xref:System.Runtime.InteropServices.DllImportAttribute> dalla definizione di questa routine.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)