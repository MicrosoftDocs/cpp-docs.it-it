---
title: "ML Nonfatal Error A2066 | Microsoft Docs"
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
  - "A2066"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2066"
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2066
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**modalità incompatibile della CPU e dimensione del segmento**  
  
 Si è tentato di aprire un segmento con un oggetto **USE16**,  **USE32**, o  **PIANO** attributo che non è compatibile con il tipo specificato, o modificare a 16 bit CPU mentre in un segmento di 32 bit.  
  
 **USE32** e  **PIANO** gli attributi devono essere preceduti da .386 o dalla maggior direttiva del processore.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)