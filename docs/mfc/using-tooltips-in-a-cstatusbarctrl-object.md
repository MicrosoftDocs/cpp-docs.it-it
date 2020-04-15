---
title: Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
ms.openlocfilehash: 29d326c708743424686d616bbaf172ccd72481ce
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374699"
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl

Per abilitare le descrizioni comandi `CStatusBarCtrl` per un controllo barra di stato, create l'oggetto con lo stile SBT_TOOLTIPS.

> [!NOTE]
> Se si utilizza `CStatusBar` un oggetto per implementare `CStatusBar::CreateEx` la barra di stato, utilizzare la funzione . Consente di specificare stili aggiuntivi `CStatusBarCtrl` per l'oggetto incorporato.

Dopo `CStatusBarCtrl` aver creato correttamente l'oggetto, utilizzare [CStatusBarCtrl::SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo del suggerimento per un riquadro specifico.

Una volta impostata, la descrizione comandi viene visualizzata solo se la parte ha un'icona e nessun testo o se tutto il testo non può essere visualizzato all'interno della parte. Le descrizioni comandi non sono supportate in modalità semplice.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
