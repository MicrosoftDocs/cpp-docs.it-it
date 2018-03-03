---
title: Descrizioni comandi in Windows non derivate da CFrameWnd | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c27126954f72eb4a075d0741b0ec0faec94f381c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tool-tips-in-windows-not-derived-from-cframewnd"></a>Descrizioni comandi in Windows non derivate da CFrameWnd
Questo gruppo di articoli illustra l'abilitazione di descrizioni comandi per i controlli contenuti in una finestra che non è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md). L'articolo [barre degli strumenti suggerimenti](../mfc/toolbar-tool-tips.md) fornisce informazioni sulle descrizioni comandi per i controlli in un `CFrameWnd`.  
  
 Gli argomenti trattati in questo gruppo di articoli includono:  
  
-   [Abilitazione di descrizioni comandi](../mfc/enabling-tool-tips.md)  
  
-   [Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)  
  
-   [TOOLTIPTEXT (struttura)](../mfc/tooltiptext-structure.md)  
  
 Descrizioni comandi vengono visualizzate automaticamente per i pulsanti e altri controlli contenuti in una finestra padre derivano da `CFrameWnd`. In questo modo `CFrameWnd` dispone di un gestore predefinito per il [notifica TTN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760269) notifica, che gestisce **TTN_NEEDTEXT** notifiche dallo strumento suggerimento controlli associati ai controlli.  
  
 Tuttavia, questo gestore predefinito non viene chiamato quando il **TTN_NEEDTEXT** notifica viene inviata da un controllo descrizione comandi associato a un controllo in una finestra che non è un `CFrameWnd`, ad esempio un controllo in una finestra di dialogo o una visualizzazione form. Pertanto, è necessario fornire una funzione del gestore per il **TTN_NEEDTEXT** messaggio di notifica per visualizzare le descrizioni comandi per i controlli figlio.  
  
 I suggerimenti dello strumento predefinito forniti per le finestre da [CWnd:: EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips) non dispone di testo associato. Per recuperare il testo per la descrizione comando da visualizzare, il **TTN_NEEDTEXT** notifica viene inviata alla finestra padre del controllo descrizione comando prima che viene visualizzata la finestra di descrizione comandi. Se non vi è alcun gestore per questo messaggio assegnare un valore per il **pszText** appartenente il **TOOLTIPTEXT** struttura, non verrà visualizzato alcun testo per la descrizione comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi](../mfc/tool-tips.md)

