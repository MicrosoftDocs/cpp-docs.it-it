---
title: Struttura TOOLTIPTEXT
ms.date: 11/04/2016
f1_keywords:
- TOOLTIPTEXT
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- tool tips [MFC], notifications
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
ms.openlocfilehash: 2eb899e66acbadbe45aae2c8adbb356bf4730191
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915254"
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
Identifica lo strumento che necessita di testo. L'unico membro di questa struttura potrebbe essere necessario l'ID comando del controllo. L'ID comando del controllo si troverà nel membro *idFrom* della struttura **NMHDR** , a cui si accede con la `hdr.idFrom`sintassi. Vedere [NMHDR](/windows/desktop/api/richedit/ns-richedit-nmhdr) per una descrizione dei membri della struttura **NMHDR** .

*lpszText*<br/>
Indirizzo di una stringa per ricevere il testo per uno strumento.

*szText*<br/>
Buffer che riceve il testo della descrizione comando. Un'applicazione può copiare il testo in questo buffer come alternativa alla specifica di un indirizzo di stringa.

*hinst*<br/>
Handle dell'istanza di contenente una stringa da utilizzare come testo della descrizione comando. Se *lpszText* è l'indirizzo del testo della descrizione comando, il membro è null.

Quando si gestisce il `TTN_NEEDTEXT` messaggio di notifica, specificare la stringa da visualizzare in uno dei modi seguenti:

- Copiare il testo nel buffer specificato dal membro *szText* .

- Copiare l'indirizzo del buffer che contiene il testo per il membro *lpszText* .

- Copiare l'identificatore di una risorsa di stringa nel membro *lpszText* e copiare l'handle dell'istanza contenente la risorsa per il membro *hInst* .

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
