---
title: Implementazione della barra di stato in MFC
ms.date: 11/19/2018
f1_keywords:
- COldStatusBar
helpviewer_keywords:
- status bars [MFC], implementing in MFC
- CStatusBarCtrl class [MFC], and MFC status bars
- CStatusBar class [MFC], and CStatusBarCtrl class [MFC]
- CStatusBarCtrl class [MFC], and CStatusBar class [MFC]
- status bars [MFC], backward compatibility
- status bars [MFC], old with COldStatusBar class [MFC]
- COldStatusBar class [MFC]
- status bars [MFC], and CStatusBarCtrl class
- CStatusBar class [MFC], and MFC status bars
- status indicators
- status bars [MFC], Windows 95 implementation
ms.assetid: be5cd876-38e3-4d5c-b8cb-16d57a16a142
ms.openlocfilehash: abd16ecb5e6a492bc42c747f60ec0859e1bc05cb
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346421"
---
# <a name="status-bar-implementation-in-mfc"></a>Implementazione della barra di stato in MFC

Oggetto [CStatusBar](../mfc/reference/cstatusbar-class.md) oggetto è una barra di controllo con una riga di riquadri di output di testo. I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Ad esempio le righe di messaggio della Guida dal menu che illustrano brevemente il comando di menu selezionata e gli indicatori che mostrano lo stato del tasto BLOC SCORR, BLOC NUM e altri codici.

A partire dalla versione 4.0 di MFC, le barre di stato vengono implementate usando classi [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md), che incapsula un controllo comune barra di stato. Per garantire la compatibilità con le versioni precedenti, MFC consente di mantenere l'implementazione della barra di stato meno recente nella classe `COldStatusBar`. Descrive la documentazione per le versioni precedenti di MFC `COldStatusBar` sotto `CStatusBar`.

[CStatusBar:: GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per lo stato di personalizzazione e funzionalità aggiuntive delle barre. `CStatusBar` funzioni membro offrono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare le barre di stato ancora più delle caratteristiche di una barra di stato. Quando si chiama `GetStatusBarCtrl`, verrà restituito un riferimento a un `CStatusBarCtrl` oggetto. È possibile utilizzare tale riferimento per modificare il controllo barra di stato.

La figura seguente mostra una barra di stato che consente di visualizzare gli indicatori di diversi.

![Barra di stato](../mfc/media/vc37dy1.gif "barra di stato") <br/>
Barra di stato

Ad esempio la barra degli strumenti, l'oggetto della barra di stato è incorporato nella relativa finestra cornice padre e viene creato automaticamente quando la finestra cornice viene costruita. La barra di stato, ad esempio tutte le barre di controllo, viene eliminata automaticamente anche quando il frame padre viene eliminato definitivamente.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Aggiornamento del testo di un riquadro barra di stato](../mfc/updating-the-text-of-a-status-bar-pane.md)

- Classi MFC [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)

- [Barre di controllo](../mfc/control-bars.md)

- [Barre di finestra di dialogo](../mfc/dialog-bars.md)

- [Barre degli strumenti (implementazione della barra degli strumenti MFC)](../mfc/mfc-toolbar-implementation.md)

## <a name="see-also"></a>Vedere anche

[Barre di stato](../mfc/status-bars.md)
