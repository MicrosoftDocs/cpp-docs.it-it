---
title: "Adding an ATL Dialog Box | Microsoft Docs"
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
  - "ATL (progetti), aggiunta di risorse finestra di dialogo"
  - "finestre di dialogo, ATL"
  - "MFC (finestre di dialogo), finestre di dialogo ATL"
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding an ATL Dialog Box
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per aggiungere una finestra di dialogo ATL al progetto, è necessario che questo sia un progetto ATL o un progetto MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
 Per impostazione predefinita, la Creazione guidata finestra di dialogo ATL implementa una finestra di dialogo derivata da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md).  Questa classe include il supporto per contenere i controlli ActiveX e Windows.  Per evitare l'overhead del supporto dei controlli ActiveX, una volta generato il codice con la procedura guidata, sostituire tutte le istanze di `CAxDialogImpl` con [CSimpleDialog](../../atl/reference/csimpledialog-class.md) o [CDialogImpl](../../atl/reference/cdialogimpl-class.md) come classe base.  
  
> [!NOTE]
>  `CSimpleDialog` crea solo finestre di dialogo modali che supportano unicamente i controlli comuni di Windows.  `CDialogImpl` crea finestre di dialogo modali o non modali.  
  
### Per aggiungere una risorsa finestra di dialogo ATL al progetto  
  
1.  Creare un progetto ATL mediante la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md).  
  
2.  In [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto e scegliere **Aggiungi** dal menu di scelta rapida.  Scegliere **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **Finestra di dialogo ATL**.  Scegliere **Apri** per visualizzare la [Creazione guidata finestra ATL](../../atl/reference/atl-dialog-wizard.md).  
  
 Per ulteriori informazioni, vedere [Implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md).  
  
## Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Classi di finestra](../../atl/atl-window-classes.md)   
 [Message Maps](../../atl/message-maps-atl.md)