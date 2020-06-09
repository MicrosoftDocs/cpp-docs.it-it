---
title: Classi di finestre cornice (architettura)
ms.date: 11/04/2016
helpviewer_keywords:
- frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
ms.openlocfilehash: 483112d197b7c7211989ecda8b774deb9f30d49e
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624602"
---
# <a name="frame-window-classes-architecture"></a>Classi di finestre cornice (architettura)

Nell'architettura documento/visualizzazione, le finestre cornice sono finestre che contengono una finestra di visualizzazione. Supportano anche la presenza di barre di controllo collegate.

Nelle applicazioni con interfaccia a documenti multipli (MDI) la finestra principale è derivata da `CMDIFrameWnd` . Contiene indirettamente i frame dei documenti, che sono `CMDIChildWnd` oggetti. Gli `CMDIChildWnd` oggetti, a loro volta, contengono le visualizzazioni dei documenti.

Nelle applicazioni SDI (Single Document Interface) la finestra principale, derivata da `CFrameWnd` , contiene la visualizzazione del documento corrente.

[CFrameWnd](reference/cframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione SDI. Anche la classe di base per tutte le altre classi della finestra cornice.

[CMDIFrameWnd](reference/cmdiframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione MDI.

[CMDIChildWnd](reference/cmdichildwnd-class.md)<br/>
Classe base per le finestre cornice del documento di un'applicazione MDI.

[COleIPFrameWnd](reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando un documento server viene modificato sul posto.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
