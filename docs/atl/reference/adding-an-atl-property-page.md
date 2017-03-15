---
title: "Aggiunta di una pagina delle proprietà ATL | Documenti di Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: 7b6a6220a33890d99e6fb2bd81ce832b38720c50
ms.lasthandoff: 02/24/2017

---
# <a name="adding-an-atl-property-page"></a>Aggiunta di una pagina delle proprietà ATL
Per aggiungere una pagina delle proprietà della libreria ATL (Active Template) al progetto, è necessario avere questo sia stato creato come un'applicazione ATL o di un'applicazione MFC con supporto ATL. È possibile utilizzare il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
 Se si aggiunge una pagina delle proprietà per un controllo, il controllo deve supportare il [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) interfaccia. Per impostazione predefinita, questa interfaccia è nell'elenco di derivazione del controllo classe quando si [crea un controllo ATL](../../atl/reference/adding-an-atl-control.md) utilizzando il [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).  
  
> [!NOTE]
>  Se la classe di controllo non dispone di [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, è necessario aggiungerla manualmente.  
  
### <a name="to-add-an-atl-property-page-to-your-project"></a>Per aggiungere una pagina delle proprietà ATL al progetto  
  
1.  In entrambi **Esplora** o [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome del progetto a cui si desidera aggiungere la pagina delle proprietà ATL.  
  
2.  Nel menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi classe**.  
  
3.  Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) la finestra di dialogo, nel riquadro Modelli fare clic su **pagina delle proprietà ATL** e quindi fare clic su **aprire** per visualizzare il [guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).  
  
 Dopo aver creato una pagina delle proprietà per un controllo, è necessario fornire il [PROP_PAGE](http://msdn.microsoft.com/library/2155973e-b96c-4385-bf85-5d6112c969b8) voce nella mappa delle proprietà per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../../atl/atl-com-property-pages.md)   
 [Nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Esempio: Implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)


