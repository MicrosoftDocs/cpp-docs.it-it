---
title: Creazione di un contenitore di controlli ActiveX MFC
ms.date: 09/12/2018
f1_keywords:
- vc.appwiz.activex.container
helpviewer_keywords:
- MFC ActiveX controls [MFC], containers
- ActiveX control containers [MFC], creating
- containers [MFC], creating
- OLE controls [MFC], containers
ms.assetid: ec70e137-7c14-4940-bd0e-fd4edcc63ea5
ms.openlocfilehash: 27f229a23595d4842a77409a3cedc7a57aa43e6c
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079432"
---
# <a name="creating-an-mfc-activex-control-container"></a>Creazione di un contenitore di controlli ActiveX MFC

Un contenitore di controlli ActiveX è un programma padre che fornisce l'ambiente per l'esecuzione di un controllo ActiveX (in precedenza OLE). È possibile creare un'applicazione in grado di contenere controlli ActiveX con o senza MFC, ma è molto più semplice da eseguire con MFC.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](../activex-controls.md).

La creazione di un programma contenitore MFC mediante la [creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) consente di accedere alle numerose funzionalità dei controlli ActiveX e dell'automazione implementate dalle classi MFC e ActiveX. Queste funzionalità includono la modifica visiva, l'automazione, la creazione di file composti e il supporto per i controlli. Le opzioni di modifica visiva della creazione guidata applicazione MFC che il programma padre supporterà includono la creazione di un contenitore, un mini Server, un server completo e un programma costituito da un contenitore e da un server.

- **Nuova applicazione MFC**. Per creare un nuovo programma MFC che includa l'automazione, la modifica visiva, i file composti o il supporto per il controllo, utilizzare la creazione guidata applicazione MFC e scegliere le opzioni di automazione appropriate.

- **Applicazione MFC esistente**. Se si aggiunge un contenimento dei controlli a un'applicazione MFC esistente, vedere [contenitori di controlli OLE: abilitazione manuale del contenimento dei controlli OLE](../../mfc/activex-control-containers-manually-enabling-activex-control-containment.md).

### <a name="to-create-an-activex-container-for-any-of-the-following-types-of-applications"></a>Per creare un contenitore ActiveX per uno dei seguenti tipi di applicazioni

1. [Contenitori](../../mfc/containers.md)

1. [Modifica visiva](../../mfc/ole-mfc.md)

1. [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md)

## <a name="see-also"></a>Vedere anche

[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)
