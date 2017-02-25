---
title: "Struttura CREATESTRUCT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CREATESTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CREATESTRUCT (struttura)"
ms.assetid: 028c7b5e-4fdc-48da-a550-d3e4f9e6cc85
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Struttura CREATESTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `CREATESTRUCT` definisce i parametri di inizializzazione passati alla routine della finestra di un'applicazione.  
  
## Sintassi  
  
```  
  
      typedef struct tagCREATESTRUCT {  
   LPVOID lpCreateParams;  
   HANDLE hInstance;  
   HMENU hMenu;  
   HWND hwndParent;  
   int cy;  
   int cx;  
   int y;  
   int x;  
   LONG style;  
   LPCSTR lpszName;  
   LPCSTR lpszClass;  
   DWORD dwExStyle;  
} CREATESTRUCT;  
```  
  
#### Parametri  
 `lpCreateParams`  
 Punti ai dati da utilizzare per creare la finestra.  
  
 `hInstance`  
 Identifica l'handle di modulo\-istanza del modulo che possiede la nuova finestra.  
  
 `hMenu`  
 Identifica il menu da utilizzare in una nuova finestra.  Se una finestra figlio, contenente l'id intero  
  
 `hwndParent`  
 Identifica la finestra proprietaria della finestra nuova.  Questo membro è **NULL** se la finestra nuova è una finestra di primo livello.  
  
 `cy`  
 Specifica l'altezza della nuova finestra.  
  
 `cx`  
 Specifica la larghezza della nuova finestra.  
  
 `y`  
 Specifica la coordinata y dell'angolo superiore sinistro della finestra.  Le coordinate sono relative alla finestra padre se la finestra è una finestra figlio; altrimenti le coordinate sono relative all'origine dello schermo.  
  
 `x`  
 Specifica la coordinata x dell'angolo superiore sinistro della nuova finestra.  Le coordinate sono relative alla finestra padre se la finestra è una finestra figlio; altrimenti le coordinate sono relative all'origine dello schermo.  
  
 `style`  
 Specifica lo [stile](../../mfc/reference/styles-used-by-mfc.md) della nuova finestra.  
  
 `lpszName`  
 Punta a una stringa con terminazione null che specifica il nome della nuova finestra.  
  
 `lpszClass`  
 Punta a una stringa con terminazione null che specifica il nome della classe di Windows della nuova finestra \(una struttura [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) ; per ulteriori informazioni, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]\).  
  
 `dwExStyle`  
 Specifica lo [stile esteso](../../mfc/reference/extended-window-styles.md) per la nuova finestra.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCreate](../Topic/CWnd::OnCreate.md)