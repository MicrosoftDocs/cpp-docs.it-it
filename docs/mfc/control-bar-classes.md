---
title: Classi di barre di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.control
dev_langs:
- C++
helpviewer_keywords:
- control bars [MFC], classes
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 13fe4cd9cc483bccde6a342ef224dfbafab36eca
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378559"
---
# <a name="control-bar-classes"></a>Classi di barre di controllo

Le barre di controllo sono collegate a una finestra cornice. Contengono pulsanti, riquadri di stato o un modello di finestra di dialogo. Le barre di controllo mobile, l'acronimo di caselle di strumenti, vengono implementate associandoli a un [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md) oggetto.

## <a name="framework-control-bars"></a>Le barre di controllo di Framework

Queste barre di controllo sono parte integrante del framework MFC. Sono più facili da utilizzare e più potente di barre di controllo di Windows perché sono integrate con il framework. La maggior parte delle applicazioni MFC utilizzano queste barre di controllo anziché le barre di controllo di Windows.

[CControlBar](../mfc/reference/ccontrolbar-class.md)<br/>
La classe base per le barre di controllo MFC elencati in questa sezione. Una barra di controllo è una finestra allineata al bordo di una finestra cornice. La barra di controllo contiene uno `HWND`-in base a controlli figlio o controlli non basati su un `HWND`, ad esempio i pulsanti della barra degli strumenti.

[CDialogBar](../mfc/reference/cdialogbar-class.md)<br/>
Una barra di controllo basato su un modello di finestra di dialogo.

[CReBar](../mfc/reference/crebar-class.md)<br/>
Supporta una barra degli strumenti che può contenere altre finestre figlio sotto forma di controlli.

[CToolBar](../mfc/reference/ctoolbar-class.md)<br/>
Finestre di controllo della barra degli strumenti che contengono pulsanti di comando di bitmap non basato su un `HWND`. La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CToolBarCtrl`.

[CStatusBar](../mfc/reference/cstatusbar-class.md)<br/>
La classe base per finestre di controllo della barra di stato. La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CStatusBarCtrl`.

## <a name="windows-control-bars"></a>Le barre di controllo di Windows

Queste barre di controllo sono thin wrapper per i controlli di Windows corrispondenti. Dato che non sono integrati con il framework, sono più difficili da utilizzare rispetto alle barre di controllo elencate in precedenza. La maggior parte delle applicazioni MFC usano le barre di controllo elencate in precedenza.

[CRebarCtrl](../mfc/reference/crebarctrl-class.md)<br/>
Implementa il controllo interno del `CRebar` oggetto.

[CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)<br/>
Una finestra in orizzontale, in genere suddivisa in riquadri, in cui un'applicazione può visualizzare le informazioni sullo stato.

[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)<br/>
Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.

## <a name="related-classes"></a>Classi correlate

[CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)<br/>
Una piccola finestra popup che consente di visualizzare una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.

[CDockState](../mfc/reference/cdockstate-class.md)<br/>
Gestisce l'archiviazione permanente dei dati di stato per le barre di controllo di ancoraggio.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

