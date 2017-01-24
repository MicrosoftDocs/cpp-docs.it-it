---
title: "Dump delle importazioni a caricamento ritardato | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caricamento ritardato di importazioni"
  - "caricamento ritardato di importazioni, dump"
  - "importazioni (a caricamento ritardato)"
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dump delle importazioni a caricamento ritardato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il dump delle importazioni a caricamento ritardato può essere eseguito utilizzando [dumpbin \/imports](../../build/reference/imports-dumpbin.md) e comprende informazioni leggermente diverse da quelle relative alle importazioni standard.  Tali informazioni sono relegate in una sezione specifica del dump \/imports e sono etichettate in modo esplicito come importazioni a caricamento ritardato.  Se nell'immagine sono presenti informazioni per lo scaricamento, esse vengono segnalate.  Se sono presenti informazioni di associazione, il timestamp della DLL di destinazione viene segnalato con gli indirizzi associati delle importazioni.  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)