---
title: "Struttura TOOLTIPTEXT | Microsoft Docs"
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
  - "TOOLTIPTEXT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "descrizioni comandi [C++], notifiche"
  - "TOOLTIPTEXT (struttura)"
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura TOOLTIPTEXT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La scrittura del [gestore di notifica della descrizione comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md), è necessario utilizzare la struttura di `TOOLTIPTEXT`.  I membri della strutturadi `TOOLTIPTEXT`sono:  
  
 `typedef struct {`  
  
 `NMHDR     hdr;        // required for all WM_NOTIFY messages`  
  
 `LPTSTR    lpszText;   // see below`  
  
 `TCHAR     szText[80]; // buffer for tool tip text`  
  
 `HINSTANCE hinst;      // see below`  
  
 `UINT      uflags;     // flag indicating how to interpret the`  
  
 `// idFrom member of the NMHDR structure`  
  
 `// that is included in the structure`  
  
 `} TOOLTIPTEXT, FAR *LPTOOLTIPTEXT;`  
  
 `hdr`  
 Identifica lo strumento che richiede il testo.  L'unico membro della struttura che potrebbe essere necessario è l'id del controllo  L'id di comando del controllo presenta il membro di `idFrom` della struttura di `NMHDR`, accede mediante la sintassi `hdr.idFrom`.  Vedere [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) per informazioni sui membri della struttura di `NMHDR`.  
  
 `lpszText`  
 Indirizzo di una stringa per ricevere il testo per uno strumento.  
  
 `szText`  
 Memorizzare nel buffer che riceve il testo di descrizione comandi.  Un'applicazione può copiare il testo in questo buffer come alternativa a specificare un indirizzo della stringa.  
  
 `hinst`  
 Handle dell'istanza che contiene una stringa da utilizzare come testo di descrizione comandi.  Se `lpszText` è l'indirizzo di testo di descrizione comandi, questo membro è NULL.  
  
 Quando si gestisce il messaggio di notifica di `TTN_NEEDTEXT`, specificare la stringa da visualizzare in uno dei modi seguenti:  
  
-   Copiare il testo nel buffer specificato dal membro di `szText`.  
  
-   Copiare l'indirizzo del buffer che contiene il testo al membro di `lpszText`.  
  
-   Copiare l'identificatore di una risorsa di tipo stringa al membro di `lpszText` e copiare gli handle dell'istanza contenente la risorsa al membro di `hinst`.  
  
## Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)