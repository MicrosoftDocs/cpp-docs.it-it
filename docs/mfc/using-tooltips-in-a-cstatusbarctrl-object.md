---
title: Tramite le descrizioni comandi in un oggetto CStatusBarCtrl | Documenti Microsoft
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
ms.openlocfilehash: 9cce98e4a3b3ffd506607529b9fea6f0c1114cc3
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951268"
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
Per abilitare le descrizioni comandi per un controllo barra di stato, creare il `CStatusBarCtrl` oggetto con lo stile SBT_TOOLTIPS.  
  
> [!NOTE]
>  Se si utilizza un `CStatusBar` oggetto per implementare la barra di stato, utilizzare il `CStatusBar::CreateEx` (funzione). Consente di specificare gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl` oggetto.  
  
 Una volta il `CStatusBarCtrl` oggetto è stato creato correttamente, utilizzare [CStatusBarCtrl:: SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo di suggerimento per un riquadro specifico.  
  
 Una volta configurata la descrizione comando, viene visualizzato solo se la parte caratterizzato da un'icona e non testo oppure se tutto il testo non può essere visualizzata all'interno della parte. Descrizioni comandi non sono supportate in modalità semplice.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

