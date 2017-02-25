---
title: "WINDOWPOS Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WINDOWPOS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WINDOWPOS (struttura)"
ms.assetid: a4ea7cd9-c4c2-4480-9c55-cbbff72195e1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura WINDOWPOS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `WINDOWPOS` contiene informazioni sulle dimensioni e la posizione di una finestra.  
  
## Sintassi  
  
```  
  
      typedef struct tagWINDOWPOS { /* wp */  
   HWND hwnd;  
   HWND hwndInsertAfter;  
   int x;  
   int y;  
   int cx;  
   int cy;  
   UINT flags;  
} WINDOWPOS;  
```  
  
#### Parametri  
 *HWND*  
 Identifica la finestra.  
  
 *hwndInsertAfter*  
 Identifica la finestra dietro cui questa finestra viene inserita.  
  
 *x*  
 Specifica la posizione del bordo sinistro della finestra.  
  
 *y*  
 Specifica la posizione del bordo destro della finestra.  
  
 `cx`  
 Specifica la larghezza della finestra, in pixel.  
  
 `cy`  
 Specifica l'altezza della finestra, in pixel.  
  
 `flags`  
 Specifica del posizionamento delle opzioni.  Questo membro può essere uno dei seguenti valori:  
  
-   **SWP\_DRAWFRAME** estrae un frame \(definito nella descrizione della classe per window\) intorno alla finestra.  La finestra riceve un messaggio di `WM_NCCALCSIZE`.  
  
-   **SWP\_FRAMECHANGED** invia un messaggio di `WM_NCCALCSIZE` la finestra, anche se la finestra non viene modificata.  Se questo flag non viene specificato, `WM_NCCALCSIZE` viene inviato solo quando la finestra viene modificata.  
  
-   **SWP\_HIDEWINDOW** nasconde la finestra.  
  
-   `SWP_NOACTIVATE` non attiva la finestra.  
  
-   **SWP\_NOCOPYBITS** rimuovere l'intero contenuto dell'area client.  Se questo flag non viene specificato, il contenuto valido dell'area client viene salvato e copiato nell'area client dopo la finestra viene ridimensionata o riposizionato.  
  
-   `SWP_NOMOVE` mantiene la posizione corrente \(ignora i membri di **s** e di **x** \).  
  
-   **SWP\_NOOWNERZORDER** non modifica la posizione della finestra proprietaria nell'ordine Z.  
  
-   `SWP_NOSIZE` mantiene le dimensioni correnti \(ignora i membri di **cy** e di **cx** \).  
  
-   **SWP\_NOREDRAW** non ridisegna le modifiche.  
  
-   **SWP\_NOREPOSITION** stessi di **SWP\_NOOWNERZORDER**.  
  
-   **SWP\_NOSENDCHANGING** impedisce la finestra dalla ricezione del messaggio di `WM_WINDOWPOSCHANGING`.  
  
-   `SWP_NOZORDER` conserva l'ordine corrente \(ignora il membro di **hwndInsertAfter** \).  
  
-   **SWP\_SHOWWINDOW** visualizzare la finestra.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnWindowPosChanging](../Topic/CWnd::OnWindowPosChanging.md)