---
description: 'Altre informazioni su: contenitori di controlli ActiveX: abilitazione manuale del contenimento dei controlli ActiveX'
title: 'Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX'
ms.date: 09/12/2018
helpviewer_keywords:
- AfxEnableControlContainer method [MFC]
- ActiveX control containers [MFC], enabling
- ActiveX controls [MFC], enabling containers
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
ms.openlocfilehash: 44ca8961b064aee1efd4a24dd5bf6841399131e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277960"
---
# <a name="activex-control-containers-manually-enabling-activex-control-containment"></a>Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX

Se non è stato abilitato il supporto del controllo ActiveX quando è stata utilizzata la creazione guidata applicazione MFC per generare l'applicazione, sarà necessario aggiungere questo supporto manualmente. In questo articolo viene descritto il processo per l'aggiunta manuale del contenimento dei controlli ActiveX a un'applicazione contenitore OLE esistente. Se si sa in anticipo che si vuole il supporto del controllo ActiveX nel contenitore OLE, vedere l'articolo [creazione di un contenitore di controlli ActiveX MFC](reference/creating-an-mfc-activex-control-container.md).

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

> [!NOTE]
> Questo articolo usa un progetto contenitore di controlli ActiveX basato su finestra di dialogo denominato container e un controllo incorporato denominato circ come esempio nelle procedure e nel codice.

Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file del progetto.

- Modificare la funzione della finestra di dialogo principale `InitInstance` (presente nel contenitore. CPP) mediante la creazione guidata applicazione MFC che effettua una chiamata a [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), come nell'esempio seguente:

   [!code-cpp[NVC_MFCOleContainer#34](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]
    [!code-cpp[NVC_MFCOleContainer#35](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]

- Aggiungere quanto segue al STDAFX del progetto. File di intestazione H:

   [!code-cpp[NVC_MFCOleContainer#36](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]

Dopo aver completato questi passaggi, ricompilare il progetto scegliendo **Compila** dal menu **Compila** .

## <a name="see-also"></a>Vedi anche

[Contenitori di controlli ActiveX](activex-control-containers.md)
