---
title: "Aggiunta di una pagina delle propriet&#224; ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), aggiunta di pagine delle proprietà"
  - "controlli [ATL], proprietà (pagine)"
  - "proprietà (pagine), aggiunta"
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una pagina delle propriet&#224; ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per aggiungere una pagina delle proprietà ATL al progetto, è necessario che questo sia stato creato come applicazione ATL o come applicazione MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
 Se si aggiunge una pagina delle proprietà per un controllo, è necessario che questo supporti l'interfaccia [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md).  Per impostazione predefinita, l'interfaccia si trova nell'elenco di derivazione della classe di controlli quando si [crea un controllo ATL](../../atl/reference/adding-an-atl-control.md) con la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).  
  
> [!NOTE]
>  Se la classe di controlli non contiene [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, aggiungerla manualmente.  
  
### Per aggiungere una pagina delle proprietà ATL al progetto  
  
1.  In **Esplora soluzioni** o [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul progetto a cui aggiungere la pagina delle proprietà ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **Pagina delle proprietà ATL**, quindi scegliere **Apri** per visualizzare la [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).  
  
 Una volta creata una pagina delle proprietà per un controllo, è necessario specificare la voce [PROP\_PAGE](../Topic/PROP_PAGE.md) nella mappa delle proprietà per il controllo.  
  
## Vedere anche  
 [Pagine delle proprietà](../../atl/atl-com-property-pages.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Example: Implementing a Property Page](../../atl/example-implementing-a-property-page.md)