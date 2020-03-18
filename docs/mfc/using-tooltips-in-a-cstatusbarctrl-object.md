---
title: Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
ms.openlocfilehash: a607a5fb8c9470df42d12c771865b924891b2dac
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442537"
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl

Per abilitare le descrizioni comandi per un controllo barra di stato, creare l'oggetto `CStatusBarCtrl` con lo stile SBT_TOOLTIPS.

> [!NOTE]
>  Se si usa un oggetto `CStatusBar` per implementare la barra di stato, usare la funzione `CStatusBar::CreateEx`. Consente di specificare stili aggiuntivi per l'oggetto `CStatusBarCtrl` incorporato.

Una volta creato correttamente l'oggetto `CStatusBarCtrl`, utilizzare [CStatusBarCtrl:: SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl:: GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo del suggerimento per un riquadro specifico.

Una volta impostata la descrizione comando, questa viene visualizzata solo se la parte include un'icona e nessun testo oppure se non è possibile visualizzare tutto il testo all'interno della parte. Le descrizioni comandi non sono supportate in modalità semplice.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
