---
title: Classi di finestre cornice (architettura)
ms.date: 11/04/2016
f1_keywords:
- vc.classes.frame
helpviewer_keywords:
- frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
ms.openlocfilehash: d1022d9a49e12585a6588e7b3202155f533e4706
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431707"
---
# <a name="frame-window-classes-architecture"></a>Classi di finestre cornice (architettura)

Nell'architettura documento/visualizzazione, finestre cornice sono finestre che contengono una finestra di visualizzazione. Supportano inoltre controllare la presenza di barre a cui è collegate.

In applicazioni di multiple document interface (MDI), la finestra principale è derivata da `CMDIFrameWnd`. Contiene indirettamente frame dei documenti, ossia `CMDIChildWnd` oggetti. Il `CMDIChildWnd` oggetti, a sua volta, contengono le visualizzazioni dei documenti.

In applicazioni single document interface (SDI), la finestra principale, derivata da `CFrameWnd`, contiene la visualizzazione del documento corrente.

[CFrameWnd](../mfc/reference/cframewnd-class.md)<br/>
Classe di base per la finestra cornice principale di un'applicazione SDI. Anche la classe base per tutte le altre classi finestra cornice.

[CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)<br/>
Classe di base per la finestra cornice principale di un'applicazione MDI.

[CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)<br/>
La classe base per finestre cornice del documento di un'applicazione MDI.

[COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando viene modificato un documento del server sul posto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

