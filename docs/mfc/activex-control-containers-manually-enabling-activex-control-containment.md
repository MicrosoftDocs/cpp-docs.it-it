---
title: 'Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX'
ms.date: 09/12/2018
helpviewer_keywords:
- AfxEnableControlContainer method [MFC]
- ActiveX control containers [MFC], enabling
- ActiveX controls [MFC], enabling containers
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
ms.openlocfilehash: 94ad6e8356b5dab54ae97dbdd90812039d1425c9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322070"
---
# <a name="activex-control-containers-manually-enabling-activex-control-containment"></a>Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX

Se non è stato attivato il supporto dei controlli ActiveX quando è stata utilizzata la Creazione guidata applicazione MFC per generare l'applicazione, sarà necessario aggiungere questo supporto manualmente. In questo articolo viene descritto il processo per l'aggiunta manuale del contenimento dei controlli ActiveX a un'applicazione contenitore OLE esistente. Se si sa in anticipo che si desidera il supporto dei controlli ActiveX nel contenitore OLE, vedere l'articolo [Creazione di un contenitore](../mfc/reference/creating-an-mfc-activex-control-container.md)di controlli ActiveX MFC .

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

> [!NOTE]
> In questo articolo viene utilizzato un progetto contenitore di controlli ActiveX basato su finestra di dialogo denominato Container e un controllo incorporato denominato Circ come esempi nelle procedure e nel codice.

Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file del progetto.

- Modificare la funzione `InitInstance` della finestra di dialogo principale (disponibile in CONTAINER. CPP) da parte della Creazione guidata applicazione MFC effettuando una chiamata a [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), come nell'esempio seguente:

   [!code-cpp[NVC_MFCOleContainer#34](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]
    [!code-cpp[NVC_MFCOleContainer#35](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]

- Aggiungere quanto segue a STDAFX del progetto. File di intestazione H:

   [!code-cpp[NVC_MFCOleContainer#36](../mfc/codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]

Dopo aver completato questi passaggi, ricompilare il progetto scegliendo **Compila** dal menu **Compila** .

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
