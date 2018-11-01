---
title: Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CStatusBarCtrl
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
ms.openlocfilehash: a5ebefe3d5daab9917cdb1db7eface09c78b456a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438792"
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl

Per abilitare le descrizioni comandi per un controllo barra di stato, creare il `CStatusBarCtrl` oggetto con lo stile SBT_TOOLTIPS.

> [!NOTE]
>  Se si usa un' `CStatusBar` oggetto per implementare la barra di stato, usare il `CStatusBar::CreateEx` (funzione). Consente di specificare gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl` oggetto.

Una volta il `CStatusBarCtrl` oggetto è stato creato correttamente, usare [CStatusBarCtrl:: SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo del suggerimento per un riquadro specifico.

Dopo aver impostata la descrizione comando, viene visualizzato solo se la parte dispone di un'icona e alcun testo, o se tutto il testo non può essere visualizzata all'interno della parte. Descrizioni comandi non sono supportate nella modalità semplice.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

