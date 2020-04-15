---
title: Utilizzo di elenchi di immagini in un controllo Toolbar
ms.date: 11/04/2016
helpviewer_keywords:
- toolbar controls [MFC], image
- image lists [MFC], toolbar controls
- CToolBarCtrl class [MFC], image lists
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
ms.openlocfilehash: 81468528c15300a7e9ace6b20fd9fb34818f1928
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366488"
---
# <a name="using-image-lists-in-a-toolbar-control"></a>Utilizzo di elenchi di immagini in un controllo Toolbar

Per impostazione predefinita, le immagini utilizzate dai pulsanti in un controllo barra degli strumenti vengono archiviate come una singola bitmap. Tuttavia, è anche possibile memorizzare le immagini dei pulsanti in un set di elenchi di immagini. L'oggetto controllo barra degli strumenti può utilizzare fino a tre elenchi di immagini separati:

- Elenco immagini abilitate Contiene immagini per i pulsanti della barra degli strumenti attualmente abilitati.

- Elenco immagini disabilitate Contiene immagini per i pulsanti della barra degli strumenti attualmente disabilitati.

- Elenco immagini evidenziate Contiene immagini per i pulsanti della barra degli strumenti attualmente evidenziati. Questo elenco immagini viene utilizzato solo quando la barra degli strumenti utilizza lo stile TBSTYLE_FLAT.

Questi elenchi immagini vengono utilizzati dal controllo `CToolBarCtrl` barra degli strumenti quando vengono associati all'oggetto. Questa associazione viene eseguita effettuando chiamate a [CToolBarCtrl::SetImageList](../mfc/reference/ctoolbarctrl-class.md#setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist)e [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).

Per impostazione predefinita, MFC utilizza la `CToolBar` classe per implementare le barre degli strumenti dell'applicazione MFC. Tuttavia, `GetToolBarCtrl` la funzione membro può `CToolBarCtrl` essere utilizzata per recuperare l'oggetto incorporato. È quindi possibile `CToolBarCtrl` effettuare chiamate alle funzioni membro utilizzando l'oggetto restituito.

Nell'esempio seguente viene illustrata questa`m_ToolBarImages`tecnica assegnando un elenco immagini enabled ( ) e disabled (`m_ToolBarDisabledImages`) a un `CToolBarCtrl` oggetto (`m_ToolBarCtrl`).

[!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/cpp/using-image-lists-in-a-toolbar-control_1.cpp)]

> [!NOTE]
> Gli elenchi di immagini utilizzati dall'oggetto barra degli strumenti devono essere oggetti permanenti. Per questo motivo, sono in genere membri dati di una classe MFC; in questo esempio, la classe della finestra cornice principale.

Una volta che gli `CToolBarCtrl` elenchi di immagini sono associati all'oggetto, il framework visualizza automaticamente l'immagine del pulsante appropriato.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
