---
title: "auto_inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "auto_inline_CPP"
  - "vc-pragma.auto_inline"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_inline (pragma)"
  - "pragma, auto_inline"
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# auto_inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esclude tutte le funzioni definite nell'intervallo in cui è specificato **off** da considerarsi come candidate per l'espansione inline automatica.  
  
## Sintassi  
  
```  
  
#pragma auto_inline( [{on | off}] )  
```  
  
## Note  
 Per utilizzare il pragma **auto\_inline**, inserirlo prima e immediatamente dopo \(non all'interno\) una definizione di funzione.  Il pragma viene applicato alla prima definizione di funzione dopo che è stato rilevato il pragma.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)