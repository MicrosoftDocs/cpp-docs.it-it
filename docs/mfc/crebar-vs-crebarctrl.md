---
description: 'Altre informazioni su: CReBar e CReBarCtrl'
title: CReBar e CReBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- CReBar class [MFC], vs. CReBarCtrl
- rebar controls [MFC], CReBarCtrl class [MFC]
- GetReBarCtrl class [MFC]
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
ms.openlocfilehash: 5a8dfe7594448319b4eb872abfb7022841d4e5dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309433"
---
# <a name="crebar-vs-crebarctrl"></a>CReBar e CReBarCtrl

MFC fornisce due classi per la creazione di rebarre: [CReBar](reference/crebar-class.md) e [CReBarCtrl](reference/crebarctrl-class.md) , che esegue il wrapping dell'API del controllo comune di Windows. `CReBar` fornisce tutte le funzionalità del controllo comune del Rebar e gestisce automaticamente molte delle impostazioni e delle strutture di controllo comuni richieste.

`CReBarCtrl` è una classe wrapper per il controllo Rebar Win32 e pertanto può essere più facile da implementare se non si intende integrare il controllo Rebar nell'architettura MFC. Se si prevede di utilizzare `CReBarCtrl` e integrare il controllo Rebar nell'architettura MFC, è necessario prestare maggiore attenzione alla comunicazione delle modifiche dei controlli Rebar a MFC. Questa comunicazione non è difficile. Tuttavia, si tratta di un lavoro aggiuntivo non necessario quando si utilizza `CReBar` .

Visual C++ offre due modi per sfruttare il controllo comune del Rebar.

- Creare il controllo Rebar usando `CReBar` , quindi chiamare [CReBar:: GetReBarCtrl](reference/crebar-class.md#getrebarctrl) per ottenere l'accesso alle `CReBarCtrl` funzioni membro.

    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che esegue il cast del **`this`** puntatore dell'oggetto Rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non ha alcun overhead.

- Creare il controllo Rebar usando il costruttore di [CReBarCtrl](reference/crebarctrl-class.md).

Uno dei due metodi fornirà l'accesso alle funzioni membro del controllo Rebar. Quando si chiama `CReBar::GetReBarCtrl` , viene restituito un riferimento a un `CReBarCtrl` oggetto in modo che sia possibile utilizzare un set di funzioni membro. Vedere [CReBar](reference/crebar-class.md) per informazioni sulla costruzione e la creazione di un controllo Rebar usando `CReBar` .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CReBarCtrl](using-crebarctrl.md)<br/>
[Controlli](controls-mfc.md)
