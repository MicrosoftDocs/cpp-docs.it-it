---
title: Stili dei controlli toolBar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ToolBar control styles [MFC]
ms.assetid: 0f717eb9-fa32-4263-b852-809238863feb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 35b5b87944f2b0f9ce78adbe42b59d92b98a6e5a
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37885835"
---
# <a name="toolbar-control-styles"></a>Stili dei controlli ToolBar
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) dispone di un set di flag di stile che determinano l'aspetto e comportamento del pulsante. È possibile impostare una combinazione di questi flag chiamando [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle). In questo argomento vengono elencati i valori dei flag di stile e i relativi significati.  
  
## <a name="property-values"></a>Valori delle proprietà  
 I valori seguenti determinano il tipo di pulsante che il controllo rappresenta:  
  
 TBBS_BUTTON  
 Pulsante di comando standard (impostazione predefinita).  
  
 TBBS_CHECKBOX  
 Casella di controllo.  
  
 TBBS_CHECKGROUP  
 Inizio di un gruppo di caselle di controllo.  
  
 TBBS_GROUP  
 Inizio di un gruppo di pulsanti.  
  
 TBBS_SEPARATOR  
 Separatore.  
  
 I valori seguenti rappresentano lo stato corrente del controllo:  
  
 TBBS_CHECKED  
 Casella di controllo selezionata.  
  
 TBBS_DISABLED  
 Controllo disabilitato.  
  
 TBBS_INDETERMINATE  
 Casella di controllo in uno stato indeterminato.  
  
 TBBS_PRESSED  
 Pulsante premuto.  
  
 Il valore seguente modifica il layout del pulsante nella barra degli strumenti:  
  
 TBBS_BREAK  
 Posiziona l'elemento in una nuova riga o in una nuova colonna senza la separazione di colonne.  
  
## <a name="remarks"></a>Note  
 Lo stile corrente viene archiviato in [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle). Non impostare un nuovo valore `m_nStyle` direttamente, in quanto alcune classi derivate eseguono elaborazioni aggiuntive quando si chiama `SetStyles`.  
  
 Il gestore visualizzazione determina l'aspetto dei pulsanti in ciascuno stato. Visualizzare [gestione visualizzazione](../../mfc/visualization-manager.md) per altre informazioni.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarbutton. h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Gestione visualizzazione](../../mfc/visualization-manager.md)


