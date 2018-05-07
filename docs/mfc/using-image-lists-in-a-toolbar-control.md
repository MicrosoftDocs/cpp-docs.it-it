---
title: Utilizzo di elenchi di immagini in un controllo barra degli strumenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- toolbar controls [MFC], image
- image lists [MFC], toolbar controls
- CToolBarCtrl class [MFC], image lists
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76325d2b078f51860cad7fa3fab61ed7c518a41c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-image-lists-in-a-toolbar-control"></a>Utilizzo di elenchi di immagini in un controllo Toolbar
Per impostazione predefinita, le immagini utilizzate dai pulsanti in un controllo barra degli strumenti vengono archiviate come una singola bitmap. È anche possibile archiviare le immagini dei pulsanti in un set di elenchi di immagini. L'oggetto di controllo della barra degli strumenti è possibile utilizzare fino a tre elenchi di immagini separato:  
  
-   Abilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente abilitate.  
  
-   Disabilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente disabilitate.  
  
-   Evidenziato immagine elenco contiene le icone per i pulsanti della barra degli strumenti attualmente evidenziata. Questo elenco immagini viene utilizzato solo quando si utilizza la barra degli strumenti di **TBSTYLE_FLAT** stile.  
  
 Gli elenchi immagini vengono utilizzati dal controllo della barra degli strumenti quando si associa con il `CToolBarCtrl` oggetto. Viene eseguita questa associazione effettuando chiamate al [CToolBarCtrl::SetImageList](../mfc/reference/ctoolbarctrl-class.md#setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist), e [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).  
  
 Per impostazione predefinita, MFC utilizza la `CToolBar` classe per implementare le barre degli strumenti di applicazione MFC. Tuttavia, il `GetToolBarCtrl` funzione membro può essere utilizzata per recuperare l'oggetto incorporato `CToolBarCtrl` oggetto. È quindi possibile effettuare chiamate a `CToolBarCtrl` le funzioni membro tramite l'oggetto restituito.  
  
 L'esempio seguente illustra questa tecnica assegnando un abilitato (`m_ToolBarImages`) e disabilitato (`m_ToolBarDisabledImages`) elenco immagini da un `CToolBarCtrl` oggetto (`m_ToolBarCtrl`).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/cpp/using-image-lists-in-a-toolbar-control_1.cpp)]  
  
> [!NOTE]
>  Gli elenchi di immagini utilizzati dall'oggetto della barra degli strumenti devono essere oggetti permanenti. Per questo motivo, sono in genere dati membri di una classe MFC. In questo esempio, la classe finestra cornice principale.  
  
 Una volta in cui sono associati elenchi di immagini di `CToolBarCtrl` dell'oggetto, il framework visualizza automaticamente l'immagine del pulsante appropriato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

