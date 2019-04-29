---
title: Utilizzo di elenchi di immagini in un controllo Toolbar
ms.date: 11/04/2016
helpviewer_keywords:
- toolbar controls [MFC], image
- image lists [MFC], toolbar controls
- CToolBarCtrl class [MFC], image lists
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
ms.openlocfilehash: d027f7834c67ad0ed51d1b7fda5b2704972efe38
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411565"
---
# <a name="using-image-lists-in-a-toolbar-control"></a>Utilizzo di elenchi di immagini in un controllo Toolbar

Per impostazione predefinita, le immagini utilizzate dai pulsanti di un controllo barra degli strumenti vengono archiviate come una singola bitmap. Tuttavia, è anche possibile archiviare le immagini dei pulsanti in un set di elenchi di immagini. L'oggetto di controllo della barra degli strumenti è possibile usare fino a tre elenchi di immagini distinti:

- Abilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti attualmente abilitati.

- Disabilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente disabilitate.

- Evidenziato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente evidenziati. Questo elenco immagini viene usato solo quando la barra degli strumenti Usa lo stile TBSTYLE_FLAT.

Questi elenchi di immagini vengono utilizzati dal controllo della barra degli strumenti quando si associa con il `CToolBarCtrl` oggetto. Viene eseguita questa associazione effettuando chiamate al [CToolBarCtrl::SetImageList](../mfc/reference/ctoolbarctrl-class.md#setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist), e [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).

Per impostazione predefinita, MFC utilizza il `CToolBar` classe per implementare le barre degli strumenti dell'applicazione MFC. Tuttavia, il `GetToolBarCtrl` funzione membro può essere usata per recuperare l'oggetto incorporato `CToolBarCtrl` oggetto. È quindi possibile effettuare chiamate al `CToolBarCtrl` funzioni membro tramite l'oggetto restituito.

L'esempio seguente illustra questa tecnica assegnando un abilitato (`m_ToolBarImages`) e disabled (`m_ToolBarDisabledImages`) elenco immagini da un `CToolBarCtrl` oggetto (`m_ToolBarCtrl`).

[!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/cpp/using-image-lists-in-a-toolbar-control_1.cpp)]

> [!NOTE]
>  Gli elenchi di immagini utilizzati dall'oggetto della barra degli strumenti devono essere di oggetti permanenti. Per questo motivo, sono comunemente dati membri di una classe MFC. In questo esempio, la classe della finestra cornice principale.

Una volta sono associati gli elenchi di immagini di `CToolBarCtrl` dell'oggetto, il framework visualizza automaticamente l'immagine del pulsante appropriata.

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
