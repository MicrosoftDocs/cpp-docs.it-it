---
title: Impostazioni per il controllo ToolTip
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [MFC], activating
- CToolTipCtrl class [MFC], settings
ms.assetid: ff8c5c46-2047-403a-bd98-ffec3d21ee3a
ms.openlocfilehash: 5cc72401da95e63520b544865ea509a8ad219bda
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271931"
---
# <a name="settings-for-the-tool-tip-control"></a>Impostazioni per il controllo ToolTip

È possibile impostare il controllo di descrizione comando ([CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)) su attivo o inattivo. Se si imposta su attivo, il controllo di descrizione comando viene visualizzato quando il cursore si trova in uno strumento. Se si imposta su inattivo, il controllo di descrizione comando non viene visualizzato, anche quando il cursore si trova in uno strumento. Chiamare [Attiva](../mfc/reference/ctooltipctrl-class.md#activate) per attivare o disattivare un controllo di descrizione comandi.

È possibile impostare una descrizione comando attiva per visualizzare la descrizione comando quando il cursore si trova in uno strumento, se finestra proprietaria del controllo descrizione comandi è attiva o inattiva, usando lo stile TTS_ALWAYSTIP o meno. Se non si usa questo stile, il controllo di descrizione comando viene visualizzato solo quando la finestra proprietaria dello strumento è attiva.

La maggior parte delle applicazioni contiene barre degli strumenti con strumenti che corrispondono ai comandi di menu. Per questi strumenti è utile che il controllo di descrizione comando visualizzi lo stesso testo della voce di menu corrispondente. Il sistema elimina automaticamente la e commerciale (&) caratteri di tasti di scelta rapida da tutte le stringhe passate a un controllo descrizione comandi, a meno che il controllo ha lo stile TTS_NOPREFIX.

## <a name="see-also"></a>Vedere anche

[Uso di CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
