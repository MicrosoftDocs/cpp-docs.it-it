---
title: Impostazioni per lo strumento di controllo ToolTip | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], activating
- CToolTipCtrl class [MFC], settings
ms.assetid: ff8c5c46-2047-403a-bd98-ffec3d21ee3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b61fb9450e6206c8f96102b5feeec6fbf3bead3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33379951"
---
# <a name="settings-for-the-tool-tip-control"></a>Impostazioni per il controllo ToolTip
È possibile impostare il controllo di descrizione comando ([CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)) su attivo o inattivo. Se si imposta su attivo, il controllo di descrizione comando viene visualizzato quando il cursore si trova in uno strumento. Se si imposta su inattivo, il controllo di descrizione comando non viene visualizzato, anche quando il cursore si trova in uno strumento. Chiamare [Attiva](../mfc/reference/ctooltipctrl-class.md#activate) per attivare o disattivare un controllo di descrizione comandi.  
  
 È possibile impostare una descrizione comando attiva per visualizzare la descrizione comando quando il cursore si trova in uno strumento, indipendentemente dal fatto che la finestra proprietaria del controllo di descrizione comando sia attiva o inattiva, usando lo stile **TTS_ALWAYSTIP** . Se non si usa questo stile, il controllo di descrizione comando viene visualizzato solo quando la finestra proprietaria dello strumento è attiva.  
  
 La maggior parte delle applicazioni contiene barre degli strumenti con strumenti che corrispondono ai comandi di menu. Per questi strumenti è utile che il controllo di descrizione comando visualizzi lo stesso testo della voce di menu corrispondente. Il sistema elimina automaticamente i caratteri di tasti di scelta rapida e commerciale (&) da tutte le stringhe passate a un controllo descrizione comando, a meno che il controllo ha il **TTS_NOPREFIX** stile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

