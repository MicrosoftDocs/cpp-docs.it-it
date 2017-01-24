---
title: "push_macro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.push_macro"
  - "push_macro_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragma, push_macro"
  - "push_macro (pragma)"
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# push_macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene salvato il valore della macro *macro\_name* nella parte superiore dello stack della stessa macro.  
  
## Sintassi  
  
```  
  
#pragma push_macro("  
macro_name  
")  
  
```  
  
## Note  
 È possibile recuperare il valore di *macro\_name* con **pop\_macro**.  
  
 Se si desidera un esempio, vedere [pop\_macro](../preprocessor/pop-macro.md).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)