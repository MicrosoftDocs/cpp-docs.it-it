---
title: "Punti di ingresso della routine della finestra | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "punti di ingresso, routine della finestra"
  - "MFC, gestione dei dati sullo stato"
  - "gestione dello stato, routine della finestra"
  - "punti di ingresso della routine della finestra"
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Punti di ingresso della routine della finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per proteggere routine della finestra MFC, collegamenti di un valore statico module con un'implementazione speciale routine di finestra.  Il collegamento viene eseguito automaticamente quando viene effettuato con MFC.  Questa routine della finestra viene utilizzata la macro di `AFX_MANAGE_STATE` correttamente per impostare un'efficace stato del modulo, quindi chiama **AfxWndProc**, che a sua volta delega `WindowProc` la funzione membro di `CWnd`appropriato \- oggetto derivato.  
  
## Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)