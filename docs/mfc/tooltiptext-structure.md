---
description: 'Altre informazioni su: struttura TOOLTIPTEXT'
title: Struttura TOOLTIPTEXT
ms.date: 11/04/2016
f1_keywords:
- TOOLTIPTEXT
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- tool tips [MFC], notifications
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
ms.openlocfilehash: 077d4c27392b626a0e9665851eadf227245029b6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264297"
---
# <a name="tooltiptext-structure"></a>Struttura TOOLTIPTEXT

Per la scrittura del [gestore di notifiche delle descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md), è necessario utilizzare la struttura **ToolTipText** . I membri della struttura **ToolTipText** sono:

```cpp
typedef struct {
    NMHDR     hdr;        // required for all WM_NOTIFY messages
    LPTSTR    lpszText;   // see below
    TCHAR     szText[80]; // buffer for tool tip text
    HINSTANCE hinst;      // see below
    UINT      uflags;     // flag indicating how to interpret the
                          // idFrom member of the NMHDR structure
                          // that is included in the structure
} TOOLTIPTEXT, FAR *LPTOOLTIPTEXT;
```

*hdr*<br/>
Identifica lo strumento che necessita di testo. L'unico membro di questa struttura potrebbe essere necessario l'ID comando del controllo. L'ID comando del controllo si troverà nel membro *idFrom* della struttura **NMHDR** , a cui si accede con la sintassi `hdr.idFrom` . Vedere [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) per una descrizione dei membri della struttura **NMHDR** .

*lpszText*<br/>
Indirizzo di una stringa per ricevere il testo per uno strumento.

*szText*<br/>
Buffer che riceve il testo della descrizione comando. Un'applicazione può copiare il testo in questo buffer come alternativa alla specifica di un indirizzo di stringa.

*hInst*<br/>
Handle dell'istanza di contenente una stringa da utilizzare come testo della descrizione comando. Se *lpszText* è l'indirizzo del testo della descrizione comando, il membro è null.

Quando si gestisce il `TTN_NEEDTEXT` messaggio di notifica, specificare la stringa da visualizzare in uno dei modi seguenti:

- Copiare il testo nel buffer specificato dal membro *szText* .

- Copiare l'indirizzo del buffer che contiene il testo per il membro *lpszText* .

- Copiare l'identificatore di una risorsa di stringa nel membro *lpszText* e copiare l'handle dell'istanza contenente la risorsa per il membro *hInst* .

## <a name="see-also"></a>Vedi anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
