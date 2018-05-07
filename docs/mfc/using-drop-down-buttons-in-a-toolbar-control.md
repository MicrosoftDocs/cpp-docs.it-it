---
title: Utilizzo di pulsanti di menu a discesa in un controllo Toolbar | Documenti Microsoft
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
ms.openlocfilehash: 39edda143e28d262e8eea826ced5c24855fb310b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-drop-down-buttons-in-a-toolbar-control"></a>Utilizzo di pulsanti a discesa in un controllo Toolbar
Oltre ai pulsanti di comando standard, una barra degli strumenti può anche avere pulsanti a discesa. Un pulsante di menu a discesa in genere è indicato dalla presenza di una freccia associata.  
  
> [!NOTE]
>  La freccia associata verrà visualizzata solo se il `TBSTYLE_EX_DRAWDDARROWS` stile esteso è stato impostato.  
  
 Quando l'utente fa clic su questa freccia (o il pulsante stesso, se è presente alcuna freccia), un `TBN_DROPDOWN` viene inviato il messaggio di notifica per l'elemento padre del controllo barra degli strumenti. È quindi possibile gestire questa notifica e visualizzare un menu a comparsa. simile al comportamento di Internet Explorer.  
  
 La procedura seguente viene illustrato come implementare un pulsante di menu a discesa della barra degli strumenti con un menu a comparsa:  
  
### <a name="to-implement-a-drop-down-button"></a>Per implementare un pulsante di menu a discesa  
  
1.  Una volta il `CToolBarCtrl` oggetto è stato creato, impostare il `TBSTYLE_EX_DRAWDDARROWS` di stile, tramite il codice seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]  
  
2.  Impostare il `TBSTYLE_DROPDOWN` stile per qualsiasi nuovo ([InsertButton](../mfc/reference/ctoolbarctrl-class.md#insertbutton) o [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons)) o esistente ([utilizzando SetButtonInfo](../mfc/reference/ctoolbarctrl-class.md#setbuttoninfo)) pulsanti che saranno i pulsanti di menu a discesa. Nell'esempio seguente viene illustrata la modifica di un pulsante esistente in un `CToolBarCtrl` oggetto:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]  
  
3.  Aggiungere un `TBN_DROPDOWN` gestore per la classe padre dell'oggetto della barra degli strumenti.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]  
  
4.  Nel nuovo gestore, visualizzare il menu di scelta rapida appropriato. Il codice seguente viene illustrato un metodo:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

