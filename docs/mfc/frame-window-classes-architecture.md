---
title: Classi di finestre cornice (architettura)
ms.date: 11/04/2016
helpviewer_keywords:
- frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
ms.openlocfilehash: e3ae432c1adc881a5c67d6a6c292dc1f6a583ab3
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441258"
---
# <a name="frame-window-classes-architecture"></a>Classi di finestre cornice (architettura)

Nell'architettura documento/visualizzazione, le finestre cornice sono finestre che contengono una finestra di visualizzazione. Supportano anche la presenza di barre di controllo collegate.

Nelle applicazioni con interfaccia a documenti multipli (MDI) la finestra principale è derivata da `CMDIFrameWnd`. Contiene indirettamente i frame dei documenti, che sono `CMDIChildWnd` oggetti. Gli oggetti `CMDIChildWnd`, a loro volta, contengono le visualizzazioni dei documenti.

Nelle applicazioni SDI (Single Document Interface) la finestra principale, derivata da `CFrameWnd`, contiene la visualizzazione del documento corrente.

[CFrameWnd](../mfc/reference/cframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione SDI. Anche la classe di base per tutte le altre classi della finestra cornice.

[CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione MDI.

[CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)<br/>
Classe base per le finestre cornice del documento di un'applicazione MDI.

[COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando un documento server viene modificato sul posto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
