---
title: ".CODE | Microsoft Docs"
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
  - ".CODE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".CODE directive"
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .CODE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una volta utilizzato con [.MODEL](../../assembler/masm/dot-model.md), indica l'inizio di un segmento di codice.  
  
## Sintassi  
  
```  
.CODE [[name]]  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`name`|Parametro facoltativo che specifica il nome di un segmento di codice.  il nome predefinito è \_TEXT per minuscolo, piccolo, compresso e piano [modelli](../../assembler/masm/dot-model.md).  il nome predefinito è *modulename*\_TEXT per altri modelli.|  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)   
 [.DATA](../../assembler/masm/dot-data.md)