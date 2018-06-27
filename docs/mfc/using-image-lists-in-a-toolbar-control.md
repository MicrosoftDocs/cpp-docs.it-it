---
title: Utilizzo degli elenchi di immagini in un controllo barra degli strumenti | Documenti Microsoft
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
ms.openlocfilehash: 50e7cb936c55ced1f16a325a031dccd1edde7d06
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951907"
---
# <a name="using-image-lists-in-a-toolbar-control"></a>Utilizzo di elenchi di immagini in un controllo Toolbar
Per impostazione predefinita, le immagini utilizzate dai pulsanti in un controllo barra degli strumenti vengono archiviate come una singola bitmap. Tuttavia, è anche possibile archiviare le immagini dei pulsanti in un set di elenchi di immagini. L'oggetto di controllo della barra degli strumenti è possibile usare fino a tre elenchi di immagini separato:  
  
-   Abilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente abilitate.  
  
-   Disabilitato immagine elenco contiene le icone per i pulsanti della barra degli strumenti sono attualmente disabilitate.  
  
-   Evidenziato immagine elenco contiene le icone per i pulsanti della barra degli strumenti attualmente evidenziata. Questo elenco di immagini viene utilizzato solo quando la barra degli strumenti Usa lo stile TBSTYLE_FLAT.  
  
 Gli elenchi immagini vengono usati dal controllo della barra degli strumenti quando si associa con il `CToolBarCtrl` oggetto. Viene eseguita questa associazione effettuando chiamate al [CToolBarCtrl::SetImageList](../mfc/reference/ctoolbarctrl-class.md#setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist), e [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).  
  
 Per impostazione predefinita, MFC utilizza il `CToolBar` classe per implementare le barre degli strumenti dell'applicazione MFC. Tuttavia, il `GetToolBarCtrl` funzione membro può essere utilizzata per recuperare l'oggetto incorporato `CToolBarCtrl` oggetto. È quindi possibile eseguire chiamate a `CToolBarCtrl` le funzioni membro tramite l'oggetto restituito.  
  
 L'esempio seguente illustra questa tecnica assegnando un abilitato (`m_ToolBarImages`) e quello disabilitato (`m_ToolBarDisabledImages`) elenco immagini da un `CToolBarCtrl` oggetto (`m_ToolBarCtrl`).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/cpp/using-image-lists-in-a-toolbar-control_1.cpp)]  
  
> [!NOTE]
>  Degli elenchi di immagini utilizzati dall'oggetto della barra degli strumenti devono essere oggetti permanenti. Per questo motivo, sono in genere dati membri di una classe MFC; In questo esempio, la classe della finestra cornice principale.  
  
 Una volta degli elenchi di immagini sono associati i `CToolBarCtrl` dell'oggetto, il framework visualizza automaticamente l'immagine del pulsante appropriato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

