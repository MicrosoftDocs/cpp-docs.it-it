---
title: Aggiunta di una finestra di dialogo ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding dialog resources
- MFC dialog boxes, ATL dialogs
- dialog boxes, ATL
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d8c9969f4747c6c3fa2a39b7b0452f6ac54c9d58
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-an-atl-dialog-box"></a>Aggiunta di una finestra di dialogo ATL
Per aggiungere una finestra di dialogo ATL al progetto, il progetto deve essere un progetto ATL o un progetto MFC che include il supporto ATL. È possibile utilizzare il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
 Per impostazione predefinita, la creazione guidata finestra di dialogo ATL implementa una finestra di dialogo derivata da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Questa classe include il supporto per l'hosting di controlli ActiveX e Windows. Per evitare il sovraccarico di supporto per il controllo ActiveX, una volta generato il codice con la procedura guidata, sostituire tutte le istanze di `CAxDialogImpl` con [CSimpleDialog](../../atl/reference/csimpledialog-class.md) o [CDialogImpl](../../atl/reference/cdialogimpl-class.md) come classe base .  
  
> [!NOTE]
>  `CSimpleDialog`Crea solo le finestre di dialogo modale che supportano solo i controlli comuni di Windows. `CDialogImpl`Crea finestre di dialogo modale o non modale.  
  
### <a name="to-add-an-atl-dialog-resource-to-your-project"></a>Per aggiungere una risorsa finestra di dialogo ATL al progetto  
  
1.  Creare un progetto ATL utilizzando il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md).  
  
2.  Da [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome del progetto e fare clic su **Aggiungi** dal menu di scelta rapida. Fare clic su **aggiungere classe**.  
  
3.  Nel riquadro dei modelli del [Aggiungi classe](../../ide/add-class-dialog-box.md) la finestra di dialogo, fare clic su **finestra di dialogo ATL**. Fare clic su **aprire** per visualizzare il [Creazione guidata finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md).  
  
 Per ulteriori informazioni, vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Classi di finestra](../../atl/atl-window-classes.md)   
 [Mappe messaggi](../../atl/message-maps-atl.md)

