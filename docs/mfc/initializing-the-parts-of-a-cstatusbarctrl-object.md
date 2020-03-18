---
title: Inizializzazione delle parti di un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- CStatusBarCtrl class [MFC], simple mode
- status bars [MFC], declaring parts of
- simple status bars [MFC]
- status bars [MFC], icons
- status bars [MFC], simple mode
- icons, using in status bars
- CStatusBarCtrl class [MFC], declaring parts of
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
ms.openlocfilehash: a5b65a2bbb68eaa7058f3514bb95a5209a0e5e71
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79444458"
---
# <a name="initializing-the-parts-of-a-cstatusbarctrl-object"></a>Inizializzazione delle parti di un oggetto CStatusBarCtrl

Per impostazione predefinita, nella barra di stato vengono visualizzate le informazioni sullo stato utilizzando riquadri distinti. Questi riquadri, detti anche parti, possono contenere una stringa di testo, un'icona o entrambi.

Utilizzare le [separazioni](../mfc/reference/cstatusbarctrl-class.md#setparts) per definire il numero di parti e la lunghezza che avrà la barra di stato. Dopo aver creato le parti della barra di stato, effettuare chiamate a [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) e a [seicon](../mfc/reference/cstatusbarctrl-class.md#seticon) per impostare il testo o l'icona per una parte specifica della barra di stato. Una volta che la parte è stata impostata correttamente, il controllo viene ridisegnato automaticamente.

Nell'esempio seguente viene inizializzato un oggetto `CStatusBarCtrl` esistente (`m_StatusBarCtrl`) con quattro riquadri, quindi viene impostata un'icona (IDI_ICON1) e un testo nella seconda parte.

[!code-cpp[NVC_MFCControlLadenDialog#31](../mfc/codesnippet/cpp/initializing-the-parts-of-a-cstatusbarctrl-object_1.cpp)]

Per ulteriori informazioni sull'impostazione della modalità di un oggetto `CStatusBarCtrl` su Simple, vedere [impostazione della modalità di un oggetto CStatusBarCtrl](../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
