---
title: Classi di barre di controllo
ms.date: 11/04/2016
helpviewer_keywords:
- control bars [MFC], classes
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
ms.openlocfilehash: a050c5d2f7396324c2c380a03fc28e01ab992208
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440959"
---
# <a name="control-bar-classes"></a>Classi di barre di controllo

Le barre di controllo sono collegate a una finestra cornice. Contengono pulsanti, riquadri di stato o un modello di finestra di dialogo. Le barre di controllo a virgola mobile, denominate anche tavolozze degli strumenti, vengono implementate mediante l'associazione a un oggetto [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md) .

## <a name="framework-control-bars"></a>Barre di controllo del Framework

Queste barre di controllo sono parte integrante del framework MFC. Sono più facili da usare e più potenti rispetto alle barre di controllo di Windows perché sono integrate con il Framework. La maggior parte delle applicazioni MFC utilizza queste barre di controllo anziché le barre di controllo di Windows.

[CControlBar](../mfc/reference/ccontrolbar-class.md)<br/>
Classe base per le barre di controllo MFC elencate in questa sezione. Una barra di controllo è una finestra allineata al bordo di una finestra cornice. La barra di controllo contiene controlli figlio basati su `HWND`o controlli non basati su un `HWND`, ad esempio i pulsanti della barra degli strumenti.

[CDialogBar](../mfc/reference/cdialogbar-class.md)<br/>
Barra di controllo basata su un modello di finestra di dialogo.

[CReBar](../mfc/reference/crebar-class.md)<br/>
Supporta una barra degli strumenti che può contenere altre finestre figlio sotto forma di controlli.

[CToolBar](../mfc/reference/ctoolbar-class.md)<br/>
Finestre di controllo della barra degli strumenti che contengono pulsanti di comando bitmap non basati su un `HWND`. La maggior parte delle applicazioni MFC utilizza questa classe anziché `CToolBarCtrl`.

[CStatusBar](../mfc/reference/cstatusbar-class.md)<br/>
Classe base per le finestre di controllo della barra di stato. La maggior parte delle applicazioni MFC utilizza questa classe anziché `CStatusBarCtrl`.

## <a name="windows-control-bars"></a>Barre di controllo di Windows

Queste barre di controllo sono wrapper sottili per i controlli di Windows corrispondenti. Poiché non sono integrati con il Framework, sono più difficili da usare rispetto alle barre di controllo elencate in precedenza. La maggior parte delle applicazioni MFC utilizza le barre di controllo elencate in precedenza.

[CRebarCtrl](../mfc/reference/crebarctrl-class.md)<br/>
Implementa il controllo interno dell'oggetto `CRebar`.

[CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)<br/>
Finestra orizzontale, in genere divisa in riquadri, in cui un'applicazione può visualizzare informazioni sullo stato.

[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)<br/>
Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.

## <a name="related-classes"></a>Classi correlate

[CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)<br/>
Piccola finestra popup che visualizza una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.

[CDockState](../mfc/reference/cdockstate-class.md)<br/>
Gestisce l'archiviazione persistente dei dati dello stato di ancoraggio per le barre di controllo.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
