---
description: 'Altre informazioni su: uso degli elenchi di immagini in un controllo Toolbar'
title: Utilizzo di elenchi di immagini in un controllo Toolbar
ms.date: 11/04/2016
helpviewer_keywords:
- toolbar controls [MFC], image
- image lists [MFC], toolbar controls
- CToolBarCtrl class [MFC], image lists
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
ms.openlocfilehash: dbdac26f1d17997e14ed4ba16875ef3794e46a71
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154435"
---
# <a name="using-image-lists-in-a-toolbar-control"></a>Utilizzo di elenchi di immagini in un controllo Toolbar

Per impostazione predefinita, le immagini utilizzate dai pulsanti in un controllo Toolbar vengono archiviate come una singola bitmap. Tuttavia, è anche possibile archiviare le immagini dei pulsanti in un set di elenchi di immagini. L'oggetto controllo Toolbar può utilizzare fino a tre elenchi di immagini distinti:

- Enabled Image List contiene immagini per i pulsanti della barra degli strumenti attualmente abilitati.

- Disabled Image List contiene immagini per i pulsanti della barra degli strumenti attualmente disabilitati.

- L'elenco di immagini evidenziato contiene immagini per i pulsanti della barra degli strumenti attualmente evidenziati. Questo elenco di immagini viene usato solo quando la barra degli strumenti usa lo stile del TBSTYLE_FLAT.

Questi elenchi di immagini vengono utilizzati dal controllo Toolbar quando vengono associati all' `CToolBarCtrl` oggetto. Questa associazione viene eseguita effettuando chiamate a [CToolBarCtrl:: Seimagine](../mfc/reference/ctoolbarctrl-class.md#setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist)e [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).

Per impostazione predefinita, MFC utilizza la `CToolBar` classe per implementare le barre degli strumenti dell'applicazione MFC. Tuttavia, la `GetToolBarCtrl` funzione membro può essere utilizzata per recuperare l' `CToolBarCtrl` oggetto incorporato. È quindi possibile effettuare chiamate a `CToolBarCtrl` funzioni membro utilizzando l'oggetto restituito.

Nell'esempio seguente viene illustrata questa tecnica assegnando un elenco di immagini Enabled ( `m_ToolBarImages` ) e Disabled ( `m_ToolBarDisabledImages` ) a un `CToolBarCtrl` oggetto ( `m_ToolBarCtrl` ).

[!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/cpp/using-image-lists-in-a-toolbar-control_1.cpp)]

> [!NOTE]
> Gli elenchi di immagini utilizzati dall'oggetto Toolbar devono essere oggetti permanenti. Per questo motivo, sono comunemente membri dati di una classe MFC; in questo esempio, la classe della finestra cornice principale.

Una volta che gli elenchi di immagini sono associati all' `CToolBarCtrl` oggetto, il Framework Visualizza automaticamente l'immagine del pulsante corretta.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
