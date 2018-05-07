---
title: TOOLTIPTEXT (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TOOLTIPTEXT
dev_langs:
- C++
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- tool tips [MFC], notifications
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f64a93529905e84fe043947772e55b9332b5106e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tooltiptext-structure"></a>Struttura TOOLTIPTEXT
Nella scrittura del [gestore descrizione comando notifica](../mfc/handling-ttn-needtext-notification-for-tool-tips.md), è necessario utilizzare il `TOOLTIPTEXT` struttura. I membri del `TOOLTIPTEXT` struttura sono:  
  
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
 Identifica lo strumento che richiede il testo. L'unico membro di questa struttura che potrebbe essere necessario è l'ID di comando. del controllo ID di comando del controllo verrà incluso il `idFrom` membro del `NMHDR` struttura, accedere con la sintassi `hdr.idFrom`. Vedere [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) per una descrizione dei membri del `NMHDR` struttura.  
  
 `lpszText`  
 Indirizzo di una stringa che riceve il testo per uno strumento.  
  
 `szText`  
 Buffer che riceve il testo della descrizione comando. Un'applicazione è possibile copiare il testo di questo buffer come alternativa alla specifica di un indirizzo di stringa.  
  
 `hinst`  
 Handle dell'istanza che contiene una stringa da usare come testo della descrizione comandi. Se `lpszText` è l'indirizzo del testo della descrizione comando, questo membro è NULL.  
  
 Quando si gestisce il `TTN_NEEDTEXT` notifica di messaggio, specificare la stringa da visualizzare in uno dei modi seguenti:  
  
-   Copiare il testo nel buffer specificato per il `szText` membro.  
  
-   Copiare l'indirizzo del buffer che contiene il testo per il `lpszText` membro.  
  
-   Copiare l'identificatore di una risorsa stringa per il `lpszText` membro e copia handle dell'istanza che contiene la risorsa per il `hinst` membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

