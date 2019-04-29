---
title: Metodi di creazione di una barra degli strumenti
ms.date: 11/04/2016
helpviewer_keywords:
- CToolBarCtrl class [MFC], and CToolBar class [MFC]
- CToolBar class [MFC], creating toolbars
- MFC toolbars
- toolbar controls [MFC]
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: f19d8d65-d49f-445c-abe8-d47d3e4101c8
ms.openlocfilehash: f269ad990042f51554ec598b0bddbe5a6d7776b8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383925"
---
# <a name="methods-of-creating-a-toolbar"></a>Metodi di creazione di una barra degli strumenti

MFC fornisce due classi per creare barre degli strumenti: [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CToolBar` fornisce tutte le funzionalità del controllo della barra degli strumenti comuni e consente di gestire molte strutture e le impostazioni di controllo comuni necessarie per l'utente; Tuttavia, il file eseguibile risultante in genere è di dimensioni maggiore rispetto a quello creato con `CToolBarCtrl`.

`CToolBarCtrl` in genere i risultati in un file eseguibile più piccolo ed è preferibile usare `CToolBarCtrl` se non si prevede di integrare la barra degli strumenti nell'architettura di MFC. Se si prevede di usare `CToolBarCtrl` e integrare la barra degli strumenti nell'architettura di MFC, è necessario prestare attenzione aggiuntiva per comunicare le modifiche di controllo della barra degli strumenti a MFC. Questa comunicazione non è difficile; è tuttavia operazioni aggiuntive che non sono quindi necessario quando si usa `CToolBar`.

Visual C++ fornisce due modi per sfruttare il controllo comune barra degli strumenti.

- Creare la barra degli strumenti usando `CToolBar`, quindi chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl) per ottenere l'accesso per il `CToolBarCtrl` funzioni membro.

- Creare la barra degli strumenti usando [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)del costruttore.

Entrambi i metodi offrono l'accesso alle funzioni membro del controllo della barra degli strumenti. Quando si chiama `CToolBar::GetToolBarCtrl`, viene restituito un riferimento a un `CToolBarCtrl` quindi è possibile usare dei set di funzioni membro dell'oggetto. Visualizzare [CToolBar](../mfc/reference/ctoolbar-class.md) per informazioni sulla costruzione e creazione di una barra degli strumenti tramite `CToolBar`.

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
