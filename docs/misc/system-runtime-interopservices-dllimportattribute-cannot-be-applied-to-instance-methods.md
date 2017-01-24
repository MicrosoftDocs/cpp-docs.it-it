---
title: "Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a metodi di istanza | Microsoft Docs"
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
  - "vbc31529"
  - "bc31529"
helpviewer_keywords: 
  - "BC31529"
ms.assetid: c8bde5d7-c6bf-4d21-bb1a-e8627d65ad29
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a metodi di istanza
Una routine non condivisa viene dichiarata con l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute>.  
  
 Common Language Runtime \(CLR\) rileva che questo attributo e la relativa proprietà <xref:System.Runtime.InteropServices._Assembly.EntryPoint%2A> designano una routine di sostituzione definita in una libreria di collegamento dinamico \(DLL\) non gestita all'esterno di .NET Framework. Quando il codice chiama la routine a cui è applicato <xref:System.Runtime.InteropServices.DllImportAttribute>, Common Language Runtime chiama invece la routine non gestita designata.  
  
 Dal momento che le piattaforme non gestite all'esterno di .NET Framework non supportano le routine non condivise come accade per .NET Framework, non è possibile interagire con loro usando routine non condivise.  
  
 **ID errore:** BC31529  
  
### Per correggere l'errore  
  
-   Se la routine non necessita di essere applicata individualmente a ogni istanza della classe o struttura, dichiararla come `Shared`.  
  
-   Se la routine non può essere `Shared`, rimuovere l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute> dalla dichiarazione di questa routine.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)