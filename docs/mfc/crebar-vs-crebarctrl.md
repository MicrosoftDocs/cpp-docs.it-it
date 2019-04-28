---
title: CReBar e CReBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CReBar
- CReBarCtrl
helpviewer_keywords:
- CReBar class [MFC], vs. CReBarCtrl
- rebar controls [MFC], CReBarCtrl class [MFC]
- GetReBarCtrl class [MFC]
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
ms.openlocfilehash: a1b5cda729e760246449bf197fdc9b32752b96e8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62241785"
---
# <a name="crebar-vs-crebarctrl"></a>CReBar e CReBarCtrl

MFC fornisce due classi per creare Rebar: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CReBar` fornisce tutte le funzionalità del controllo comune rebar, e consente di gestire molte strutture e le impostazioni di controllo comuni necessarie per l'utente.

`CReBarCtrl` è una classe wrapper per il controllo rebar Win32 e pertanto potrebbe essere più facile da implementare se non si prevede di integrare il controllo rebar nell'architettura di MFC. Se si prevede di usare `CReBarCtrl` e integrare il controllo rebar nell'architettura di MFC, è necessario che vengano comunicate controllo rebar a MFC. Questa comunicazione non è difficile; è tuttavia operazioni aggiuntive che non sono quindi necessario quando si usa `CReBar`.

Visual C++ fornisce due modi per sfruttare i vantaggi del controllo comune rebar.

- Creare il controllo rebar mediante `CReBar`, quindi chiamare [CReBar:: GetReBarCtrl](../mfc/reference/crebar-class.md#getrebarctrl) per ottenere l'accesso per il `CReBarCtrl` funzioni membro.

    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che esegue il cast di **ciò** puntatore dell'oggetto controllo rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non dispone di alcun overhead.

- Creare il controllo rebar mediante [CReBarCtrl](../mfc/reference/crebarctrl-class.md)del costruttore.

Entrambi i metodi offrono l'accesso alle funzioni membro del controllo rebar. Quando si chiama `CReBar::GetReBarCtrl`, viene restituito un riferimento a un `CReBarCtrl` quindi è possibile usare dei set di funzioni membro dell'oggetto. Visualizzare [CReBar](../mfc/reference/crebar-class.md) per informazioni sulla costruzione e creazione di un controllo rebar mediante `CReBar`.

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
