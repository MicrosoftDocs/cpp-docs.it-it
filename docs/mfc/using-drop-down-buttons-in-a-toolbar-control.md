---
description: 'Altre informazioni su: uso di Drop-Down pulsanti in un controllo Toolbar'
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
ms.openlocfilehash: a37f39397f6b6f66bed1ad1d2fbd9530b55f3d7b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154461"
---
# <a name="using-drop-down-buttons-in-a-toolbar-control"></a>Utilizzo di pulsanti a discesa in un controllo Toolbar

Oltre ai pulsanti di push standard, una barra degli strumenti può includere anche pulsanti a discesa. Un pulsante a discesa è generalmente indicato dalla presenza di una freccia giù collegata.

> [!NOTE]
> La freccia giù collegata verrà visualizzata solo se è stato impostato lo stile esteso TBSTYLE_EX_DRAWDDARROWS.

Quando l'utente fa clic su questa freccia (o sul pulsante stesso, se non è presente alcuna freccia), viene inviato un messaggio di notifica TBN_DROPDOWN all'elemento padre del controllo Toolbar. È quindi possibile gestire questa notifica e visualizzare un menu di scelta rapida; simile al comportamento di Internet Explorer.

Nella procedura seguente viene illustrato come implementare un pulsante della barra degli strumenti a discesa con un menu a comparsa:

### <a name="to-implement-a-drop-down-button"></a>Per implementare un pulsante a discesa

1. Una volta `CToolBarCtrl` creato l'oggetto, impostare lo stile TBSTYLE_EX_DRAWDDARROWS usando il codice seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]

1. Impostare lo stile TBSTYLE_DROPDOWN per tutti i nuovi pulsanti ([InsertButton](../mfc/reference/ctoolbarctrl-class.md#insertbutton) o [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons)) o esistenti ([SetButtonInfo](../mfc/reference/ctoolbarctrl-class.md#setbuttoninfo)) che saranno pulsanti a discesa. Nell'esempio seguente viene illustrata la modifica di un pulsante esistente in un `CToolBarCtrl` oggetto:

   [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]

1. Aggiungere un gestore TBN_DROPDOWN alla classe padre dell'oggetto Toolbar.

   [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]

1. Nel nuovo gestore, visualizzare il menu di scelta rapida appropriato. Il codice seguente illustra un metodo:

   [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
