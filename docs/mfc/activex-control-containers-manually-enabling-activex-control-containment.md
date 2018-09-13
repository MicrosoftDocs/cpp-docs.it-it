---
title: 'Contenitori di controlli ActiveX: Attivazione manuale del contenimento dei controlli ActiveX | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- AfxEnableControlContainer method [MFC]
- ActiveX control containers [MFC], enabling
- ActiveX controls [MFC], enabling containers
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 845ad544b83f3f73c31eebd00218945c6028a622
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45534976"
---
# <a name="activex-control-containers-manually-enabling-activex-control-containment"></a>Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX
Se non è stato abilitato il supporto per il controllo ActiveX a durante la creazione guidata applicazione MFC usato per generare l'applicazione, è necessario aggiungere manualmente questo supporto. Questo articolo descrive il processo di aggiunta manuale di contenimento dei controlli ActiveX a un'applicazione contenitore OLE esistente. Se si conosce in anticipo che si desidera supporto per il controllo ActiveX nel contenitore OLE, vedere l'articolo [creazione di un contenitore di controlli ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control-container.md).

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).  
  
> [!NOTE]
>  Questo articolo usa un finestra di dialogo progetto basato su ActiveX controllo contenitore denominato contenitore e un controllo incorporato denominato Circ come esempi di procedure e codice.  
  
 Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file del progetto.  
  
-   Modificare la finestra di dialogo principale `InitInstance` funzione (disponibile nel contenitore. CPP) per la creazione guidata applicazione MFC effettua una chiamata a [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), come illustrato nell'esempio seguente:  
  
     [!code-cpp[NVC_MFCOleContainer#34](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]  
    [!code-cpp[NVC_MFCOleContainer#35](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]  
  
-   Aggiungere quanto segue al file STDAFX del progetto. File di intestazione H:  
  
     [!code-cpp[NVC_MFCOleContainer#36](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]  
  
 Dopo aver completato questi passaggi, ricompilare il progetto facendo clic **compilare** nel **compilazione** menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

