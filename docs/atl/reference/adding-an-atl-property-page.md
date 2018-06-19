---
title: Aggiunta di una pagina delle proprietà ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c84cdabddb96d2deeecd09f26101e37d9c99d0ce
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357069"
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

