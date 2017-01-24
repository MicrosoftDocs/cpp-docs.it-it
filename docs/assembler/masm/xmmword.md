---
title: "XMMWORD | Microsoft Docs"
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
  - "XMMWORD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "XMMWORD directive"
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# XMMWORD
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per operandi multimediali a 128 bit con MMX e di istruzioni SSE \(XMM\).  
  
## Sintassi  
  
```  
XMMWORD  
```  
  
## Note  
 `XMMWORD` viene utilizzato per rappresentare lo stesso tipo come  [\_\_m128](../../cpp/m128.md).  
  
## Esempio  
  
```  
movdqa   xmm0, xmmword ptr [ebx]  
```