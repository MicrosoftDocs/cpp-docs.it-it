---
description: 'Altre informazioni su: descrizioni comandi in Windows non derivate da CFrameWnd'
title: Descrizioni comandi in Windows non derivate da CFrameWnd
ms.date: 11/04/2016
helpviewer_keywords:
- enabling tool tips [MFC]
- TOOLTIPTEXT structure [MFC]
- Help [MFC], tool tips for controls
- TTN_NEEDTEXT message [MFC]
- controls [MFC], tool tips
- handler functions [MFC], tool tips
ms.assetid: cad5ef0f-02e3-4151-ad0d-3d42e6932b0e
ms.openlocfilehash: 1d5d2ba744800424a9dce325f9d4341956bc22ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264427"
---
# <a name="tool-tips-in-windows-not-derived-from-cframewnd"></a>Descrizioni comandi in Windows non derivate da CFrameWnd

In questa famiglia di articoli viene illustrata l'abilitazione di descrizioni comandi per i controlli contenuti in una finestra non derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md). Le descrizioni comandi degli articoli sulle [barre degli strumenti](../mfc/toolbar-tool-tips.md) forniscono informazioni sulle descrizioni comandi per i controlli in un `CFrameWnd` .

Gli argomenti trattati in questa famiglia di articoli includono:

- [Abilitazione di descrizioni comandi](../mfc/enabling-tool-tips.md)

- [Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)

- [Struttura TOOLTIPTEXT](../mfc/tooltiptext-structure.md)

Le descrizioni comandi vengono visualizzate automaticamente per i pulsanti e gli altri controlli contenuti in una finestra padre derivata da `CFrameWnd` . Questo è dovuto `CFrameWnd` al fatto che ha un gestore predefinito per la notifica [TTN_GETDISPINFO](/windows/win32/Controls/ttn-getdispinfo) , che gestisce **TTN_NEEDTEXT** le notifiche dai controlli descrizione comando associati ai controlli.

Questo gestore predefinito, tuttavia, non viene chiamato quando la notifica **TTN_NEEDTEXT** viene inviata da un controllo descrizione comando associato a un controllo in una finestra che non è un oggetto `CFrameWnd` , ad esempio un controllo in una finestra di dialogo o in una visualizzazione form. Pertanto, è necessario fornire una funzione di gestione per il messaggio di notifica del **TTN_NEEDTEXT** per visualizzare le descrizioni comandi per i controlli figlio.

Alle descrizioni comandi predefinite fornite per Windows da [CWnd:: EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips) non è associato testo. Per recuperare il testo per la descrizione comandi da visualizzare, la notifica **TTN_NEEDTEXT** viene inviata alla finestra padre del controllo ToolTip immediatamente prima che venga visualizzata la finestra descrizione comando. Se non è disponibile alcun gestore per questo messaggio per assegnare un valore al membro *pszText* della struttura **ToolTipText** , non verrà visualizzato alcun testo per la descrizione comandi.

## <a name="see-also"></a>Vedi anche

[Descrizioni comandi](../mfc/tool-tips.md)
