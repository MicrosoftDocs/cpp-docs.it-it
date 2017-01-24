---
title: "non &#232; possibile specificare sia /win32icon che /win32resource | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc2023"
  - "bc2023"
helpviewer_keywords: 
  - "BC2023"
ms.assetid: 60914807-1fde-4fef-9c6f-6f4a62527eed
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# non &#232; possibile specificare sia /win32icon che /win32resource
Le opzioni `/win32resource` e `/win32icon` si escludono a vicenda perché entrambe inseriscono informazioni sulle icone nel file di output.  
  
 **ID errore:** BC2023  
  
### Per correggere l'errore  
  
-   Usare solo l'opzione `/win32icon` per inserire un file ICO nel file di output. Il file ICO rappresenta il file di output in Esplora risorse.  
  
     oppure  
  
-   Usare solo l'opzione `/win32resource` per inserire un file di risorse Win32 nel file di output. Una risorsa Win32 può contenere informazioni sulla versione o sulla bitmap \(icona\) che consentono di identificare l'applicazione in Esplora risorse.  
  
## Vedere anche  
 [\/win32icon](../Topic/-win32icon.md)   
 [\/win32resource](../Topic/-win32resource.md)