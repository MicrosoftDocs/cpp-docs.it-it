---
title: Che cos'è Windows Frame | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- frame windows [MFC], about frame windows
- frame windows [MFC], tasks
- MFC, frame windows
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf97fb086f9ede43f9679e66a7c917b800f97dc8
ms.sourcegitcommit: e4a690bf33b44432179de0bc537e26616d13c553
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48892189"
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

