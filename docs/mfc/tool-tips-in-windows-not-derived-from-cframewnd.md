---
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
ms.openlocfilehash: 3d44f2c503b689360f040e6804d319c331d5c0ca
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57260660"
---
# <a name="tool-tips-in-windows-not-derived-from-cframewnd"></a>Descrizioni comandi in Windows non derivate da CFrameWnd

Questa serie di articoli illustra attivare le descrizioni comandi per i controlli contenuti in una finestra che non è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md). L'articolo [barre degli strumenti descrizioni](../mfc/toolbar-tool-tips.md) fornisce informazioni sulle descrizioni comandi per i controlli in un `CFrameWnd`.

Gli argomenti trattati in questa serie di articoli includono:

- [Abilitazione di descrizioni comandi](../mfc/enabling-tool-tips.md)

- [Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)

- [Struttura TOOLTIPTEXT](../mfc/tooltiptext-structure.md)

Descrizioni comandi vengono visualizzate automaticamente per i pulsanti e altri controlli contenuti in una finestra padre derivano da `CFrameWnd`. Infatti `CFrameWnd` dispone di un gestore predefinito per il [notifica TTN_GETDISPINFO](/windows/desktop/Controls/ttn-getdispinfo) notifica, che gestisce **TTN_NEEDTEXT** notifiche dallo strumento suggerimento controlli associati ai controlli.

Tuttavia, questo gestore predefinito non viene chiamato quando la **TTN_NEEDTEXT** notifica viene inviata da un controllo descrizione comandi associato a un controllo in una finestra che non è un `CFrameWnd`, ad esempio un controllo in una finestra di dialogo o una visualizzazione form. Pertanto, è necessario per poter fornire una funzione del gestore per il **TTN_NEEDTEXT** messaggio di notifica per visualizzare le descrizioni per i controlli figlio.

Le descrizioni comandi predefinito fornite per windows da [CWnd:: EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips) sono privi di testo associato. Per recuperare il testo del suggerimento da visualizzare, il **TTN_NEEDTEXT** notifica viene inviata alla finestra padre del controllo ToolTip poco prima che viene visualizzata la finestra di descrizione comando. Se non vi è alcun gestore per questo messaggio assegnare un valore per il *pszText* membro delle **TOOLTIPTEXT** strutturare, non vi sarà alcun testo visualizzato per la descrizione comando.

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi](../mfc/tool-tips.md)
