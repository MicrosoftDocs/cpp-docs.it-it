---
title: "Aggiunta di una pagina delle proprietà ATL | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: abf50e98d32789e357f5e13339ee2fc0a0daa331
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-an-atl-property-page"></a>Aggiunta di una pagina delle proprietà ATL
Per aggiungere una pagina delle proprietà Active Template Library (ATL) al progetto, è necessario avere questo sia stato creato come un'applicazione ATL o di un'applicazione MFC con supporto ATL. È possibile utilizzare il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
 Se si aggiunge una pagina delle proprietà per un controllo, il controllo deve supportare il [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) interfaccia. Per impostazione predefinita, questa interfaccia è nell'elenco di derivazione del controllo classe quando si [crea un controllo ATL](../../atl/reference/adding-an-atl-control.md) utilizzando il [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).  
  
> [!NOTE]
>  Se la classe di controllo non dispone di [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, è necessario aggiungerla manualmente.  
  
### <a name="to-add-an-atl-property-page-to-your-project"></a>Per aggiungere una pagina delle proprietà ATL al progetto  
  
1.  In entrambi **Esplora** o [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome del progetto a cui si desidera aggiungere la pagina delle proprietà ATL.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi classe**.  
  
3.  Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) la finestra di dialogo, nel riquadro dei modelli, fare clic su **pagina delle proprietà ATL** e quindi fare clic su **aprire** per visualizzare il [guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).  
  
 Dopo aver creato una pagina delle proprietà per un controllo, è necessario fornire il [PROP_PAGE](property-map-macros.md#prop_page) voce nella mappa delle proprietà per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../../atl/atl-com-property-pages.md)   
 [Nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)

