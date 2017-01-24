---
title: "Risoluzione dei problemi relativi alle eccezioni: System.DuplicateWaitObjectException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "DuplicateWaitObjectException (classe)"
ms.assetid: b9ff6932-a7cf-4a89-bd7d-e4ef1a3ff353
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.DuplicateWaitObjectException
Un'eccezione <xref:System.DuplicateWaitObjectException> viene generata quando la matrice di oggetti <xref:System.Threading.WaitHandle> passata al metodo <xref:System.Threading.WaitHandle.WaitAll%2A> o <xref:System.Threading.WaitHandle.WaitAny%2A> contiene handle del sistema operativo duplicati.  
  
## Suggerimenti associati  
 **Assicurarsi che gli oggetti WaitHandle passati al metodo WaitAll o WaitAny siano univoci.**  
 Una matrice <xref:System.Threading.WaitHandle> non può contenere più riferimenti allo stesso oggetto.  
  
### Note  
 Common Language Runtime \(CLR\) fornisce un meccanismo di sincronizzazione dei thread basato sull'utilizzo di oggetti di sincronizzazione in attesa di esecuzione all'interno di una matrice di oggetti <xref:System.Threading.WaitHandle>.  
  
## Vedere anche  
 <xref:System.DuplicateWaitObjectException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)