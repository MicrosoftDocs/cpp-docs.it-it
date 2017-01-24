---
title: "Inizializzazione e terminazione del motore di database DAO | Microsoft Docs"
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
  - "vc.mfc.macros.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), inizializzazione"
  - "DAO (Data Access Objects), chiusura"
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
caps.latest.revision: 13
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inizializzazione e terminazione del motore di database DAO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza DAO MFC oggetti, il motore di database DAO deve prima essere inizializzato quindi essere terminato prima dell'applicazione o DLL chiusura.  Due funzioni, `AfxDaoInit` e `AfxDaoTerm`, eseguono queste attività.  
  
### Inizializzazione e terminazione del motore di database DAO  
  
|||  
|-|-|  
|[AfxDaoInit](../Topic/AfxDaoInit.md)|Inizializza il motore di database DAO.|  
|[AfxDaoTerm](../Topic/AfxDaoTerm.md)|Terminare il motore di database DAO.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)