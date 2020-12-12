---
description: 'Altre informazioni su: uso di descrizioni comandi in un oggetto CStatusBarCtrl'
title: Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
ms.openlocfilehash: d77610a511698000dc70a1aa1cb1edb22fb3eb7a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143247"
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl

Per abilitare le descrizioni comandi per un controllo barra di stato, creare l' `CStatusBarCtrl` oggetto con lo stile SBT_TOOLTIPS.

> [!NOTE]
> Se si usa un `CStatusBar` oggetto per implementare la barra di stato, usare la `CStatusBar::CreateEx` funzione. Consente di specificare stili aggiuntivi per l' `CStatusBarCtrl` oggetto incorporato.

Una volta che l' `CStatusBarCtrl` oggetto è stato creato correttamente, utilizzare [CStatusBarCtrl:: SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl:: GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo del suggerimento per un riquadro specifico.

Una volta impostata la descrizione comando, questa viene visualizzata solo se la parte include un'icona e nessun testo oppure se non è possibile visualizzare tutto il testo all'interno della parte. Le descrizioni comandi non sono supportate in modalità semplice.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
