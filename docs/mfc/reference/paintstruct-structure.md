---
title: "Struttura PAINTSTRUCT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PAINTSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PAINTSTRUCT (struttura)"
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura PAINTSTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `PAINTSTRUCT` contiene informazioni che possono essere utilizzate per disegnare l'area client di una finestra.  
  
## Sintassi  
  
```  
  
      typedef struct tagPAINTSTRUCT {  
   HDC hdc;  
   BOOL fErase;  
   RECT rcPaint;  
   BOOL fRestore;  
   BOOL fIncUpdate;  
   BYTE rgbReserved[16];  
} PAINTSTRUCT;  
```  
  
#### Parametri  
 *hdc*  
 Identifica il contesto di visualizzazione da utilizzare per disegnare.  
  
 *fErase*  
 Specifica se i precedenti devono essere ridisegnata.  Non sono 0 se l'applicazione ridisegna lo sfondo.  L'applicazione è responsabile del disegno dello sfondo se una classe finestra di windows viene creata senza un pennello per lo sfondo \(vedere la descrizione del membro di **hbrBackground** della struttura di [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]\).  
  
 *rcPaint*  
 Specifica corretti gli angoli in alto a sinistra e inferiore del rettangolo in cui disegnare è necessaria.  
  
 *fRestore*  
 Membro riservato.  Viene utilizzato internamente da windows.  
  
 *fIncUpdate*  
 Membro riservato.  Viene utilizzato internamente da windows.  
  
 *rgbReserved \[16\]*  
 Membro riservato.  Un blocco di memoria riservata utilizzato internamente da windows.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPaintDC::m\_ps](../Topic/CPaintDC::m_ps.md)