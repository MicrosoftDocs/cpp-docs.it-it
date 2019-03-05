---
title: Struttura TOOLTIPTEXT
ms.date: 11/04/2016
f1_keywords:
- TOOLTIPTEXT
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- tool tips [MFC], notifications
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
ms.openlocfilehash: 7d77ca7dc55273e6084e919323ed71e55fa68a2c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57260595"
---
# <a name="tooltiptext-structure"></a>Struttura TOOLTIPTEXT

Iscritto il [gestore descrizione comando notifica](../mfc/handling-ttn-needtext-notification-for-tool-tips.md), è necessario utilizzare il **TOOLTIPTEXT** struttura. I membri del **TOOLTIPTEXT** struttura sono:

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
Identifica lo strumento che richiede il testo. L'unico membro della struttura che potrebbe essere necessario è l'ID del comando. del controllo ID comando del controllo sarà nel *idFrom* membro delle **NMHDR** struttura, l'accesso con la sintassi `hdr.idFrom`. Visualizzare [NMHDR](/windows/desktop/api/richedit/ns-richedit-_nmhdr) per una descrizione dei membri delle **NMHDR** struttura.

*lpszText*<br/>
Indirizzo di una stringa che riceve il testo per uno strumento.

*szText*<br/>
Buffer che riceve il testo della descrizione comando. Un'applicazione può copiare il testo per questo buffer come alternativa alla specifica di un indirizzo di stringa.

*hinst*<br/>
Handle dell'istanza che contiene una stringa da utilizzare come il testo della descrizione comando. Se *lpszText* è l'indirizzo del testo della descrizione comandi, questo membro è NULL.

Quando si gestisce il `TTN_NEEDTEXT` notifica di messaggio, specificare la stringa da visualizzare in uno dei modi seguenti:

- Copiare il testo nel buffer specificato per il *szText* membro.

- Copiare l'indirizzo del buffer che contiene il testo per il *lpszText* membro.

- Copiare l'identificatore della risorsa stringa per il *lpszText* membro e copiare l'handle dell'istanza che contiene la risorsa per il *hinst* membro.

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
