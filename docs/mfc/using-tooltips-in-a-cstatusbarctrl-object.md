---
title: Tramite le descrizioni comandi in un oggetto CStatusBarCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f17dff6680209664e9d029404e4ef012b9f12046
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392359"
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

