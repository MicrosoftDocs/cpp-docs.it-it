---
title: Uso dei pulsanti di elenco a discesa in un controllo Toolbar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TBN_DROPDOWN
- TBSTYLE_EX_DRAWDDARROWS
dev_langs:
- C++
helpviewer_keywords:
- CToolBarCtrl class [MFC], drop-down buttons
- toolbars [MFC], drop-down buttons
- drop-down buttons in toolbars
- TBSTYLE_EX_DRAWDDARROWS
- TBN_DROPDOWN notification [MFC]
ms.assetid: b859f758-d2f6-40d9-9c26-0ff61993b9b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e58b6b9d64111e021586fc23a985f31c0edf9de
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50063770"
---
# <a name="using-drop-down-buttons-in-a-toolbar-control"></a>Utilizzo di pulsanti a discesa in un controllo Toolbar

Oltre ai pulsanti di comando standard, una barra degli strumenti può anche avere i pulsanti a discesa. Un pulsante a discesa in genere è indicato dalla presenza di una freccia associata.

> [!NOTE]
>  La freccia associata viene visualizzata solo se è stata impostata la TBSTYLE_EX_DRAWDDARROWS stile esteso.

Quando l'utente fa clic su questa freccia (o il pulsante stesso, se è presente alcuna freccia), viene inviato un messaggio di notifica TBN_DROPDOWN all'elemento padre del controllo della barra degli strumenti. È quindi possibile gestire tale notifica e visualizzare un menu a comparsa; simile al comportamento di Internet Explorer.

La procedura seguente viene illustrato come implementare un pulsante della barra degli strumenti elenco a discesa con un menu a comparsa:

### <a name="to-implement-a-drop-down-button"></a>Per implementare un pulsante a discesa

1. Una volta il `CToolBarCtrl` oggetto è stato creato, impostare lo stile TBSTYLE_EX_DRAWDDARROWS usando il codice seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]

1. Impostare lo stile TBSTYLE_DROPDOWN per qualsiasi nuovo ([InsertButton](../mfc/reference/ctoolbarctrl-class.md#insertbutton) oppure [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons)) o esistente ([utilizzando SetButtonInfo](../mfc/reference/ctoolbarctrl-class.md#setbuttoninfo)) pulsanti che saranno i pulsanti a discesa. Nell'esempio seguente viene illustrata la modifica di un pulsante esistente in un `CToolBarCtrl` oggetto:

   [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]

1. Aggiungere un gestore TBN_DROPDOWN alla classe padre dell'oggetto della barra degli strumenti.

   [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]

1. Nel nuovo gestore, visualizzare il menu di scelta rapida appropriato. Il codice seguente viene illustrato un metodo:

   [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

