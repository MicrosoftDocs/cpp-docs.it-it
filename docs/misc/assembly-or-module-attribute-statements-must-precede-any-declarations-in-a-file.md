---
title: "Le istruzioni di attributi Assembly o Module devono precedere tutte le dichiarazioni in un file | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30637"
  - "bc30637"
helpviewer_keywords: 
  - "BC30637"
ms.assetid: 80242581-fa8a-4903-9395-6f7ad1610231
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni di attributi Assembly o Module devono precedere tutte le dichiarazioni in un file
Gli attributi globali devono essere dichiarati all'inizio di un file di origine, dopo le istruzioni `Option` e `Imports`, ma prima di tutte le altre istruzioni.  
  
 **ID errore:** BC30637  
  
### Per correggere l'errore  
  
1.  Inserire gli attributi globali, ad esempio `<Module:>` e `<Assembly:>`, all'inizio del file di origine.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [NOT IN BUILD: Attributi globali in Visual Basic](http://msdn.microsoft.com/it-it/253a32d8-1531-4504-b687-088554ab71d2)