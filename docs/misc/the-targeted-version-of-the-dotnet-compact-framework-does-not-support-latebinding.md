---
title: "La versione di destinazione di .NET Compact Framework non supporta l&#39;associazione tardiva | Microsoft Docs"
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
  - "vbc30762"
  - "bc30762"
helpviewer_keywords: 
  - "BC30762"
ms.assetid: b433014d-8422-46e8-ad55-321146a48186
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La versione di destinazione di .NET Compact Framework non supporta l&#39;associazione tardiva
La versione di .NET Compact Framework che si sta usando non supporta l'associazione tardiva.  
  
 **ID errore:** BC30762  
  
### Per correggere l'errore  
  
1.  Non chiamare funzioni, subroutine o proprietà in una variabile dichiarata come oggetto.  
  
2.  Non usare la variabile oggetto come matrice.  
  
3.  Non usare espressioni di accesso ai membri dizionario con variabili oggetto.  
  
## Vedere anche  
 [NotInBuild: Oggetti in Visual Basic](http://msdn.microsoft.com/it-it/85bd757a-a19e-45e1-af89-d68765f5ee3c)   
 [Special Characters in Code](../Topic/Special%20Characters%20in%20Code%20\(Visual%20Basic\).md)