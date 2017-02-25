---
title: "/SWAPRUN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/swaprun"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SWAPRUN EDITBIN (opzione)"
  - "SWAPRUN (opzione editbin)"
  - "-SWAPRUN (opzione editbin)"
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /SWAPRUN
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SWAPRUN:{[!]NET|[!]CD}  
```  
  
## Note  
 Questa opzione consente di modificare l'immagine per richiedere al sistema operativo di copiarla in un file di scambio ed eseguirla da tale posizione.  Deve essere utilizzata per le immagini che si trovano nelle reti o sui supporti rimovibili.  
  
 È possibile aggiungere o rimuovere i qualificatori NET o CD:  
  
-   NET indica che l'immagine si trova in rete.  
  
-   CD indica che l'immagine si trova su un CD\-ROM o su un supporto rimovibile simile.  
  
-   Utilizzare \!NET e \!CD per invertire gli effetti di NET e CD.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)