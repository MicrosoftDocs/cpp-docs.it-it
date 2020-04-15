---
title: Utilizzo di pulsanti a discesa in un controllo Toolbar
ms.date: 11/04/2016
f1_keywords:
- TBN_DROPDOWN
- TBSTYLE_EX_DRAWDDARROWS
helpviewer_keywords:
- CToolBarCtrl class [MFC], drop-down buttons
- toolbars [MFC], drop-down buttons
- drop-down buttons in toolbars
- TBSTYLE_EX_DRAWDDARROWS
- TBN_DROPDOWN notification [MFC]
ms.assetid: b859f758-d2f6-40d9-9c26-0ff61993b9b2
ms.openlocfilehash: 0bc4df4c07ec4b8bc5b488925cbb140609302186
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365059"
---
# <a name="using-drop-down-buttons-in-a-toolbar-control"></a>Utilizzo di pulsanti a discesa in un controllo Toolbar

Oltre ai pulsanti di comando standard, una barra degli strumenti può anche avere pulsanti a discesa. Un pulsante a discesa è solitamente indicato dalla presenza di una freccia verso il basso collegata.

> [!NOTE]
> La freccia rivolta verso il basso viene visualizzata solo se è stato impostato lo stile TBSTYLE_EX_DRAWDDARROWS esteso.

Quando l'utente fa clic su questa freccia (o il pulsante stesso, se non è presente alcuna freccia), viene inviato un messaggio di notifica TBN_DROPDOWN all'elemento padre del controllo barra degli strumenti. È quindi possibile gestire questa notifica e visualizzare un menu a comparsa; simile al comportamento di Internet Explorer.

La procedura seguente illustra come implementare un pulsante a discesa della barra degli strumenti con un menu a comparsa:

### <a name="to-implement-a-drop-down-button"></a>Per implementare un pulsante a discesaTo implement a drop-down button

1. Una `CToolBarCtrl` volta creato l'oggetto, impostare lo stile di TBSTYLE_EX_DRAWDDARROWS, utilizzando il codice seguente:Once your object has been created, set the TBSTYLE_EX_DRAWDDARROWS style, using the following code:

   [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]

1. Impostare lo stile di TBSTYLE_DROPDOWN per tutti i pulsanti nuovi ([InsertButton](../mfc/reference/ctoolbarctrl-class.md#insertbutton) o [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons)) o esistenti ([SetButtonInfo](../mfc/reference/ctoolbarctrl-class.md#setbuttoninfo)) che saranno pulsanti a discesa. Nell'esempio seguente viene illustrata `CToolBarCtrl` la modifica di un pulsante esistente in un oggetto:The following example demonstrates modifying an existing button in a object:

   [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]

1. Aggiungere un gestore di TBN_DROPDOWN alla classe padre dell'oggetto barra degli strumenti.

   [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]

1. Nel nuovo gestore, visualizzare il menu di scelta rapida appropriato. Il codice seguente illustra un metodo:The following code demonstrates one method:

   [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
