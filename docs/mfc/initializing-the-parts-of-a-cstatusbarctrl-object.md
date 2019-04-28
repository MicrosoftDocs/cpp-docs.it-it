---
title: Inizializzazione delle parti di un oggetto CStatusBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CStatusBarCtrl
helpviewer_keywords:
- CStatusBarCtrl class [MFC], simple mode
- status bars [MFC], declaring parts of
- simple status bars [MFC]
- status bars [MFC], icons
- status bars [MFC], simple mode
- icons, using in status bars
- CStatusBarCtrl class [MFC], declaring parts of
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
ms.openlocfilehash: 0f00aee03a74799bf14563653b50c487ff001d02
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182319"
---
# <a name="initializing-the-parts-of-a-cstatusbarctrl-object"></a>Inizializzazione delle parti di un oggetto CStatusBarCtrl

Per impostazione predefinita, una barra di stato Visualizza informazioni sullo stato con riquadri separati. Questi riquadri (detto anche parti) possono contenere una stringa di testo, un'icona o entrambi.

Uso [SetParts](../mfc/reference/cstatusbarctrl-class.md#setparts) avrà per definire il numero di parti e la lunghezza, la barra di stato. Dopo aver creato le parti della barra di stato, eseguire chiamate a [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) e [SetIcon](../mfc/reference/cstatusbarctrl-class.md#seticon) per impostare il testo o sull'icona per una parte specifica della barra di stato. Dopo la parte è stata impostata, il controllo viene ridisegnato automaticamente.

L'esempio seguente Inizializza un oggetto esistente `CStatusBarCtrl` oggetto (`m_StatusBarCtrl`) con quattro riquadri e quindi imposta un'icona (IDI_ICON1) e un testo nella seconda parte.

[!code-cpp[NVC_MFCControlLadenDialog#31](../mfc/codesnippet/cpp/initializing-the-parts-of-a-cstatusbarctrl-object_1.cpp)]

Per altre informazioni sull'impostazione della modalità di una `CStatusBarCtrl` oggetto semplice, vedere [impostazione della modalità di un oggetto CStatusBarCtrl](../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
