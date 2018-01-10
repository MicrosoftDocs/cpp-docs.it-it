---
title: Impostazioni per lo strumento di controllo ToolTip | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- tool tips [MFC], activating
- CToolTipCtrl class [MFC], settings
ms.assetid: ff8c5c46-2047-403a-bd98-ffec3d21ee3a
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 406e35b6ab694ca972d4cd6add0dcca7586e5005
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="settings-for-the-tool-tip-control"></a>Impostazioni per il controllo ToolTip
È possibile impostare il controllo di descrizione comando ([CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)) su attivo o inattivo. Se si imposta su attivo, il controllo di descrizione comando viene visualizzato quando il cursore si trova in uno strumento. Se si imposta su inattivo, il controllo di descrizione comando non viene visualizzato, anche quando il cursore si trova in uno strumento. Chiamare [Attiva](../mfc/reference/ctooltipctrl-class.md#activate) per attivare o disattivare un controllo di descrizione comandi.  
  
 È possibile impostare una descrizione comando attiva per visualizzare la descrizione comando quando il cursore si trova in uno strumento, indipendentemente dal fatto che la finestra proprietaria del controllo di descrizione comando sia attiva o inattiva, usando lo stile **TTS_ALWAYSTIP** . Se non si usa questo stile, il controllo di descrizione comando viene visualizzato solo quando la finestra proprietaria dello strumento è attiva.  
  
 La maggior parte delle applicazioni contiene barre degli strumenti con strumenti che corrispondono ai comandi di menu. Per questi strumenti è utile che il controllo di descrizione comando visualizzi lo stesso testo della voce di menu corrispondente. Il sistema elimina automaticamente i caratteri di tasti di scelta rapida e commerciale (&) da tutte le stringhe passate a un controllo descrizione comando, a meno che il controllo ha il **TTS_NOPREFIX** stile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

