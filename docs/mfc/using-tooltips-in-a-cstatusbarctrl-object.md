---
title: Tramite le descrizioni comandi in un oggetto CStatusBarCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], using in status bars
- status bars [MFC], tool tips
- CStatusBarCtrl class [MFC], tool tips
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cf522d17d8abfc4b8dbf53baa24255ab23cfa621
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-tooltips-in-a-cstatusbarctrl-object"></a>Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
Per abilitare le descrizioni comandi per un controllo barra di stato, creare il `CStatusBarCtrl` dell'oggetto con il **SBT_TOOLTIPS** stile.  
  
> [!NOTE]
>  Se si utilizza un `CStatusBar` oggetto per implementare la barra di stato, utilizzare il `CStatusBar::CreateEx` (funzione). Consente di specificare gli stili aggiuntivi per l'oggetto incorporato **CStatusBarCtrl** oggetto.  
  
 Una volta il `CStatusBarCtrl` oggetto è stato creato correttamente, utilizzare [CStatusBarCtrl:: SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) e [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) per impostare e recuperare il testo di suggerimento per un riquadro specifico.  
  
 Dopo aver impostata la descrizione comando, viene visualizzato solo se la parte ha un'icona e non testo oppure se tutto il testo non può essere visualizzata all'interno della parte. Descrizioni comandi non sono supportate in modalità semplice.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

