---
title: Descrizioni comandi in Windows non derivate da CFrameWnd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enabling tool tips [MFC]
- TOOLTIPTEXT structure [MFC]
- Help [MFC], tool tips for controls
- TTN_NEEDTEXT message [MFC]
- controls [MFC], tool tips
- handler functions [MFC], tool tips
ms.assetid: cad5ef0f-02e3-4151-ad0d-3d42e6932b0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5f187ae7e3d5d9dbe6441aa8e2ba0f7631fd5072
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956537"
---
# <a name="tool-tips-in-windows-not-derived-from-cframewnd"></a>Descrizioni comandi in Windows non derivate da CFrameWnd
Questo gruppo di articoli illustra l'abilitazione di descrizioni per i controlli contenuti in una finestra che non è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md). L'articolo [barre degli strumenti descrizioni](../mfc/toolbar-tool-tips.md) fornisce informazioni sulle descrizioni comandi per i controlli in un `CFrameWnd`.  
  
 Gli argomenti trattati in questo gruppo di articoli includono:  
  
-   [Abilitazione di descrizioni comandi](../mfc/enabling-tool-tips.md)  
  
-   [Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)  
  
-   [TOOLTIPTEXT (struttura)](../mfc/tooltiptext-structure.md)  
  
 Descrizioni comandi vengono visualizzate automaticamente per i pulsanti e altri controlli contenuti in una finestra padre derivano da `CFrameWnd`. Infatti `CFrameWnd` dispone di un gestore predefinito per il [notifica TTN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760269) notifica, che gestisce **TTN_NEEDTEXT** notifiche dallo strumento suggerimento controlli associati ai controlli.  
  
 Tuttavia, questo gestore predefinito non viene chiamato quando il **TTN_NEEDTEXT** notifica viene inviata da un controllo descrizione comando associato a un controllo in una finestra che non è un `CFrameWnd`, ad esempio un controllo in una finestra di dialogo o una visualizzazione form. Pertanto, è necessario fornire una funzione del gestore per il **TTN_NEEDTEXT** messaggio di notifica per visualizzare le descrizioni per i controlli figlio.  
  
 Le descrizioni comandi predefinito fornite per le finestre da [CWnd:: EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips) prive di testo associato. Per recuperare il testo per la descrizione comando da visualizzare, il **TTN_NEEDTEXT** notifica viene inviata alla finestra padre del controllo descrizione comando appena prima che venga visualizzata la finestra di descrizione comandi. Se non vi è alcun gestore per questo messaggio assegnare un valore per il *pszText* appartenente il **TOOLTIPTEXT** struttura, non verrà visualizzato alcun testo per la descrizione comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi](../mfc/tool-tips.md)

