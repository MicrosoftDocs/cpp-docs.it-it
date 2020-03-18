---
title: CReBar e CReBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- CReBar class [MFC], vs. CReBarCtrl
- rebar controls [MFC], CReBarCtrl class [MFC]
- GetReBarCtrl class [MFC]
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
ms.openlocfilehash: 94f889be453a17a55357a260bd2a0c07037f6ded
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445279"
---
# <a name="crebar-vs-crebarctrl"></a>CReBar e CReBarCtrl

MFC fornisce due classi per la creazione di rebarre: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) , che esegue il wrapping dell'API del controllo comune di Windows. `CReBar` offre tutte le funzionalità del controllo comune del Rebar e gestisce automaticamente molte delle impostazioni e delle strutture di controllo comuni richieste.

`CReBarCtrl` è una classe wrapper per il controllo Rebar Win32 e pertanto può essere più facile da implementare se non si intende integrare il controllo Rebar nell'architettura MFC. Se si intende utilizzare `CReBarCtrl` e integrare il controllo Rebar nell'architettura MFC, è necessario prestare particolare attenzione alla comunicazione delle modifiche dei controlli Rebar a MFC. Questa comunicazione non è difficile. Tuttavia, si tratta di un lavoro aggiuntivo non necessario quando si usa `CReBar`.

L' C++ oggetto visivo fornisce due modi per sfruttare il controllo comune del Rebar.

- Creare il controllo Rebar usando `CReBar`e quindi chiamare [CReBar:: GetReBarCtrl](../mfc/reference/crebar-class.md#getrebarctrl) per ottenere l'accesso alle funzioni membro di `CReBarCtrl`.

    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che esegue il cast del puntatore **this** dell'oggetto Rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non ha alcun overhead.

- Creare il controllo Rebar usando il costruttore di [CReBarCtrl](../mfc/reference/crebarctrl-class.md).

Uno dei due metodi fornirà l'accesso alle funzioni membro del controllo Rebar. Quando si chiama `CReBar::GetReBarCtrl`, viene restituito un riferimento a un oggetto `CReBarCtrl` in modo che sia possibile utilizzare entrambi i set di funzioni membro. Per informazioni sulla costruzione e la creazione di un controllo Rebar con `CReBar`, vedere [CReBar](../mfc/reference/crebar-class.md) .

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
