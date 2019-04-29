---
title: 'Contenitori di controlli ActiveX: Attivazione manuale del contenimento dei controlli ActiveX'
ms.date: 09/12/2018
helpviewer_keywords:
- AfxEnableControlContainer method [MFC]
- ActiveX control containers [MFC], enabling
- ActiveX controls [MFC], enabling containers
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
ms.openlocfilehash: 80ca25192f3dbda711b0398917cfa68571cd2c55
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394936"
---
# <a name="activex-control-containers-manually-enabling-activex-control-containment"></a>Contenitori di controlli ActiveX: Attivazione manuale del contenimento dei controlli ActiveX

Se non è stato abilitato il supporto per il controllo ActiveX a durante la creazione guidata applicazione MFC usato per generare l'applicazione, è necessario aggiungere manualmente questo supporto. Questo articolo descrive il processo di aggiunta manuale di contenimento dei controlli ActiveX a un'applicazione contenitore OLE esistente. Se si conosce in anticipo che si desidera supporto per il controllo ActiveX nel contenitore OLE, vedere l'articolo [creazione di un contenitore di controlli ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control-container.md).

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

> [!NOTE]
>  Questo articolo usa un finestra di dialogo progetto basato su ActiveX controllo contenitore denominato contenitore e un controllo incorporato denominato Circ come esempi di procedure e codice.

Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file del progetto.

- Modificare la finestra di dialogo principale `InitInstance` funzione (disponibile nel contenitore. CPP) per la creazione guidata applicazione MFC effettua una chiamata a [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFCOleContainer#34](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]
    [!code-cpp[NVC_MFCOleContainer#35](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]

- Aggiungere quanto segue al file STDAFX del progetto. File di intestazione H:

   [!code-cpp[NVC_MFCOleContainer#36](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]

Dopo aver completato questi passaggi, ricompilare il progetto facendo clic **compilare** nel **compilazione** menu.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
