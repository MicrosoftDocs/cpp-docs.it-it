---
title: "Errore del compilatore C3347 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3347"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3347"
ms.assetid: e939ad29-0b78-4681-9618-9bdae5675cee
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3347
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'arg': argomento obbligatorio non specificato nell'attributo idl\_module  
  
 Un argomento obbligatorio non è stato passato all'attributo [idl\_module](../../windows/idl-module.md).  
  
 L'esempio seguente genera l'errore C3347:  
  
```  
// C3347.cpp // compile with: /c [module(name="xx")]; [idl_module(dllname="x")];    // C3347 // try the following line instead // [idl_module(name="test", dllname="x")];  
```