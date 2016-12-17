---
title: "Struttura WINDOWPLACEMENT | Microsoft Docs"
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
  - "WINDOWPLACEMENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WINDOWPLACEMENT (struttura)"
ms.assetid: ea7d61f6-eb57-478e-9b08-7c1d07091aa8
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura WINDOWPLACEMENT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `WINDOWPLACEMENT` contiene informazioni sulla posizione di una finestra sullo schermo**.**  
  
## Sintassi  
  
```  
  
      typedef struct tagWINDOWPLACEMENT {     /* wndpl */  
   UINT length;  
   UINT flags;  
   UINT showCmd;  
   POINT ptMinPosition;  
   POINT ptMaxPosition;  
   RECT rcNormalPosition;  
} WINDOWPLACEMENT;  
```  
  
#### Parametri  
 *length*  
 Specifica la lunghezza, in byte, della struttura**.**  
  
 `flags`  
 Specifica i flag che controllano la posizione della finestra ridotta a icona e il metodo da cui il ripristino della finestra.  Questo membro può essere uno o entrambi i seguenti flag:  
  
-   **WPF\_SETMINPOSITION** specifica che la x e y le posizioni della finestra ridotta a icona possono essere**.**specificato Questo flag è necessario specificare se le coordinate sono impostate nel membro di **ptMinPosition**.  
  
-   **WPF\_RESTORETOMAXIMIZED** specifica che la finestra ripristinata viene ingrandita, indipendentemente dal fatto che è stato ingrandita prima che venisse ridotta.  Questa impostazione è valida solo alla successiva apertura della finestra ripristinata.  Non modifica il comportamento predefinito di ripristino.  Questo flag è valido solo quando il valore di **SW\_SHOWMINIMIZED** è specificato per il membro di **showCmd**.  
  
 *showCmd*  
 Specifica lo stato corrente mostra finestra.  Questo membro può essere uno dei seguenti valori:  
  
-   **SW\_HIDE** nasconde la finestra e l'attivazione passa a un'altra finestra.  
  
-   **SW\_MINIMIZE** riduce la finestra specificata e attiva la finestra di primo livello nell'elenco di sistema.  
  
-   **SW\_RESTORE** attiva e visualizzare una finestra.  Se la finestra viene ridotta o ingrandita, le finestre la ripristina alle dimensioni e la posizione \(stessa di **SW\_SHOWNORMAL**\).  
  
-   **SW\_SHOW** attiva una finestra e le visualizzazioni nelle attuali dimensioni e la posizione.  
  
-   **SW\_SHOWMAXIMIZED** attiva una finestra e le visualizzazioni come finestra ingrandita.  
  
-   **SW\_SHOWMINIMIZED** attiva una finestra e le visualizzazioni come icona.  
  
-   **SW\_SHOWMINNOACTIVE** visualizzare una finestra come icona.  La finestra attualmente attivo rimane attiva.  
  
-   **SW\_SHOWNA** visualizzare una finestra nello stato corrente.  La finestra attualmente attivo rimane attiva.  
  
-   **SW\_SHOWNOACTIVATE** visualizzare una finestra nelle dimensioni e la posizione più recenti.  La finestra attualmente attivo rimane attiva.  
  
-   **SW\_SHOWNORMAL** attiva e visualizzare una finestra.  Se la finestra viene ridotta o ingrandita, le finestre la ripristina alle dimensioni e la posizione \(stessa di **SW\_RESTORE**\).  
  
 *ptMinPosition*  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando viene ridotta.  
  
 `ptMaxPosition`  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra viene ingrandita.  
  
 *rcNormalPosition*  
 Specifica le coordinate della finestra quando viene nella posizione \(ripristino\) normale.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::SetWindowPlacement](../Topic/CWnd::SetWindowPlacement.md)