---
title: 'Contenitori di controlli ActiveX: Attivazione manuale del contenimento dei controlli ActiveX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- AfxEnableControlContainer method [MFC]
- ActiveX control containers [MFC], enabling
- ActiveX controls [MFC], enabling containers
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bf1ba1273a349f685b70fec6706b566c2b618f23
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="activex-control-containers-manually-enabling-activex-control-containment"></a>Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX
Se non è stato abilitato il supporto per il controllo ActiveX a quando si utilizza la creazione guidata applicazione MFC per generare l'applicazione, è necessario aggiungere manualmente questo supporto. In questo articolo viene descritto il processo per l'aggiunta manuale di contenimento di controlli ActiveX a un'applicazione contenitore OLE esistente. Se si conosce in anticipo che si desidera supporto per il controllo ActiveX nel contenitore OLE, vedere l'articolo [la creazione di un contenitore di controlli ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
> [!NOTE]
>  Questo articolo viene utilizzata un finestra di dialogo progetto basato su ActiveX controllo contenitore denominato contenitore e un controllo incorporato denominato Circ come esempi di procedure e il codice.  
  
 Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file del progetto.  
  
-   Modificare la finestra di dialogo principale `InitInstance` funzione (disponibile nel contenitore. CPP) per la creazione guidata applicazione MFC effettua una chiamata a [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), come nell'esempio seguente:  
  
     [!code-cpp[NVC_MFCOleContainer#34](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]  
    [!code-cpp[NVC_MFCOleContainer#35](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]  
  
-   Aggiungere quanto segue al file STDAFX del progetto. File di intestazione H:  
  
     [!code-cpp[NVC_MFCOleContainer#36](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]  
  
 Dopo aver completato questi passaggi, ricompilare il progetto, fare clic su **compilare** sul **compilare** menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

