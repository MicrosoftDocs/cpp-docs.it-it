---
description: 'Altre informazioni su: implementazione della barra di stato in MFC'
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
ms.openlocfilehash: d42f8b4bf6ae72cf8eb4a12d1f5eafb8603c5e1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216756"
---
# <a name="status-bar-implementation-in-mfc"></a>Implementazione della barra di stato in MFC

Un oggetto [CStatusBar](../mfc/reference/cstatusbar-class.md) è una barra di controllo con una riga di riquadri di output di testo. I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Gli esempi includono la guida del menu-righe di messaggio che illustrano brevemente il comando di menu selezionato e gli indicatori che mostrano lo stato del blocco di scorrimento, il blocco BLOC NUM e altri tasti.

A partire dalla versione 4,0 di MFC, le barre di stato vengono implementate usando la classe [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md), che incapsula un controllo comune della barra di stato. Per compatibilità con le versioni precedenti, MFC mantiene l'implementazione della barra di stato precedente nella classe `COldStatusBar` . Nella documentazione per le versioni precedenti di MFC viene descritto `COldStatusBar` in `CStatusBar` .

[CStatusBar:: GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl), una funzione membro nuova per MFC 4,0, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per la personalizzazione della barra di stato e la funzionalità aggiuntiva. `CStatusBar` le funzioni membro forniscono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl` , è possibile assegnare alle barre di stato ancora più le caratteristiche di una barra di stato. Quando si chiama `GetStatusBarCtrl` , viene restituito un riferimento a un `CStatusBarCtrl` oggetto. È possibile utilizzare tale riferimento per modificare il controllo barra di stato.

Nella figura seguente è illustrata una barra di stato che consente di visualizzare diversi indicatori.

![Barra di stato](../mfc/media/vc37dy1.gif "Status bar") <br/>
Barra di stato

Analogamente alla barra degli strumenti, l'oggetto barra di stato viene incorporato nella finestra cornice padre e viene costruito automaticamente quando viene costruita la finestra cornice. La barra di stato, come tutte le barre di controllo, viene distrutta automaticamente anche quando il frame padre viene eliminato definitivamente.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Aggiornamento del testo di un riquadro della barra di stato](../mfc/updating-the-text-of-a-status-bar-pane.md)

- Classi MFC [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)

- [Barre di controllo](../mfc/control-bars.md)

- [Barre di finestra di dialogo](../mfc/dialog-bars.md)

- [Barre degli strumenti (implementazione della barra degli strumenti MFC)](../mfc/mfc-toolbar-implementation.md)

## <a name="see-also"></a>Vedi anche

[Barre di stato](../mfc/status-bars.md)
