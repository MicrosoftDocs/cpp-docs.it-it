---
title: Metodi di creazione di una barra di stato
ms.date: 11/04/2016
helpviewer_keywords:
- CStatusBar class [MFC], vs. CStatusBarCtrl
- methods [MFC], creating status bars
- CStatusBarCtrl class [MFC], vs. CStatusBar
- CStatusBarCtrl class [MFC], creating
- methods [MFC]
- status bars [MFC], creating
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
ms.openlocfilehash: 1156f8bdeafb71dc9e6dbd9fc5b85607542918f7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587976"
---
# <a name="methods-of-creating-a-status-bar"></a>Metodi di creazione di una barra di stato

MFC fornisce due classi per creare le barre di stato: [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CStatusBar` fornisce tutte le funzionalità dello stato della barra di controllo comune, interagisce automaticamente con i menu e barre degli strumenti e numerose impostazioni di controllo comuni necessarie e strutture gestisce automaticamente; Tuttavia, il file eseguibile risultante in genere è di dimensioni maggiore rispetto a quello creato con `CStatusBarCtrl`.

`CStatusBarCtrl` in genere i risultati in un file eseguibile più piccolo ed è preferibile usare `CStatusBarCtrl` se non si prevede di integrare la barra di stato nell'architettura di MFC. Se si prevede di usare `CStatusBarCtrl` e integrare la barra di stato nell'architettura di MFC, è necessario prestare attenzione aggiuntiva per comunicare lo stato della barra di manipolazioni di controllo a MFC. Questa comunicazione non è difficile; è tuttavia operazioni aggiuntive che non sono quindi necessario quando si usa `CStatusBar`.

Visual C++ fornisce due modi per sfruttare il controllo comune barra di stato.

- Creare il barra di stato tramite `CStatusBar`, quindi chiamare [CStatusBar:: GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl) per ottenere l'accesso per il `CStatusBarCtrl` funzioni membro.

- Creare il barra di stato tramite [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)del costruttore.

Entrambi i metodi offrono l'accesso alle funzioni membro del controllo indicatore di stato. Quando si chiama `CStatusBar::GetStatusBarCtrl`, viene restituito un riferimento a un `CStatusBarCtrl` quindi è possibile usare dei set di funzioni membro dell'oggetto. Visualizzare [CStatusBar](../mfc/reference/cstatusbar-class.md) per informazioni sulla costruzione e creazione di un barra di stato tramite `CStatusBar`.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

