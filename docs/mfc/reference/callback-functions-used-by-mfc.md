---
title: "Funzioni di callback utilizzate da MFC | Microsoft Docs"
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
  - "vc.mfc.functions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni callback"
  - "funzioni callback, MFC"
  - "funzioni [C++], callback"
  - "MFC, funzioni callback"
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni di callback utilizzate da MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tre funzioni di callback vengono visualizzati nella libreria MFC.  Una descrizione delle funzioni di callback che vengono passate a [CDC::EnumObjects](../Topic/CDC::EnumObjects.md), di [CDC::GrayString](../Topic/CDC::GrayString.md) e di [CDC::SetAbortProc](../Topic/CDC::SetAbortProc.md) segue questo argomento.  Per l'utilizzo generale delle funzioni di callback, vedere la sezione relativa alle osservazioni di queste funzioni membro.  Si noti che tutte le funzioni di callback devono intercettare le eccezioni MFC prima di ripristinare le finestre, poiché le eccezioni non possono essere generate oltre i limiti di callback.  Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)