---
title: "IAtlAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAtlAutoThreadModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlAutoThreadModule class"
ms.assetid: fcb58cf9-a427-4be9-89eb-04e1ab5cc3a1
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# IAtlAutoThreadModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un'interfaccia a un metodo `CreateInstance`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
__interface IAtlAutoThreadModule  
  
```  
  
## Note  
 La classe [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) deriva da `IAtlAutoThreadModule`, utilizzando per fornire codice per creare un oggetto e recuperare un puntatore a interfaccia.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)