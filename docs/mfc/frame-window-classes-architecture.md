---
title: Classi di finestra (architettura) dei frame | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.frame
dev_langs:
- C++
helpviewer_keywords:
- frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 117554b2c34853aa166c12d80b4821d3721e5992
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394127"
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

