---
description: 'Altre informazioni su: classi della finestra cornice (architettura)'
title: Classi di finestre cornice (architettura)
ms.date: 11/04/2016
helpviewer_keywords:
- frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
ms.openlocfilehash: 045108cd1e45325cf6069b5d8259ffab9abb0c2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155033"
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

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
