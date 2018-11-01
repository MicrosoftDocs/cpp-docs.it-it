---
title: Funzione delle finestre cornice
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], about frame windows
- frame windows [MFC], tasks
- MFC, frame windows
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
ms.openlocfilehash: ea35b98e5234c10a10143bad1d35fdd1b4510ced
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50508771"
---
# <a name="what-frame-windows-do"></a>Funzione delle finestre cornice

Oltre a incorniciare semplicemente una visualizzazione, le finestre cornice sono responsabili di numerose attività relative al coordinamento della cornice con la relativa visualizzazione e con l'applicazione. [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) ereditare [CFrameWnd](../mfc/reference/cframewnd-class.md), essi dispongono `CFrameWnd` le funzionalità, nonché nuove funzionalità che aggiungono. Esempi di finestre figlio includono le visualizzazioni, i controlli quali i pulsanti e le caselle di riepilogo, e le barre di controllo, incluse le barre degli strumenti, le barre di stato e le barre della finestra di dialogo.

La finestra cornice è responsabile della gestione del layout delle finestre figlio. Nel framework MFC, una finestra cornice posiziona le barre di controllo, le visualizzazioni e le altre finestre figlio nella relativa area client.

La finestra cornice inoltra i comandi alle relative visualizzazioni e può rispondere a messaggi di notifica da finestre di controllo.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Barre di controllo (modalità di adattamento nella finestra cornice)](../mfc/control-bars.md)

- [Gestione dei menu, barre di controllo e tasti di scelta rapida (modalità di adattamento nella finestra cornice)](../mfc/managing-menus-control-bars-and-accelerators.md)

- [Routing di comandi (dalla finestra cornice alla relativa visualizzazione e ad altre destinazioni comando)](../mfc/command-routing.md)

- [Architettura /View documento](../mfc/document-view-architecture.md)

- [Barre di controllo](../mfc/control-bars.md)

- [Controlli](../mfc/controls-mfc.md)

## <a name="see-also"></a>Vedere anche

[Finestre cornice](../mfc/frame-windows.md)

