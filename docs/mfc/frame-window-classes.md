---
title: Classi Frame-Window
ms.date: 11/04/2016
helpviewer_keywords:
- frame window classes [MFC], about frame window classes
- frame window classes [MFC]
- windows [MFC], MDI
- document frame windows [MFC], classes
- single document interface (SDI), frame windows
- window classes [MFC], frame
- MFC, frame windows
- MDI [MFC], frame windows
- classes [MFC], window
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
ms.openlocfilehash: ffa5b966ee042120213896dc7ad9d81c048ef928
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625804"
---
# <a name="frame-window-classes"></a>Classi Frame-Window

Ogni applicazione dispone di una "finestra cornice principale", una finestra del desktop che in genere contiene il nome dell'applicazione nella didascalia. Ogni documento ha in genere una "finestra cornice del documento". Una finestra cornice del documento contiene almeno una visualizzazione, che presenta i dati del documento.

## <a name="frame-windows-in-sdi-and-mdi-applications"></a>Finestre cornice nelle applicazioni SDI e MDI

Per un'applicazione SDI, è presente una finestra cornice derivata dalla classe [CFrameWnd](reference/cframewnd-class.md). Questa finestra è sia la finestra cornice principale che la finestra cornice del documento. Per un'applicazione MDI, la finestra cornice principale viene derivata dalla classe [CMDIFrameWnd](reference/cmdiframewnd-class.md)e le finestre cornice del documento, che sono finestre figlio MDI, derivano dalla classe [CMDIChildWnd](reference/cmdichildwnd-class.md).

## <a name="use-the-frame-window-class-or-derive-from-it"></a>Usare la classe della finestra cornice o derivare da essa

Queste classi forniscono la maggior parte delle funzionalità della finestra cornice necessarie per le applicazioni. In circostanze normali, il comportamento e l'aspetto predefiniti che forniscono soddisferanno le proprie esigenze. Se sono necessarie funzionalità aggiuntive, derivare da queste classi.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Classi frame-window create dalla creazione guidata applicazione](frame-window-classes-created-by-the-application-wizard.md)

- [Stili della finestra cornice](frame-window-styles-cpp.md)

- [Modifica degli stili di una finestra creata da MFC](changing-the-styles-of-a-window-created-by-mfc.md)

## <a name="see-also"></a>Vedere anche

[Finestre cornice](frame-windows.md)
