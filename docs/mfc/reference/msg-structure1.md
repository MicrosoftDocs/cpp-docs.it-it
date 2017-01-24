---
title: "Struttura MSG | Microsoft Docs"
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
  - "MSG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MSG (struttura)"
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura MSG
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `MSG` il contenuto del messaggio dalla coda messaggi di un thread.  
  
## Sintassi  
  
```  
  
      typedef struct tagMSG {     // msg    
   HWND hwnd;  
   UINT message;  
   WPARAM wParam;  
   LPARAM lParam;  
   DWORD time;  
   POINT pt;  
} MSG;  
```  
  
#### Parametri  
 *HWND*  
 Identifica la finestra di cui la routine della finestra riceve il messaggio.  
  
 `message`  
 Specifica il numero di messaggio.  
  
 `wParam`  
 Specifica informazioni aggiuntive sul messaggio.  Il significato esatto dipende dal valore del membro di **messaggio**.  
  
 `lParam`  
 Specifica informazioni aggiuntive sul messaggio.  Il significato esatto dipende dal valore del membro di **messaggio**.  
  
 `time`  
 Specifica il momento in cui il messaggio è stato inviato.  
  
 `pt`  
 Specifica la posizione del cursore, le coordinate dello schermo, quando il messaggio è stato inviato.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)